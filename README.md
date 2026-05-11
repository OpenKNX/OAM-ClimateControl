# OAM-ClimateControl

Dieses Modul erlaubt die Steuerung von zwei Kühl-/Heizsystemen über ein HVAC-Gruppenobjekt.

## Features

- Übergreifender Automatikmodus für zwei Heizsysteme
- Behandlung bei offenem Fenster
- Umschaltung zwischen Sommer- und Winterbetrieb
- Berechnung der 24-Stunden-Durchschnittstemperatur
- Wiederherstellung des eingestellten Modus, der Solltemperatur und der letzten Außentemperaturwerte nach Busspannungsausfall und Gerätestart
- Über die integrierte Pulsweitenmodulation kann auch ein normaler Schaltaktor zu einem Heizungsaktor mit angeschlossen Thermoelektrisches-Ventile umfunktioniert werden

## Anwenderdokumentation

Die Anwenderdokumentation ist [hier](./doc/Applikationsbeschreibung.md) zu finden.

## Firmware

Eine vorkompilierte Firmware ist [hier](https://github.com/OpenKNX/OAM-ClimateControl/releases) verfügbar. ZIP-Datei herunterladen, entpacken und der Anleitung in der README folgen.

## Hardware

Als Hardware kann jede OpenKNX- oder OpenKNX-Ready-Hardware verwendet werden.
Die vorkompilierte Firmware unterstützt:

- [REG1-Base](https://github.com/OpenKNX/OpenKNX/wiki/REG1-Base)

- Für Einsteiger wird die Verwendung des [OpenKNX-REG1](https://github.com/OpenKNX/OpenKNX/wiki/OpenKNX-REG1) ([Bezugsquelle](https://muster.ing-dom.de/KNX-Geraete/OpenKNX-REG1-Base-Komplettbausatz.html)) empfohlen.

## Lizenz

Diese Software steht unter der [GNU GPL v3](LICENSE).
