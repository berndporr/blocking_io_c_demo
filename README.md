# blocking_io_c_demo
c demo which demonstrates the Linux blocking I/O for event processing.

## How to compile

```
cmake .
make
```

## How to run

Find out which input device is the mouse.
Type:
```
ls -l /dev/input/by-id
```

For example:
```
lrwxrwxrwx 1 root root 9 Jan 15 11:40 usb-046d_0825_D8A96E50-event-if00 -> ../event7
lrwxrwxrwx 1 root root 9 Jan 15 11:40 usb-DELL_Dell_USB_Entry_Keyboard-event-kbd -> ../event3
lrwxrwxrwx 1 root root 9 Jan 15 11:40 usb-SEMICCHIP_Usb_Mouse-event-mouse -> ../event2
lrwxrwxrwx 1 root root 9 Jan 15 11:40 usb-SEMICCHIP_Usb_Mouse-mouse -> ../mouse0
lrwxrwxrwx 1 root root 9 Jan 15 11:40 usb-Sennheiser_Sennheiser_SC30_for_Lync_0000000000-event-if03 -> ../event6
```
where the mouse is:
```
/dev/input/event2
```

The run it as:
```
sudo ./mouseevent_linux_c /dev/input/event2
```

It will block (i.e. puts the thread to sleep) and will wake up when you move the mouse!


## More info

https://askubuntu.com/questions/1043832/difference-between-dev-input-mouse0-and-dev-input-mice

## Author

Bernd Porr, bernd.porr@glasgow.ac.uk
