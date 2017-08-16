---
layout: page
title: 3D-Druck Workshop
permalink: /3d-druck/3d-druck-workshop
---
# 3D-Druck Workshop

<!-- TODO: Add Images -->

Im Rahmen des 3D Druck Worhsops sollen die Teilnehmer an grundlagen das 3D Druckens herangeführt werden. Am Beispiel eines Halstuch Rings werden sie erste 3D Objekte am Computer erstellen und am ende mit dem 3D Drucker ausdrucken.

## Vorraussetzungen
Foglende Materialien und Werkzeuge sollten zur Verfügung stehen:

- 3D Drucker
- 1 Laptop für 2 Teilnehmer (mit Chrome Browser)
- Internet Verbindung

Altersgruppe: ab 11 Jahre
Zeit: 2 Std.

Es ist wichtig, dass der Workshopleiter sich mit der Software auseinander setzt um bei aufkommenden Fragen den Teilnehmern helfen zu können.

## Einleitung

3D-Drucken ist ein drei stufiger Prozess. Im ersten Schritt muss ein 3D-Modell erstellt werden. Hierzu eignen sich 3D CAD Anwendungen wie z.B. [TinkerCAD](http://tinkercad.com), [AutoCAD Fusion 360](https://www.autodesk.de/products/fusion-360/overview) oder [Blender](https://www.blender.org/). Im weiteren verlauf des Workshops werden wir TinkerCAD verwenden. Es ist ein  Borwser Basiertes 3D CAD Programm für Einsteiger.

Sobald das 3D Modell in form einer STL Datei vorliegt, kann es im Slicer für den 3D-Drucker vorbereitet werden. Der Slicer Zerscheidet das Modell in Schichten und erzeugt konkrete Komandos für den Drucker.

Der erzeugte gcode (die Drucker Kommandos) werden dann via SD Karte, Wifi oder USB Kabel an den Drucker übetragen und der Druck kann beginnen.


## Durchführung

Bevor wir mit der Modellierung beginnen, sollte das aufgezeichnet werden und alle relevanten abmessungen ermittelt werden.

1. Anmelden bei TinkerCAD und vertraut machen mit der Oberfläche
2. View ändern <!--  TODO: propper description -->
3. Zylinder in die Arbeitsfläche ziehen und parametrisieren
4. Zweiten Zylinder mit Material "Loch" in die Arbeitsfläche ziehen und parametrisieren.
5. Beide Zylinder ausrichten.
6. Zylinder Gruppieren (um die funktion der unterschiedlichen Materialien zu verdeutlichen)
7. Box in die Arbeitsfläche ziehen und parametrisieren.
8. Zylinder degruppieren und mit der Box ausrichten
9. Alle drei Komponenten Gruppieren

Der Basis Halstuchring ist jetzt fertig und kann von den Teilnehmern verfeinert und dekoriert werden. Möglich ist z.B. einen Buchstaben, das Sippenabzeichen oder die VCP Lilie am Schild zu motieren. Des weiteren können die Ecken des Rings abgerundet werden oder komplett eigene Formen (e.g. ein Herz) für den  verwendet werden.

Etwa eine halbe stunde vor ende der Gruppenstunde sollten alle dateien zentral gesammelt werden und mit dem slicer für den Druck vorbereitet werden.

## Druck

Da es sehr viele unterschiedliche Drucker Typen gibt, sollte sich der Workshopleiter mit dem Drucker und der Slicer Software vertraut machen. Beispielhaft werden die Notwendigen Schritte für den Ultimaker 2 Go und Cura hier vorgestellt.

Um zeit zu sparen, sollten so viele Halstuchringe, wie möglich, gleichzeitig gedruckt werden. Hierzu importiert man die STL Dateien und positioniert sie auf der Druckplatte. Unter umständen macht es sinn, das Objet zu rotieren um die anzahl der Überhänge zu minimieren.

Abweichend von den standrad einstellungen haben sich folgende optionen bewehrt.

- Buildplate athesion: brim, 8mm
- Support Material: yes

Anschliessend kann das projekt auf der SD Karte des Druckers gespeichert werden.

Am Drucker sollte zunächst die Druckplatte ausgerichtet werden <!--( TODO: Add programm path) //-->. Anschliessend  können sich die Teilnehmer eine Druck Farbe aussuchen und das passende Filament am Drucker einlegen (Druckmenü: "Change").

Sobald alle Vorbereitungen abgeschlossen sind, sollte die Druckplatte gereinigt werden und der Druck gestartet. Die Teilnehmer können die Resultate später am Tag oder in der nächste Gruppenstunde abholen.
