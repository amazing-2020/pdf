import pprint, pickle

pkl_file = open('data.pki', 'rb')
data1 = pickle.load(pkl_file)
pprint.pprint(data1)
data2 = pickle.load(pkl_file)
pprint.pprint(data2)

pkl_file.close()