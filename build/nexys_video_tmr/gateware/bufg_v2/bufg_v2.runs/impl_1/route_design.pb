
Q
Command: %s
53*	vivadotcl2 
route_design2default:defaultZ4-113h px� 
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
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
route_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
�
�MMCM_adv_ClkFrequency_div_dclk: The computed value 1500.000 MHz (CLKIN1_PERIOD, net clk100_clk) for the VCO operating frequency of the MMCME2_ADV site %s (cell %s) falls outside the operating range of the MMCM VCO frequency for this device (600.000 - 1200.000 MHz). The computed value is (CLKFBOUT_MULT_F * 1000 / (CLKINx_PERIOD * DIVCLK_DIVIDE)). Please adjust either the input period CLKINx_PERIOD (10.000000), multiplication factor CLKFBOUT_MULT_F (30.000000) or the division factor DIVCLK_DIVIDE (2), in order to achieve a VCO frequency within the rated operating range for this device.
Please note that this check is a Warning because the DCLK pin has an ACTIVE signal and it is assumed that dynamic control (DRP) will be exercised to put the VCO frequency into valid operating range.%s*DRC2L
 "6
MMCME2_ADV_X0Y2
MMCME2_ADV_X0Y22default:default2default:default2B
 ",

MMCME2_ADV	
MMCME2_ADV2default:default2default:default2R
 :DRC|Physical Configuration|Physical design rule|MMCME2_ADV2default:default8ZPDRC-33h px� 
b
DRC finished with %s
79*	vivadotcl2(
0 Errors, 1 Warnings2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
V

Starting %s Task
103*constraints2
Routing2default:defaultZ18-103h px� 
}
BMultithreading enabled for route_design using a maximum of %s CPUs17*	routeflow2
82default:defaultZ35-254h px� 
p

Phase %s%s
101*constraints2
1 2default:default2#
Build RT Design2default:defaultZ18-101h px� 
B
-Phase 1 Build RT Design | Checksum: 1e474740
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:29 ; elapsed = 00:01:06 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2770 ; free virtual = 84022default:defaulth px� 
v

Phase %s%s
101*constraints2
2 2default:default2)
Router Initialization2default:defaultZ18-101h px� 
o

Phase %s%s
101*constraints2
2.1 2default:default2 
Create Timer2default:defaultZ18-101h px� 
A
,Phase 2.1 Create Timer | Checksum: 1e474740
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:30 ; elapsed = 00:01:07 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2740 ; free virtual = 83722default:defaulth px� 
{

Phase %s%s
101*constraints2
2.2 2default:default2,
Fix Topology Constraints2default:defaultZ18-101h px� 
M
8Phase 2.2 Fix Topology Constraints | Checksum: 1e474740
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:31 ; elapsed = 00:01:08 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2694 ; free virtual = 83262default:defaulth px� 
t

Phase %s%s
101*constraints2
2.3 2default:default2%
Pre Route Cleanup2default:defaultZ18-101h px� 
F
1Phase 2.3 Pre Route Cleanup | Checksum: 1e474740
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:01:31 ; elapsed = 00:01:08 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2694 ; free virtual = 83262default:defaulth px� 
p

Phase %s%s
101*constraints2
2.4 2default:default2!
Update Timing2default:defaultZ18-101h px� 
C
.Phase 2.4 Update Timing | Checksum: 1fa11017b
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:22 ; elapsed = 00:01:27 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2659 ; free virtual = 82912default:defaulth px� 
�
Intermediate Timing Summary %s164*route2N
:| WNS=-7.014 | TNS=-12259.626| WHS=-2.545 | THS=-667.984|
2default:defaultZ35-416h px� 
I
4Phase 2 Router Initialization | Checksum: 21ccb5537
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:02:48 ; elapsed = 00:01:32 . Memory (MB): peak = 3337.664 ; gain = 0.000 ; free physical = 2646 ; free virtual = 82782default:defaulth px� 
p

Phase %s%s
101*constraints2
3 2default:default2#
Initial Routing2default:defaultZ18-101h px� 
C
.Phase 3 Initial Routing | Checksum: 1875cbd2f
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:15:44 ; elapsed = 00:03:22 . Memory (MB): peak = 3403.645 ; gain = 65.980 ; free physical = 2801 ; free virtual = 82402default:defaulth px� 
�
>Design has %s pins with tight setup and hold constraints.

%s
244*route2
4232default:default2�
�The top 5 pins with tight setup and hold constraints:

+--------------------------+--------------------------+----------------------------------------------------------------------------------------------------------+
|       Launch Clock       |      Capture Clock       |                                                 Pin                                                      |
+--------------------------+--------------------------+----------------------------------------------------------------------------------------------------------+
|    main_soclinux_clkout0 |   main_ethphy_pll_clk_tx |                                                          builder_xilinxmultiregimpl4_regs0_reg[4]_TMR_0/D|
| s7hdmioutclocking_mmcm_clk0 |s7hdmioutclocking_mmcm_clk0 |                                                                        builder_videoout_state_reg_TMR_1/D|
|    main_soclinux_clkout0 |   main_ethphy_pll_clk_tx |                                                          builder_xilinxmultiregimpl4_regs0_reg[3]_TMR_2/D|
| s7hdmioutclocking_mmcm_clk0 |s7hdmioutclocking_mmcm_clk0 |                                                                        builder_videoout_state_reg_TMR_2/D|
|    main_soclinux_clkout0 |   main_ethphy_pll_clk_tx |                                                          builder_xilinxmultiregimpl4_regs0_reg[3]_TMR_0/D|
+--------------------------+--------------------------+----------------------------------------------------------------------------------------------------------+

File with complete list of pins: tight_setup_hold_pins.txt
2default:defaultZ35-580h px� 
s

Phase %s%s
101*constraints2
4 2default:default2&
Rip-up And Reroute2default:defaultZ18-101h px� 
u

Phase %s%s
101*constraints2
4.1 2default:default2&
Global Iteration 02default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-7.257 | TNS=-23036.924| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.1 Global Iteration 0 | Checksum: 1ad3020a2
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:26:25 ; elapsed = 00:05:55 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2856 ; free virtual = 82552default:defaulth px� 
u

Phase %s%s
101*constraints2
4.2 2default:default2&
Global Iteration 12default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-7.553 | TNS=-22969.078| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.2 Global Iteration 1 | Checksum: 237256c08
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:26:57 ; elapsed = 00:06:18 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2852 ; free virtual = 82502default:defaulth px� 
F
1Phase 4 Rip-up And Reroute | Checksum: 237256c08
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:26:57 ; elapsed = 00:06:18 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2852 ; free virtual = 82502default:defaulth px� 
|

Phase %s%s
101*constraints2
5 2default:default2/
Delay and Skew Optimization2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
5.1 2default:default2!
Delay CleanUp2default:defaultZ18-101h px� 
r

Phase %s%s
101*constraints2
5.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
E
0Phase 5.1.1 Update Timing | Checksum: 175107581
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:07 ; elapsed = 00:06:20 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2853 ; free virtual = 82522default:defaulth px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-7.257 | TNS=-22965.852| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
C
.Phase 5.1 Delay CleanUp | Checksum: 154c24e94
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:10 ; elapsed = 00:06:21 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2849 ; free virtual = 82472default:defaulth px� 
z

Phase %s%s
101*constraints2
5.2 2default:default2+
Clock Skew Optimization2default:defaultZ18-101h px� 
M
8Phase 5.2 Clock Skew Optimization | Checksum: 154c24e94
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:10 ; elapsed = 00:06:22 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2849 ; free virtual = 82472default:defaulth px� 
O
:Phase 5 Delay and Skew Optimization | Checksum: 154c24e94
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:10 ; elapsed = 00:06:22 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2849 ; free virtual = 82472default:defaulth px� 
n

Phase %s%s
101*constraints2
6 2default:default2!
Post Hold Fix2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
6.1 2default:default2!
Hold Fix Iter2default:defaultZ18-101h px� 
r

Phase %s%s
101*constraints2
6.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
E
0Phase 6.1.1 Update Timing | Checksum: 1823e802a
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:26 ; elapsed = 00:06:26 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2845 ; free virtual = 82432default:defaulth px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-7.257 | TNS=-22929.090| WHS=-0.191 | THS=-0.544 |
2default:defaultZ35-416h px� 
C
.Phase 6.1 Hold Fix Iter | Checksum: 22a0a01be
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:28 ; elapsed = 00:06:27 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2835 ; free virtual = 82332default:defaulth px� 
�
�The router encountered %s pins that are both setup-critical and hold-critical and tried to fix hold violations at the expense of setup slack. Such pins are:
%s201*route2
9732default:default2�
�	OSERDESE2_45/OCE
	OSERDESE2_46/OCE
	OSERDESE2_47/OCE
	OSERDESE2_48/OCE
	OSERDESE2_49/OCE
	OSERDESE2_50/OCE
	OSERDESE2_51/OCE
	OSERDESE2_52/OCE
	timinggenerator_vactive_i_8_TMR_0/I1
	timinggenerator_vactive_i_8_TMR_0/I2
	.. and 963 more pins.
2default:defaultZ35-468h px� 
A
,Phase 6 Post Hold Fix | Checksum: 1cd6b13b9
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:28 ; elapsed = 00:06:27 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2835 ; free virtual = 82332default:defaulth px� 
o

Phase %s%s
101*constraints2
7 2default:default2"
Route finalize2default:defaultZ18-101h px� 
B
-Phase 7 Route finalize | Checksum: 284b896ff
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:28 ; elapsed = 00:06:27 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2832 ; free virtual = 82302default:defaulth px� 
v

Phase %s%s
101*constraints2
8 2default:default2)
Verifying routed nets2default:defaultZ18-101h px� 
I
4Phase 8 Verifying routed nets | Checksum: 284b896ff
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:29 ; elapsed = 00:06:28 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2830 ; free virtual = 82282default:defaulth px� 
r

Phase %s%s
101*constraints2
9 2default:default2%
Depositing Routes2default:defaultZ18-101h px� 
E
0Phase 9 Depositing Routes | Checksum: 1fd3a3120
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:36 ; elapsed = 00:06:35 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2832 ; free virtual = 82312default:defaulth px� 
t

Phase %s%s
101*constraints2
10 2default:default2&
Post Router Timing2default:defaultZ18-101h px� 
q

Phase %s%s
101*constraints2
10.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
D
/Phase 10.1 Update Timing | Checksum: 12fef0b53
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:51 ; elapsed = 00:06:39 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2837 ; free virtual = 82352default:defaulth px� 
�
Estimated Timing Summary %s
57*route2M
9| WNS=-7.257 | TNS=-22931.592| WHS=0.050  | THS=0.000  |
2default:defaultZ35-57h px� 
B
!Router estimated timing not met.
128*routeZ35-328h px� 
G
2Phase 10 Post Router Timing | Checksum: 12fef0b53
*commonh px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:51 ; elapsed = 00:06:39 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2837 ; free virtual = 82352default:defaulth px� 
@
Router Completed Successfully
2*	routeflowZ35-16h px� 
�

%s
*constraints2�
�Time (s): cpu = 00:27:52 ; elapsed = 00:06:39 . Memory (MB): peak = 3452.645 ; gain = 114.980 ; free physical = 2948 ; free virtual = 83462default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1352default:default2
322default:default2
232default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
route_design2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
route_design: 2default:default2
00:28:012default:default2
00:06:432default:default2
3452.6452default:default2
114.9802default:default2
29482default:default2
83462default:defaultZ17-722h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2.
Netlist sorting complete. 2default:default2
00:00:00.012default:default2
00:00:00.012default:default2
3452.6452default:default2
0.0002default:default2
29482default:default2
83462default:defaultZ17-722h px� 
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
3452.6452default:default2
0.0002default:default2
28622default:default2
83292default:defaultZ17-722h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2�
�/home/slarson/vexriscv/linux-on-litex-vexriscv/build/nexys_video_tmr/gateware/bufg_v2/bufg_v2.runs/impl_1/nvv_bufg_v2_nmr_routed.dcp2default:defaultZ17-1381h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2&
write_checkpoint: 2default:default2
00:00:182default:default2
00:00:102default:default2
3452.6452default:default2
0.0002default:default2
29272default:default2
83422default:defaultZ17-722h px� 
�
%s4*runtcl2�
�Executing : report_drc -file nvv_bufg_v2_nmr_drc_routed.rpt -pb nvv_bufg_v2_nmr_drc_routed.pb -rpx nvv_bufg_v2_nmr_drc_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
ureport_drc -file nvv_bufg_v2_nmr_drc_routed.rpt -pb nvv_bufg_v2_nmr_drc_routed.pb -rpx nvv_bufg_v2_nmr_drc_routed.rpx2default:defaultZ4-113h px� 
>
IP Catalog is up to date.1232*coregenZ19-1839h px� 
P
Running DRC with %s threads
24*drc2
82default:defaultZ23-27h px� 
�
#The results of DRC are in file %s.
168*coretcl2�
�/home/slarson/vexriscv/linux-on-litex-vexriscv/build/nexys_video_tmr/gateware/bufg_v2/bufg_v2.runs/impl_1/nvv_bufg_v2_nmr_drc_routed.rpt�/home/slarson/vexriscv/linux-on-litex-vexriscv/build/nexys_video_tmr/gateware/bufg_v2/bufg_v2.runs/impl_1/nvv_bufg_v2_nmr_drc_routed.rpt2default:default8Z2-168h px� 
\
%s completed successfully
29*	vivadotcl2

report_drc2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2 
report_drc: 2default:default2
00:00:292default:default2
00:00:092default:default2
3524.6802default:default2
72.0352default:default2
29092default:default2
83242default:defaultZ17-722h px� 
�
%s4*runtcl2�
�Executing : report_methodology -file nvv_bufg_v2_nmr_methodology_drc_routed.rpt -pb nvv_bufg_v2_nmr_methodology_drc_routed.pb -rpx nvv_bufg_v2_nmr_methodology_drc_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
�report_methodology -file nvv_bufg_v2_nmr_methodology_drc_routed.rpt -pb nvv_bufg_v2_nmr_methodology_drc_routed.pb -rpx nvv_bufg_v2_nmr_methodology_drc_routed.rpx2default:defaultZ4-113h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
Y
$Running Methodology with %s threads
74*drc2
82default:defaultZ23-133h px� 
�
2The results of Report Methodology are in file %s.
450*coretcl2�
�/home/slarson/vexriscv/linux-on-litex-vexriscv/build/nexys_video_tmr/gateware/bufg_v2/bufg_v2.runs/impl_1/nvv_bufg_v2_nmr_methodology_drc_routed.rpt�/home/slarson/vexriscv/linux-on-litex-vexriscv/build/nexys_video_tmr/gateware/bufg_v2/bufg_v2.runs/impl_1/nvv_bufg_v2_nmr_methodology_drc_routed.rpt2default:default8Z2-1520h px� 
d
%s completed successfully
29*	vivadotcl2&
report_methodology2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2(
report_methodology: 2default:default2
00:02:012default:default2
00:00:262default:default2
3524.6802default:default2
0.0002default:default2
29342default:default2
83052default:defaultZ17-722h px� 
�
%s4*runtcl2�
�Executing : report_power -file nvv_bufg_v2_nmr_power_routed.rpt -pb nvv_bufg_v2_nmr_power_summary_routed.pb -rpx nvv_bufg_v2_nmr_power_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
�report_power -file nvv_bufg_v2_nmr_power_routed.rpt -pb nvv_bufg_v2_nmr_power_summary_routed.pb -rpx nvv_bufg_v2_nmr_power_routed.rpx2default:defaultZ4-113h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
K
,Running Vector-less Activity Propagation...
51*powerZ33-51h px� 
P
3
Finished Running Vector-less Activity Propagation
1*powerZ33-1h px� 
�
�Detected over-assertion of set/reset/preset/clear net with high fanouts, power estimation might not be accurate. Please run Tool - Power Constraint Wizard to set proper switching activities for control signals.282*powerZ33-332h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1472default:default2
332default:default2
232default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
report_power2default:defaultZ4-42h px� 
�
r%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s ; free physical = %s ; free virtual = %s
480*common2"
report_power: 2default:default2
00:00:402default:default2
00:00:232default:default2
3524.6802default:default2
0.0002default:default2
28812default:default2
82602default:defaultZ17-722h px� 
�
%s4*runtcl2
kExecuting : report_route_status -file nvv_bufg_v2_nmr_route_status.rpt -pb nvv_bufg_v2_nmr_route_status.pb
2default:defaulth px� 
�
%s4*runtcl2�
�Executing : report_timing_summary -max_paths 10 -file nvv_bufg_v2_nmr_timing_summary_routed.rpt -pb nvv_bufg_v2_nmr_timing_summary_routed.pb -rpx nvv_bufg_v2_nmr_timing_summary_routed.rpx -warn_on_violation 
2default:defaulth px� 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px� 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
82default:defaultZ38-191h px� 
�
rThe design failed to meet the timing requirements. Please see the %s report for details on the timing violations.
188*timing2"
timing summary2default:defaultZ38-282h px� 
�
%s4*runtcl2l
XExecuting : report_incremental_reuse -file nvv_bufg_v2_nmr_incremental_reuse_routed.rpt
2default:defaulth px� 
g
BIncremental flow is disabled. No incremental reuse Info to report.423*	vivadotclZ4-1062h px� 
�
%s4*runtcl2l
XExecuting : report_clock_utilization -file nvv_bufg_v2_nmr_clock_utilization_routed.rpt
2default:defaulth px� 
�
%s4*runtcl2�
�Executing : report_bus_skew -warn_on_violation -file nvv_bufg_v2_nmr_bus_skew_routed.rpt -pb nvv_bufg_v2_nmr_bus_skew_routed.pb -rpx nvv_bufg_v2_nmr_bus_skew_routed.rpx
2default:defaulth px� 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px� 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
82default:defaultZ38-191h px� 


End Record