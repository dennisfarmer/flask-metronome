# flask-metronome
Metronome web application written in Python; will support tonal energy metronome tracks via XML file upload.


I'm bored over Christmas break and also want to subtly procrastinate working on my UMich transfer admisson essays so I've decided to write a metronome application that reads Tonal Energy track files so that people don't have to pay for the app. Then again, I had to pay for the app in order to be able to record the Tonal Energy metronome sounds, but the modern invention of credit cards let me spend money that I don't currently have, so it's no big deal!

## Description
The application will consist of an XML parser to read Tonal Energy's `.tetmetgroup` files, and I'll likely copy some of the audio code from my <a href="https://github.com/dennisfarmer/deep-music-visualizer">Music Visualizer</a> project to create the timings and sounds for the metronome playback. I plan to write the backend in Python using Flask to run the application and something like nginx/uWSGI as a host server. One of my band buds will write up the frontend interface in HTML/CSS and I'll just stick the frontend and backend together with some more Python.

stay tuned for more :)
