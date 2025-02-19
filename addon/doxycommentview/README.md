# Viewer for the content of a Doxygen style comment block

## Contents

The directory contains an index.html page and a python3 helper script.
The script can be used to start a local web server that can do life rendering of
the content of a doxygen comment block.

Similar to e.g. https://markdownlivepreview.com/ but using doxygen as render engine.

## To prepare the server

Place a doxygen.css in the same directory as the doxycommentview.py script.

This file can be generated running

    doxygen -w html /tmp/header.html /tmp/footer.html doxygen.css path/to/Doxyfile

or, alternatively, copied from an existing HTML output directory generated by doxygen.

## To run the server invoke:

    python3 doxycommentview.py --doxyfile /path/to/Doxyfile

The relevant settings, such as alias definitions, will be taken from the Doxyfile.

If desired you can set the port for the webserver using `--port` and
point to the location of the doxygen binary using `--doxygen`

Once the server is started, point your browser to the index page

    firefox http://localhost:8000/index.html

You should see a panel to enter text on the left hand side and the output
rendered by doxygen on the right hand side of the page.

You can copy and paste the contents of this README.md file to test it quickly.

