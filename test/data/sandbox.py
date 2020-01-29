'''
@author: Bartosz Piwkowski
@brief: one file for all code experiments and checks
'''

import pandas as pd

MANUFACTURERS = ['BMW', 'Lotus', "Mazda", "Suzuki", "Volvo"]
CARS_SOLD = [2000, 100, 5000, 10000, 8000]
INVENTORY = []

class Car(object):
    def __init__(self):
        pass

if __name__ == "__main__":
    print("sandbox run ...")
    print("manufacturers:")

    for i, item in enumerate(MANUFACTURERS):
      INVENTORY.append("{0} : {1}".format(i, item))
      print(INVENTORY[-1])

    cars_sold = pd.DataFrame(MANUFACTURERS, CARS_SOLD)

    print(cars_sold.head())


    print("end.")
