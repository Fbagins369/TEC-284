from gpiozero import LED, Button
from time import sleep


#LED color channels
red_led = LED(17)
green_led = LED(27)
blue_led = LED(22)

#buttons for color selection
red_button = Button(5)
green_button = Button(6)
blue_button = Button(13)


def update_leds():
    if red_button.is_pressed:
        red_led.on()
    else:
        red_led.off()

    if green_button.is_pressed:
        green_led.on()
    else:
        green_led.off()

    if blue_button.is_pressed:
        blue_led.on()
    else:
        blue_led.off()



#Program control
while True:
    update_leds()#Function call
    sleep(0.05)  #Small delay for stability