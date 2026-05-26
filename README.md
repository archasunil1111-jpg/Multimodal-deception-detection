# Adaptive Multimodal AI for Emotion Consistency & Deception Detection

##  Overview

This project is a real-time multimodal AI system designed to analyze human behavioral patterns and detect potential inconsistencies in emotional responses.

Unlike traditional single-signal systems, this project combines computer vision and physiological signals to improve robustness in behavioral interpretation.

The system is designed as a prototype for intelligent behavioral analysis applications such as security screening, human-computer interaction, and assistive monitoring systems.

## Problem Statement

Single-source emotion detection systems (only facial expression or only physiological data) often fail in real-world scenarios due to unreliable or incomplete signals.

This project addresses this limitation by:

Combining multiple behavioral indicators
Performing real-time analysis
Detecting inconsistencies across multiple modalities

## System Features
Eye blink rate detection
Eye gaze tracking
Head pose estimation
Shoulder movement analysis
Heart rate monitoring via Arduino sensor
Baseline calibration for personalized analysis
Real-time behavioral consistency evaluation
Live visualization dashboard using Tkinter

##  Technologies Used

* Python
* OpenCV
* MediaPipe
* Tkinter
* Arduino
* SQLite

---

##  How It Works

1. The system captures live video using a webcam
2. Extracts facial and behavioral features
3. Reads heart rate data from Arduino
4. Performs baseline calibration
5. Detects deviations indicating suspicious behavior

---

##  How to Run

```bash
pip install -r requirements.txt
python src/main.py
```

---

##  Project Structure

* `src/` → Main Python source code
* `hardware/` → Arduino code
* `data/` → Calibration data

---

## Screenshots

### Real-Time Analysis Dashboard
![Dashboard](screenshots/output.png)

### Hardware Circuit Diagram
![Circuit Diagram](screenshots/pulse_sensor_cd.jpg)

---

##  Future Scope

* Deep learning integration
* Speech analysis
* Web/mobile deployment
* Improved accuracy using large datasets

---


