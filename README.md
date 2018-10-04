### About

Pixracer examples is repo with examples for [Pixracer](https://docs.px4.io/en/flight_controller/pixracer.html) based on [libopencm3](https://github.com/libopencm3).

Examples are done with [Black Magic probe debugger](https://github.com/blacksphere/blackmagic/wiki) and [Visual Studio Code](https://code.visualstudio.com/) editor (VSC). Examples include json files with building and debugging settings for VSC.

### Connecting Pixracer with Black Magic Probe

Here is the [link](http://igor-misic.blogspot.com/2018/06/how-connect-pixracer-with-black-magic.html) to the blog post which describes how to connect it.

### Static Linux device port for Black Magic Probe (VSCode config in examples use it)

You would like to have the same port name each time you connect disconnect your Black Magic Probe. Here is the description of how to do it.

Create or modify the file:

``` sudo nano /etc/udev/rules.d/50-usb.rules```

Add this line:

``` ACTION=="add", ATTRS{interface}=="Black Magic GDB Server", MODE="0777", SYMLINK+="ttyBMP" ```

and after editing, do this command:

```sudo udevadm trigger```

After you reconnect your BMP, you can use ttyBMP instead ttyACMx. 







