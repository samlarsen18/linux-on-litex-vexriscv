
Q
Command: %s
53*	vivadotcl2 
place_design2default:defaultZ4-113h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7a200t2default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7a200t2default:defaultZ17-349h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
place_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
�

�	v7v8_mmcm_fvco_rule1: The current computed target frequency, FVCO, is out of range for cell %s. The computed FVCO is 1500.000 MHz. The valid FVCO range for speed grade -1 is 600MHz to 1200MHz. The cell attribute values used to compute FVCO are CLKFBOUT_MULT_F = 30.000, CLKIN1_PERIOD = 10.00000, and DIVCLK_DIVIDE = 2 (FVCO = 1000 * CLKFBOUT_MULT_F/(CLKIN1_PERIOD * DIVCLK_DIVIDE)).
This violation may be corrected by:
  1. The timer uses timing constraints for clock period or clock frequency that affect CLKIN1 to set cell attribute CLKIN1_PERIOD, over-riding any previous value. This may already be in place and, if so this violation will be resolved once Timing is run.  Otherwise, consider modifying timing constraints to adjust the CLKIN1_PERIOD and bring FVCO into the allowed range.
  2. In the absence of timing constraints that affect CLKIN1, consider modifying the cell CLKIN1_PERIOD to bring FVCO into the allowed range.
  3. If CLKIN1_PERIOD is satisfactory, modify the CLKFBOUT_MULT_F or DIVCLK_DIVIDE cell attributes to bring FVCO into the allowed range.
  4. The MMCM configuration may be dynamically modified by use of DRP which is recognized by an ACTIVE signal on DCLK pin.%s*DRC2B
 ",

MMCME2_ADV	
MMCME2_ADV2default:default2default:default2M
 5DRC|Netlist|Instance|Invalid attribute value|MMCM_ADV2default:default8ZAVAL-46h px� 
k
DRC finished with %s
79*	vivadotcl21
0 Errors, 1 Critical Warnings2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
U

Starting %s Task
103*constraints2
Placer2default:defaultZ18-103h px� 
}
BMultithreading enabled for place_design using a maximum of %s CPUs12*	placeflow2
82default:defaultZ30-611h px� 
v

Phase %s%s
101*constraints2
1 2default:default2)
Placer Initialization2default:defaultZ18-101h px� 
�

Phase %s%s
101*constraints2
1.1 2default:default29
%Placer Initialization Netlist Sorting2default:defaultZ18-101h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
3337.6642default:default2
0.0002default:default2
31532default:default2
87722default:defaultZ17-722h px� 
Z
EPhase 1.1 Placer Initialization Netlist Sorting | Checksum: e858517d
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:00.03 ; elapsed = 00:00:00.06 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 3153 ; free virtual = 87722default:defaulth px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
3337.6642default:default2
0.0002default:default2
31532default:default2
87722default:defaultZ17-722h px� 
�

Phase %s%s
101*constraints2
1.2 2default:default2F
2IO Placement/ Clock Placement/ Build Placer Device2default:defaultZ18-101h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
h
SPhase 1.2 IO Placement/ Clock Placement/ Build Placer Device | Checksum: 13fa49e63
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:26 ; elapsed = 00:00:16 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 3103 ; free virtual = 87232default:defaulth px� 
}

Phase %s%s
101*constraints2
1.3 2default:default2.
Build Placer Netlist Model2default:defaultZ18-101h px� 
P
;Phase 1.3 Build Placer Netlist Model | Checksum: 23d4b1577
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:59 ; elapsed = 00:00:27 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2994 ; free virtual = 86132default:defaulth px� 
z

Phase %s%s
101*constraints2
1.4 2default:default2+
Constrain Clocks/Macros2default:defaultZ18-101h px� 
M
8Phase 1.4 Constrain Clocks/Macros | Checksum: 23d4b1577
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:59 ; elapsed = 00:00:28 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2994 ; free virtual = 86132default:defaulth px� 
I
4Phase 1 Placer Initialization | Checksum: 23d4b1577
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:00:59 ; elapsed = 00:00:28 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2995 ; free virtual = 86142default:defaulth px� 
q

Phase %s%s
101*constraints2
2 2default:default2$
Global Placement2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
2.1 2default:default2!
Floorplanning2default:defaultZ18-101h px� 
C
.Phase 2.1 Floorplanning | Checksum: 1532a3595
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:13 ; elapsed = 00:00:31 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2955 ; free virtual = 85742default:defaulth px� 
x

Phase %s%s
101*constraints2
2.2 2default:default2)
Global Placement Core2default:defaultZ18-101h px� 
�

Phase %s%s
101*constraints2
2.2.1 2default:default20
Physical Synthesis In Placer2default:defaultZ18-101h px� 
K
)No high fanout nets found in the design.
65*physynthZ32-65h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
I
'No nets found for fanout-optimization.
64*physynthZ32-64h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%main_soclinux_tag_port_dat_w[1]_TMR_0%main_soclinux_tag_port_dat_w[1]_TMR_02default:default2�
6VexRiscv/IBusCachedPlugin_cache/tag_mem_reg_i_21_TMR_0	6VexRiscv/IBusCachedPlugin_cache/tag_mem_reg_i_21_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%main_soclinux_tag_port_dat_w[1]_TMR_1%main_soclinux_tag_port_dat_w[1]_TMR_12default:default2�
6VexRiscv/IBusCachedPlugin_cache/tag_mem_reg_i_21_TMR_1	6VexRiscv/IBusCachedPlugin_cache/tag_mem_reg_i_21_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%main_soclinux_tag_port_dat_w[1]_TMR_2%main_soclinux_tag_port_dat_w[1]_TMR_22default:default2�
6VexRiscv/IBusCachedPlugin_cache/tag_mem_reg_i_21_TMR_2	6VexRiscv/IBusCachedPlugin_cache/tag_mem_reg_i_21_TMR_22default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_7__0_n_0_TMR_1 ways_0_tags_reg_i_7__0_n_0_TMR_12default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_7__0_TMR_1	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_7__0_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_4__0_n_0_TMR_0 ways_0_tags_reg_i_4__0_n_0_TMR_02default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_4__0_TMR_0	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_4__0_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_7__0_n_0_TMR_0 ways_0_tags_reg_i_7__0_n_0_TMR_02default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_7__0_TMR_0	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_7__0_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_4__0_n_0_TMR_1 ways_0_tags_reg_i_4__0_n_0_TMR_12default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_4__0_TMR_1	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_4__0_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2R
ways_0_tags_reg_i_8_n_0_TMR_1ways_0_tags_reg_i_8_n_0_TMR_12default:default2v
/VexRiscv/dataCache_1_/ways_0_tags_reg_i_8_TMR_1	/VexRiscv/dataCache_1_/ways_0_tags_reg_i_8_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_5__0_n_0_TMR_0 ways_0_tags_reg_i_5__0_n_0_TMR_02default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_5__0_TMR_0	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_5__0_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_6__0_n_0_TMR_1 ways_0_tags_reg_i_6__0_n_0_TMR_12default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_6__0_TMR_1	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_6__0_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_5__0_n_0_TMR_1 ways_0_tags_reg_i_5__0_n_0_TMR_12default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_5__0_TMR_1	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_5__0_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%ways_0_data_symbol0_reg_i_6_n_0_TMR_1%ways_0_data_symbol0_reg_i_6_n_0_TMR_12default:default2�
7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_6_TMR_1	7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_6_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2R
ways_0_tags_reg_i_8_n_0_TMR_0ways_0_tags_reg_i_8_n_0_TMR_02default:default2v
/VexRiscv/dataCache_1_/ways_0_tags_reg_i_8_TMR_0	/VexRiscv/dataCache_1_/ways_0_tags_reg_i_8_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_7__0_n_0_TMR_2 ways_0_tags_reg_i_7__0_n_0_TMR_22default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_7__0_TMR_2	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_7__0_TMR_22default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_3__0_n_0_TMR_0 ways_0_tags_reg_i_3__0_n_0_TMR_02default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_3__0_TMR_0	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_3__0_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_6__0_n_0_TMR_0 ways_0_tags_reg_i_6__0_n_0_TMR_02default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_6__0_TMR_0	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_6__0_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2R
ways_0_tags_reg_i_9_n_0_TMR_1ways_0_tags_reg_i_9_n_0_TMR_12default:default2v
/VexRiscv/dataCache_1_/ways_0_tags_reg_i_9_TMR_1	/VexRiscv/dataCache_1_/ways_0_tags_reg_i_9_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%ways_0_data_symbol0_reg_i_8_n_0_TMR_1%ways_0_data_symbol0_reg_i_8_n_0_TMR_12default:default2�
7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_8_TMR_1	7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_8_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_4__0_n_0_TMR_2 ways_0_tags_reg_i_4__0_n_0_TMR_22default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_4__0_TMR_2	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_4__0_TMR_22default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2R
ways_0_tags_reg_i_9_n_0_TMR_0ways_0_tags_reg_i_9_n_0_TMR_02default:default2v
/VexRiscv/dataCache_1_/ways_0_tags_reg_i_9_TMR_0	/VexRiscv/dataCache_1_/ways_0_tags_reg_i_9_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2\
"main_soclinux_sram_we_reg[0]_TMR_2"main_soclinux_sram_we_reg[0]_TMR_22default:default2�
7VexRiscv/IBusCachedPlugin_cache/mem_1_reg_0_0_i_7_TMR_2	7VexRiscv/IBusCachedPlugin_cache/mem_1_reg_0_0_i_7_TMR_22default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_3__0_n_0_TMR_1 ways_0_tags_reg_i_3__0_n_0_TMR_12default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_3__0_TMR_1	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_3__0_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2R
ways_0_tags_reg_i_9_n_0_TMR_2ways_0_tags_reg_i_9_n_0_TMR_22default:default2v
/VexRiscv/dataCache_1_/ways_0_tags_reg_i_9_TMR_2	/VexRiscv/dataCache_1_/ways_0_tags_reg_i_9_TMR_22default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%ways_0_data_symbol0_reg_i_7_n_0_TMR_0%ways_0_data_symbol0_reg_i_7_n_0_TMR_02default:default2�
7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_7_TMR_0	7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_7_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2b
%ways_0_data_symbol0_reg_i_6_n_0_TMR_0%ways_0_data_symbol0_reg_i_6_n_0_TMR_02default:default2�
7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_6_TMR_0	7VexRiscv/dataCache_1_/ways_0_data_symbol0_reg_i_6_TMR_02default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2\
"main_soclinux_sram_we_reg[0]_TMR_1"main_soclinux_sram_we_reg[0]_TMR_12default:default2�
7VexRiscv/IBusCachedPlugin_cache/mem_1_reg_0_0_i_7_TMR_1	7VexRiscv/IBusCachedPlugin_cache/mem_1_reg_0_0_i_7_TMR_12default:default8Z32-117h px� 
�
DNet %s could not be optimized because driver %s could not be cloned
117*physynth2X
 ways_0_tags_reg_i_6__0_n_0_TMR_2 ways_0_tags_reg_i_6__0_n_0_TMR_22default:default2|
2VexRiscv/dataCache_1_/ways_0_tags_reg_i_6__0_TMR_2	2VexRiscv/dataCache_1_/ways_0_tags_reg_i_6__0_TMR_22default:default8Z32-117h px� 
P
.No nets found for critical-cell optimization.
68*physynthZ32-68h px� 
�
$Optimized %s %s. Created %s new %s.
216*physynth2
02default:default2
net2default:default2
02default:default2
instance2default:defaultZ32-232h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
j
FNo candidate cells for DSP register optimization found in the design.
274*physynthZ32-456h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
22default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
h
DNo candidate cells for SRL register optimization found in the design349*physynthZ32-677h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
i
ENo candidate cells for BRAM register optimization found in the design297*physynthZ32-526h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
R
.No candidate nets found for HD net replication521*physynthZ32-949h px� 
�
aEnd %s Pass. Optimized %s %s. Created %s new %s, deleted %s existing %s and moved %s existing %s
415*physynth2
12default:default2
02default:default2
net or cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:default2
02default:default2
cell2default:defaultZ32-775h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.242default:default2
00:00:00.242default:default2
3337.6642default:default2
0.0002default:default2
29212default:default2
85402default:defaultZ17-722h px� 
B
-
Summary of Physical Synthesis Optimizations
*commonh px� 
B
-============================================
*commonh px� 


*commonh px� 


*commonh px� 
�
�----------------------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�
�|  Optimization                  |  Added Cells  |  Removed Cells  |  Optimized Cells/Nets  |  Dont Touch  |  Iterations  |  Elapsed   |
----------------------------------------------------------------------------------------------------------------------------------------
*commonh px� 
�	
�	|  Very High Fanout              |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Fanout                        |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Critical Cell                 |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  DSP Register                  |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Shift Register                |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  BRAM Register                 |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  HD Interface Net Replication  |            0  |              0  |                     0  |           0  |           1  |  00:00:00  |
|  Total                         |            0  |              0  |                     0  |           0  |           7  |  00:00:00  |
----------------------------------------------------------------------------------------------------------------------------------------
*commonh px� 


*commonh px� 


*commonh px� 
T
?Phase 2.2.1 Physical Synthesis In Placer | Checksum: 13544a637
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:32 ; elapsed = 00:01:26 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2922 ; free virtual = 85412default:defaulth px� 
K
6Phase 2.2 Global Placement Core | Checksum: 19d81af89
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:53 ; elapsed = 00:01:34 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2912 ; free virtual = 85312default:defaulth px� 
D
/Phase 2 Global Placement | Checksum: 19d81af89
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:03:53 ; elapsed = 00:01:34 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2936 ; free virtual = 85552default:defaulth px� 
q

Phase %s%s
101*constraints2
3 2default:default2$
Detail Placement2default:defaultZ18-101h px� 
}

Phase %s%s
101*constraints2
3.1 2default:default2.
Commit Multi Column Macros2default:defaultZ18-101h px� 
P
;Phase 3.1 Commit Multi Column Macros | Checksum: 13feaed6a
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:09 ; elapsed = 00:01:38 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2931 ; free virtual = 85502default:defaulth px� 


Phase %s%s
101*constraints2
3.2 2default:default20
Commit Most Macros & LUTRAMs2default:defaultZ18-101h px� 
R
=Phase 3.2 Commit Most Macros & LUTRAMs | Checksum: 2573c7490
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:35 ; elapsed = 00:01:47 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2923 ; free virtual = 85432default:defaulth px� 
y

Phase %s%s
101*constraints2
3.3 2default:default2*
Area Swap Optimization2default:defaultZ18-101h px� 
L
7Phase 3.3 Area Swap Optimization | Checksum: 21448284f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:37 ; elapsed = 00:01:48 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2924 ; free virtual = 85432default:defaulth px� 
�

Phase %s%s
101*constraints2
3.4 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.4 Pipeline Register Optimization | Checksum: 25199516a
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:04:37 ; elapsed = 00:01:48 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2925 ; free virtual = 85452default:defaulth px� 
t

Phase %s%s
101*constraints2
3.5 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
G
2Phase 3.5 Fast Optimization | Checksum: 217ad60da
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:05:10 ; elapsed = 00:02:02 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2924 ; free virtual = 85432default:defaulth px� 


Phase %s%s
101*constraints2
3.6 2default:default20
Small Shape Detail Placement2default:defaultZ18-101h px� 
Q
<Phase 3.6 Small Shape Detail Placement | Checksum: eea03c57
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:05:35 ; elapsed = 00:02:25 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2885 ; free virtual = 85052default:defaulth px� 
u

Phase %s%s
101*constraints2
3.7 2default:default2&
Re-assign LUT pins2default:defaultZ18-101h px� 
H
3Phase 3.7 Re-assign LUT pins | Checksum: 186d302a4
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:05:40 ; elapsed = 00:02:30 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2888 ; free virtual = 85072default:defaulth px� 
�

Phase %s%s
101*constraints2
3.8 2default:default22
Pipeline Register Optimization2default:defaultZ18-101h px� 
T
?Phase 3.8 Pipeline Register Optimization | Checksum: 14ba07327
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:05:41 ; elapsed = 00:02:31 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2887 ; free virtual = 85072default:defaulth px� 
t

Phase %s%s
101*constraints2
3.9 2default:default2%
Fast Optimization2default:defaultZ18-101h px� 
G
2Phase 3.9 Fast Optimization | Checksum: 18fb71976
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:06:24 ; elapsed = 00:02:49 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2883 ; free virtual = 85022default:defaulth px� 
D
/Phase 3 Detail Placement | Checksum: 18fb71976
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:06:25 ; elapsed = 00:02:49 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2883 ; free virtual = 85032default:defaulth px� 
�

Phase %s%s
101*constraints2
4 2default:default2<
(Post Placement Optimization and Clean-Up2default:defaultZ18-101h px� 
{

Phase %s%s
101*constraints2
4.1 2default:default2,
Post Commit Optimization2default:defaultZ18-101h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�

Phase %s%s
101*constraints2
4.1.1 2default:default2/
Post Placement Optimization2default:defaultZ18-101h px� 
V
APost Placement Optimization Initialization | Checksum: 19fbf904f
*commonh px� 
u

Phase %s%s
101*constraints2
4.1.1.1 2default:default2"
BUFG Insertion2default:defaultZ18-101h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2!
sys_rst_TMR_02default:defaultZ46-33h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2!
sys_rst_TMR_12default:defaultZ46-33h px� 
�
PProcessed net %s, BUFG insertion was skipped due to placement/routing conflicts.32*	placeflow2!
sys_rst_TMR_22default:defaultZ46-33h px� 
�
�BUFG insertion identified %s candidate nets. Inserted BUFG: %s, Replicated BUFG Driver: %s, Skipped due to Placement/Routing Conflicts: %s, Skipped due to Timing Degradation: %s, Skipped due to Illegal Netlist: %s.43*	placeflow2
32default:default2
02default:default2
02default:default2
32default:default2
02default:default2
02default:defaultZ46-56h px� 
H
3Phase 4.1.1.1 BUFG Insertion | Checksum: 19fbf904f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:07:02 ; elapsed = 00:02:58 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2930 ; free virtual = 85502default:defaulth px� 
�
hPost Placement Timing Summary WNS=%s. For the most accurate timing information please run report_timing.610*place2
-7.2032default:defaultZ30-746h px� 
S
>Phase 4.1.1 Post Placement Optimization | Checksum: 226a5854f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:20 ; elapsed = 00:04:13 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2927 ; free virtual = 85462default:defaulth px� 
N
9Phase 4.1 Post Commit Optimization | Checksum: 226a5854f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:21 ; elapsed = 00:04:13 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2927 ; free virtual = 85462default:defaulth px� 
y

Phase %s%s
101*constraints2
4.2 2default:default2*
Post Placement Cleanup2default:defaultZ18-101h px� 
L
7Phase 4.2 Post Placement Cleanup | Checksum: 226a5854f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:21 ; elapsed = 00:04:14 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2931 ; free virtual = 85502default:defaulth px� 
s

Phase %s%s
101*constraints2
4.3 2default:default2$
Placer Reporting2default:defaultZ18-101h px� 
F
1Phase 4.3 Placer Reporting | Checksum: 226a5854f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:22 ; elapsed = 00:04:14 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2931 ; free virtual = 85512default:defaulth px� 
z

Phase %s%s
101*constraints2
4.4 2default:default2+
Final Placement Cleanup2default:defaultZ18-101h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.052default:default2
00:00:00.052default:default2
3337.6642default:default2
0.0002default:default2
29312default:default2
85512default:defaultZ17-722h px� 
M
8Phase 4.4 Final Placement Cleanup | Checksum: 1c3a1a637
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:22 ; elapsed = 00:04:15 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2931 ; free virtual = 85512default:defaulth px� 
\
GPhase 4 Post Placement Optimization and Clean-Up | Checksum: 1c3a1a637
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:23 ; elapsed = 00:04:15 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2931 ; free virtual = 85512default:defaulth px� 
=
(Ending Placer Task | Checksum: d1f98c7d
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:08:23 ; elapsed = 00:04:15 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2931 ; free virtual = 85512default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1162default:default2
292default:default2
232default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
place_design2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
place_design: 2default:default2
00:08:302default:default2
00:04:192default:default2
3337.6642default:default2
0.0002default:default2
30032default:default2
86222default:defaultZ17-722h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2
00:00:00.012default:default2
3337.6642default:default2
0.0002default:default2
30032default:default2
86222default:defaultZ17-722h px� 
H
&Writing timing data to binary archive.266*timingZ38-480h px� 
D
Writing placer database...
1603*designutilsZ20-1893h px� 
=
Writing XDEF routing.
211*designutilsZ20-211h px� 
J
#Writing XDEF routing logical nets.
209*designutilsZ20-209h px� 
J
#Writing XDEF routing special nets.
210*designutilsZ20-210h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2)
Write XDEF Complete: 2default:default2
00:00:122default:default2
00:00:042default:default2
3337.6642default:default2
0.0002default:default2
29362default:default2
86092default:defaultZ17-722h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2�
�/home/slarson/vexriscv/linux-on-litex-vexriscv/build/nexys_video_tmr/gateware/bufg_v2/bufg_v2.runs/impl_1/nvv_bufg_v2_nmr_placed.dcp2default:defaultZ17-1381h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2&
write_checkpoint: 2default:default2
00:00:172default:default2
00:00:092default:default2
3337.6642default:default2
0.0002default:default2
29852default:default2
86172default:defaultZ17-722h px� 
j
%s4*runtcl2N
:Executing : report_io -file nvv_bufg_v2_nmr_io_placed.rpt
2default:defaulth px� 
�
�report_io: Time (s): cpu = 00:00:00.29 ; elapsed = 00:00:00.37 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2978 ; free virtual = 8609
*commonh px� 
�
%s4*runtcl2�
vExecuting : report_utilization -file nvv_bufg_v2_nmr_utilization_placed.rpt -pb nvv_bufg_v2_nmr_utilization_placed.pb
2default:defaulth px� 
�
%s4*runtcl2k
WExecuting : report_control_sets -verbose -file nvv_bufg_v2_nmr_control_sets_placed.rpt
2default:defaulth px� 
�
�report_control_sets: Time (s): cpu = 00:00:00.74 ; elapsed = 00:00:00.84 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2987 ; free virtual = 8618
*commonh px� 


End Record