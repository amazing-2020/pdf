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


print(make_album('love', 'mike'))
print(make_album('noodle', 'cai', 8))
print(make_album('nvidia', 'huang', 999))
