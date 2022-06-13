## Introduction

Confocal microscopy is an advanced microscopy technique that provides high contrast imaging and allows optical sectioning and 3D imaging. The prohibitive cost of commerical systems has led to the technique being inaccessible for education, in developing countries and to labs on a low budget. This project aims to create a functional confocal microscope system at a low-cost by using 3D-printing and inexpensive off the shelf components. The system will be completely adjustable with 3D printed flexure stages to position optical components. The current design costs £1570 and has shown promising results.


A full report on the project is available here: [LowCostConfocal Report.pdf](https://github.com/CallanTME/LowCostConfocal/files/8895100/LowCostConfocal.Report.pdf)

### The System

![image](/LowCostConfocal/Source Pics/CurrentSystem.jpg)

### Current Results
1. A Square scanned onto the focal plane (A) and then rescanned onto the image plane (B) with some noise as no pinhole is in use.

![image](/LowCostConfocal/Source Pics/TwoScannedSquare.png)

2. Images acquired with a camera using the microscope while scanning a square. (A) No pinhole with mirror in focal plane, (B) Pinhole with mirror in focal plane, (C) No pinhole with scattering target in focal plane, (D) Pinhole with scattering target in focal plane

![image](/LowCostConfocal/Source Pics/CameraResults.jpg)

## Instructions

Everything needed to duplicate the work done in this project is available in the repository.

### Enclosure

The whole enclosure is 3D printed. All parts are available as .stl for ease of printing as well as Inventor parts (.ipt) for ease of adjustment. Reference the BOM for the quantity of each part needed.

### Mirror Control

The control circuit schematic is available in the repository. The mirrors need at +/-5V differential signal. More information can be found on the eBay page through the link in the BOM.

### Optics and Other Components

Links to buy all components are available in the BOM

## Future work
1. Z-axis pinhole adjustment for ease of alignment
2. Custom PCB to make control circuit implementation simpler
3. Custom printed kinematic mounts to further reduce cost
4. etc...

## Acknowledgements

All work was done in the Rowlands lab at Imperial College London under the supervision of Dr Christopher Rowlands with help from Dr Glenn Howe. Ji Young Yoon from the Department of Bioengineering and David Miller from the Imperial College Hackspace assisted with the manufacture of the microscope.
