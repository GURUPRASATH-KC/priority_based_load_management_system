Priority Based Load Management System

## Overview
The Priority Based Load Management System is designed to manage electrical loads efficiently during overload or peak demand conditions. In conventional power systems, when the electrical load exceeds the available generation capacity, an entire feeder is disconnected to maintain system stability. This results in complete power interruption for consumers.

This project introduces a smart and efficient solution where loads are managed according to predefined priority levels instead of disconnecting the entire feeder. Essential loads remain active while low-priority loads are disconnected automatically during overload conditions.

The system helps in reducing complete blackout situations and improves power distribution efficiency in residential, industrial, and commercial applications.

---

## Objective

In modern developing countries, electrical power demand is continuously increasing due to rapid industrial, commercial, and domestic growth. During peak load conditions, the generated power may become insufficient to meet the total demand.

In traditional systems, utilities often disconnect an entire feeder to balance the load. However, restoring additional generation requires time. Starting alternators or increasing generator output may take approximately 1 to 1.5 hours, causing delayed power restoration.

Earlier, domestic areas were considered low priority compared to major cities or industries. But in today’s world, residential areas also require continuous electricity for education, healthcare, communication, and daily life.

To overcome this problem, this project proposes a Priority Based Load Management System where:
- High-priority loads remain ON
- Medium-priority loads are controlled automatically
- Low-priority loads are disconnected first during overload conditions

This method improves energy management and ensures uninterrupted supply to important loads.

---

## Features
- Automatic load shedding
- Priority-based load control
- Fast response during overload conditions
- Efficient power management
- Reduced complete feeder shutdown
- Low-cost implementation
- Smart consumer-side load management

---

## Components Used

### Hardware Components
- Arduino Uno
- 3-Channel Relay Module
- LCD Display (16x2)
- Voltage Sensor Module
- Electrical Loads
- Power Supply Unit
- Connecting Wires
- Breadboard

### Software Used
- Arduino IDE
- Proteus Simulation (Optional)

---

## Working Principle

The system continuously monitors the electrical condition using a voltage sensor. Different electrical loads are connected through relay modules and categorized into different priority levels.

The Arduino Uno acts as the main controller of the system. Based on the system condition:
- High-priority loads remain continuously ON
- Medium-priority loads are controlled when necessary
- Low-priority loads are disconnected first during overload

The relay module performs the switching operation automatically according to the programmed logic. The LCD display shows the current load status and system condition.

This approach avoids complete feeder shutdown and maintains supply for important loads.

---

## Load Priority Levels

| Priority Level | Load Type | Status During Overload |
|----------------|-----------|------------------------|
| High Priority  | Essential Loads | Remains ON |
| Medium Priority | Moderate Importance Loads | Controlled Automatically |
| Low Priority | Non-Essential Loads | Disconnected First |

---

## Circuit Description

The circuit consists of an Arduino Uno connected to:
- Relay module for load switching
- Voltage sensor for monitoring supply conditions
- LCD display for status indication

Each relay controls a separate electrical load based on priority. The Arduino processes the sensor input and controls the relays according to predefined conditions.

---

## Applications
- Smart Homes
- Residential Areas
- Industries
- Hospitals
- Commercial Buildings
- Smart Grid Systems
- Energy Management Systems

---

## Advantages
- Prevents complete blackout conditions
- Maintains supply for essential loads
- Reduces restoration delay
- Improves power system reliability
- Efficient utilization of available power
- Supports smart energy management

---

## Future Scope
- IoT-based monitoring system
- GSM alert integration
- Mobile application control
- AI-based load prediction
- Renewable energy integration
- Cloud-based energy monitoring

---

## Results

The project successfully demonstrated priority-based load control during overload conditions.

### Observations
- High-priority loads remained ON continuously
- Medium-priority loads were managed automatically
- Low-priority loads were disconnected first
- Power interruption was minimized
- System response was fast and reliable

The system improved electrical load management efficiency and reduced unnecessary power interruption.

---

## Project Structure

```text
priority-based-load-management-system/
│
├── README.md
│── code/
|__hardware/
