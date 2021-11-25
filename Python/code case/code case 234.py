class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FALT = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'


print(bcolors.WARNING + "Warning font color!" + bcolors.ENDC)
print(bcolors.HEADER + "Header font color" + bcolors.ENDC)
print(bcolors.UNDERLINE + "Under line color" + bcolors.OKBLUE + " Okblue color")
