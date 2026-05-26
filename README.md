# Adaptive Multimodal AI for Emotion Consistency & Deception Detection

## Overview

This project is a real-time multimodal AI system designed to analyze human behavioral patterns and detect potential inconsistencies in emotional responses.

Unlike traditional single-signal systems, this project combines computer vision and physiological signals to improve robustness in behavioral interpretation.

The system is designed as a prototype for intelligent behavioral analysis applications such as security screening, human-computer interaction, and assistive monitoring systems.

---

## Problem Statement

Single-source emotion detection systems (facial expression or physiological signals alone) often fail in real-world scenarios due to incomplete or unreliable data.

This project addresses this limitation by:

* Combining multiple behavioral indicators
* Performing real-time analysis
* Detecting inconsistencies across multiple modalities

---

## System Features

* Eye blink rate detection
* Eye gaze tracking
* Head pose estimation
* Shoulder movement analysis
* Heart rate monitoring via Arduino sensor
* Baseline calibration for personalized analysis
* Real-time behavioral consistency evaluation
* Live visualization dashboard using Tkinter

---

## Technologies Used

* Python
* OpenCV
* MediaPipe
* Tkinter
* Arduino (C++)
* SQLite
* NumPy (if applicable)

---

## System Architecture

Webcam Input → OpenCV → MediaPipe
→ Facial Feature Extraction
→ Behavioral Signal Analysis
→ Heart Rate Sensor (Arduino Input)
→ Multimodal Fusion Engine
→ Deception / Consistency Output
→ Tkinter Dashboard Visualization

---

## How It Works

1. The system captures live video using a webcam
2. Facial landmarks are extracted using MediaPipe
3. Eye blink rate, gaze direction, head pose, and shoulder movement are computed
4. Heart rate data is collected from an Arduino sensor
5. A baseline calibration phase establishes user-specific thresholds
6. All signals are fused to detect behavioral inconsistencies
7. Results are displayed in a real-time dashboard

---

## Project Structure

```
src/           Main Python application
hardware/      Arduino code (C++)
data/          Calibration data and stored parameters
screenshots/   UI and system output images
```

---

## How to Run

Install dependencies:

```bash
pip install -r requirements.txt
```

Run the application:

```bash
python src/main.py
```

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


