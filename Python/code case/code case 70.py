import os.path
import os
ls = []


def getAppointFile(path, ls):
    filelist = os.listdir(path)
    try:
        for tmp in filelist:
            pathTmp = os.path.join(path, tmp)
            if os.path.isdir(pathTmp) == True :
                getAppointFile(pathTmp, ls)
            elif pathTmp[pathTmp.rfind('.') + 1:].upper() == 'PY':
                ls.append(pathTmp)
    except PermissionError:
        pass


def main():
    while True:
        path = input('Please enter the path:').strip()
        if os.path.isdir(path) == True:
            break
    getAppointFile(path, ls)
    print(ls)
    print(len(ls))


main()
