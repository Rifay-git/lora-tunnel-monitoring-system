# 🛰️ LoRa-based Tunnel Worker Safety System

An ultra-low-cost, real-time safety communication system using **LoRa technology** designed for underground tunnel workers. Built in 24 hours with just ₹2000 during a national hackathon.

---

## 🚀 Overview

Tunnel workers often face life-threatening risks due to lack of reliable communication. This project offers a **wireless emergency alert system** using **LoRa modules**, allowing workers to transmit signals from deep tunnels to above-ground teams, even without mobile networks.

---

## 🎯 Key Features

- 📡 Long-range, low-power LoRa communication
- 🚨 Real-time alert system from transmitter to receiver
- 🌐 Remote data logging to ThingSpeak
- 💸 Total cost: ₹2000
- ⏱️ Built in 24 hours during SJIT Inventify Hackathon
- 🏅 Shortlisted top 38 out of 115 teams

---

## 🔧 System Architecture

![System Architecture](docs/system_architecture.png)

> Upload your diagram as `docs/system_architecture.png` and GitHub will show it here.

---

## 🛠️ Tech Stack

| Category       | Tools/Components               |
|----------------|-------------------------------|
| Microcontrollers | Arduino Nano / UNO             |
| Wireless Comm.  | LoRa SX1278 (433 MHz)          |
| Software        | Arduino IDE, ThingSpeak        |
| Sensors         | Pushbutton (for demo alerts)   |
| Power Supply    | 9V Battery                     |

---

## 📂 Project Structure

```bash
LoRa/
├── code/           # Arduino transmitter & receiver code
├── docs/           # Diagrams, architecture visuals
├── hardware/       # Circuit diagrams, PCB sketches
├── report/         # Final PDF report
├── references.txt  # Tools, sources used
└── README.md       # This file
