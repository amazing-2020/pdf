definitions = {'str': 'Textual data in Python is handled with str objects.',
               'key in d': 'Return True if d has a key key, else False.',
               'dict': 'A mapping object maps hashable values to arbitrary objects.',
               'list': 'The constructor builds a list whose items are the same and in the same order as iterable’s '
                       'items.',
               'tuple': 'Tuples are immutable sequences, typically used to store collections of heterogeneous data.',
               'Bytes and Bytearray Operations': 'Both bytes and bytearray objects support the common sequence '
                                                 'operations.',
               'list(d)': 'Return a list of all the keys used in the dictionary d.',
               'items()': 'Return a new view of the dictionary’s items ((key, value) pairs). See the documentation of '
                          'view objects.',
               'update([other])': 'Update the dictionary with the key/value pairs from other, overwriting existing '
                                  'keys. Return None.',
               'len(dictview)': 'Return the number of entries in the dictionary.'}

for definition, description in definitions.items():
    print(f"{definition}:\n\t{description}")
