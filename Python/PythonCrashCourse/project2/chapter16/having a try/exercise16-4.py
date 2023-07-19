from pathlib import Path
import csv


def get_info(data_describe, filename):
    board = ["NAME", "TMAX", "TMIN"]
    data = {}
    file_path = Path(filename)
    content = file_path.read_text().splitlines()
    lines = csv.reader(content)
    first_line = next(lines)

    for i, j in enumerate(first_line):
        if j == board[1]:
            data[board[1]] = i
        elif j == board[2]:
            data[board[2]] = i
        elif j == board[0]:
            data[board[0]] = i
    second_line = next(lines)
    data[board[0]] = data_describe + '\n' + second_line[data[board[0]]]
    data['Title'] = data[board[0]]
    data.pop(board[0])

    return data
