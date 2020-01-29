'''
@author: Bartosz Piwkowski
@brief: one file for all code experiments and checks
'''

MANUFACTURERS = ['BMW', 'Lotus', "Mazda", "Suzuki", "Volvo"]

class Car(object):
    def __init__(self):
        pass

if __name__ == "__main__":
    print("sandbox run ...\n")

    print("manufacturers:\n")

    for i, item in enumerate(MANUFACTURERS):
        print ("{0} : {1}".format(i, item))
