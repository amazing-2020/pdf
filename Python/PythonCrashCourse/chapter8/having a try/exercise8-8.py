def make_album(album, singer, number_of_songs=None):
    if number_of_songs:
        album_info = {
            'album': album.upper(),
            'singer': singer.title(),
            'number in it': number_of_songs,
        }
    else:
        album_info = {
            'album': album.upper(),
            'singer': singer.title(),
        }
    return album_info


while True:
    print("\nPlease enter the album info: ")
    print("(enter 'q' any time to quit)")

    album_name = input("album name: ")
    if album_name == 'q':
        break
    singer = input("Enter the singer: ")
    if singer == 'q':
        break
    print(make_album(album_name, singer))
