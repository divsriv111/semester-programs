--------------------------------------------------------------------------------
-- Copyright (c) 1995-2010 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: M.53d
--  \   \         Application: netgen
--  /   /         Filename: t_ff_timesim.vhd
-- /___/   /\     Timestamp: Wed May 10 18:33:18 2017
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -rpw 100 -ar Structure -tm t_ff -w -dir netgen/fit -ofmt vhdl -sim t_ff.nga t_ff_timesim.vhd 
-- Device	: XA9536XL-15-VQ44 (Speed File: Version 3.1)
-- Input file	: t_ff.nga
-- Output file	: \\192.168.4.11\151016\Shivam_2016_17\netgen\fit\t_ff_timesim.vhd
-- # of Entities	: 1
-- Design Name	: t_ff.nga
-- Xilinx	: C:\Xilinx\12.1\ISE_DS\ISE
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library SIMPRIM;
use SIMPRIM.VCOMPONENTS.ALL;
use SIMPRIM.VPACKAGE.ALL;

entity t_ff is
  port (
    t : in STD_LOGIC := 'X'; 
    clk : in STD_LOGIC := 'X'; 
    q : out STD_LOGIC; 
    qbar : out STD_LOGIC 
  );
end t_ff;

architecture Structure of t_ff is
  signal t_IBUF_1 : STD_LOGIC; 
  signal FCLKIO_0_3 : STD_LOGIC; 
  signal temp_Q_5 : STD_LOGIC; 
  signal qbar_OBUF_Q_7 : STD_LOGIC; 
  signal temp_Q_8 : STD_LOGIC; 
  signal temp_9 : STD_LOGIC; 
  signal temp_D_10 : STD_LOGIC; 
  signal temp_tsimcreated_xor_Q_11 : STD_LOGIC; 
  signal Gnd_12 : STD_LOGIC; 
  signal temp_CE_13 : STD_LOGIC; 
  signal temp_D1_14 : STD_LOGIC; 
  signal temp_D2_15 : STD_LOGIC; 
  signal qbar_OBUF_Q_16 : STD_LOGIC; 
  signal qbar_OBUF_D_17 : STD_LOGIC; 
  signal qbar_OBUF_CE_18 : STD_LOGIC; 
  signal qbar_OBUF_D1_19 : STD_LOGIC; 
  signal qbar_OBUF_D2_20 : STD_LOGIC; 
  signal NlwBufferSignal_temp_tsimcreated_xor_IN0 : STD_LOGIC; 
  signal NlwBufferSignal_temp_tsimcreated_xor_IN1 : STD_LOGIC; 
  signal NlwBufferSignal_temp_REG_IN : STD_LOGIC; 
  signal NlwBufferSignal_temp_REG_CLK : STD_LOGIC; 
  signal NlwBufferSignal_temp_D_IN0 : STD_LOGIC; 
  signal NlwBufferSignal_temp_D_IN1 : STD_LOGIC; 
  signal NlwBufferSignal_temp_CE_IN0 : STD_LOGIC; 
  signal NlwBufferSignal_temp_CE_IN1 : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_REG_IN : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_REG_CLK : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_D_IN0 : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_D_IN1 : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_D2_IN0 : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_D2_IN1 : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_CE_IN0 : STD_LOGIC; 
  signal NlwBufferSignal_qbar_OBUF_CE_IN1 : STD_LOGIC; 
begin
  t_IBUF : X_BUF
    port map (
      I => t,
      O => t_IBUF_1
    );
  FCLKIO_0 : X_BUF
    port map (
      I => clk,
      O => FCLKIO_0_3
    );
  q_6 : X_BUF
    port map (
      I => temp_Q_5,
      O => q
    );
  qbar_8 : X_BUF
    port map (
      I => qbar_OBUF_Q_7,
      O => qbar
    );
  temp_Q : X_BUF
    port map (
      I => temp_Q_8,
      O => temp_Q_5
    );
  temp : X_BUF
    port map (
      I => temp_Q_8,
      O => temp_9
    );
  temp_tsimcreated_xor_Q : X_XOR2
    port map (
      I0 => NlwBufferSignal_temp_tsimcreated_xor_IN0,
      I1 => NlwBufferSignal_temp_tsimcreated_xor_IN1,
      O => temp_tsimcreated_xor_Q_11
    );
  temp_REG : X_FF
    generic map(
      INIT => '0'
    )
    port map (
      I => NlwBufferSignal_temp_REG_IN,
      CE => temp_CE_13,
      CLK => NlwBufferSignal_temp_REG_CLK,
      SET => Gnd_12,
      RST => Gnd_12,
      O => temp_Q_8
    );
  Gnd : X_ZERO
    port map (
      O => Gnd_12
    );
  temp_D : X_XOR2
    port map (
      I0 => NlwBufferSignal_temp_D_IN0,
      I1 => NlwBufferSignal_temp_D_IN1,
      O => temp_D_10
    );
  temp_D1 : X_ZERO
    port map (
      O => temp_D1_14
    );
  temp_D2 : X_ONE
    port map (
      O => temp_D2_15
    );
  temp_CE : X_AND2
    port map (
      I0 => NlwBufferSignal_temp_CE_IN0,
      I1 => NlwBufferSignal_temp_CE_IN1,
      O => temp_CE_13
    );
  qbar_OBUF_Q : X_BUF
    port map (
      I => qbar_OBUF_Q_16,
      O => qbar_OBUF_Q_7
    );
  qbar_OBUF_REG : X_FF
    generic map(
      INIT => '1'
    )
    port map (
      I => NlwBufferSignal_qbar_OBUF_REG_IN,
      CE => qbar_OBUF_CE_18,
      CLK => NlwBufferSignal_qbar_OBUF_REG_CLK,
      SET => Gnd_12,
      RST => Gnd_12,
      O => qbar_OBUF_Q_16
    );
  qbar_OBUF_D : X_XOR2
    port map (
      I0 => NlwBufferSignal_qbar_OBUF_D_IN0,
      I1 => NlwBufferSignal_qbar_OBUF_D_IN1,
      O => qbar_OBUF_D_17
    );
  qbar_OBUF_D1 : X_ZERO
    port map (
      O => qbar_OBUF_D1_19
    );
  qbar_OBUF_D2 : X_AND2
    port map (
      I0 => NlwBufferSignal_qbar_OBUF_D2_IN0,
      I1 => NlwBufferSignal_qbar_OBUF_D2_IN1,
      O => qbar_OBUF_D2_20
    );
  qbar_OBUF_CE : X_AND2
    port map (
      I0 => NlwBufferSignal_qbar_OBUF_CE_IN0,
      I1 => NlwBufferSignal_qbar_OBUF_CE_IN1,
      O => qbar_OBUF_CE_18
    );
  NlwBufferBlock_temp_tsimcreated_xor_IN0 : X_BUF
    port map (
      I => temp_D_10,
      O => NlwBufferSignal_temp_tsimcreated_xor_IN0
    );
  NlwBufferBlock_temp_tsimcreated_xor_IN1 : X_BUF
    port map (
      I => temp_Q_8,
      O => NlwBufferSignal_temp_tsimcreated_xor_IN1
    );
  NlwBufferBlock_temp_REG_IN : X_BUF
    port map (
      I => temp_tsimcreated_xor_Q_11,
      O => NlwBufferSignal_temp_REG_IN
    );
  NlwBufferBlock_temp_REG_CLK : X_BUF
    port map (
      I => FCLKIO_0_3,
      O => NlwBufferSignal_temp_REG_CLK
    );
  NlwBufferBlock_temp_D_IN0 : X_BUF
    port map (
      I => temp_D1_14,
      O => NlwBufferSignal_temp_D_IN0
    );
  NlwBufferBlock_temp_D_IN1 : X_BUF
    port map (
      I => temp_D2_15,
      O => NlwBufferSignal_temp_D_IN1
    );
  NlwBufferBlock_temp_CE_IN0 : X_BUF
    port map (
      I => t_IBUF_1,
      O => NlwBufferSignal_temp_CE_IN0
    );
  NlwBufferBlock_temp_CE_IN1 : X_BUF
    port map (
      I => t_IBUF_1,
      O => NlwBufferSignal_temp_CE_IN1
    );
  NlwBufferBlock_qbar_OBUF_REG_IN : X_BUF
    port map (
      I => qbar_OBUF_D_17,
      O => NlwBufferSignal_qbar_OBUF_REG_IN
    );
  NlwBufferBlock_qbar_OBUF_REG_CLK : X_BUF
    port map (
      I => FCLKIO_0_3,
      O => NlwBufferSignal_qbar_OBUF_REG_CLK
    );
  NlwBufferBlock_qbar_OBUF_D_IN0 : X_BUF
    port map (
      I => qbar_OBUF_D1_19,
      O => NlwBufferSignal_qbar_OBUF_D_IN0
    );
  NlwBufferBlock_qbar_OBUF_D_IN1 : X_BUF
    port map (
      I => qbar_OBUF_D2_20,
      O => NlwBufferSignal_qbar_OBUF_D_IN1
    );
  NlwBufferBlock_qbar_OBUF_D2_IN0 : X_BUF
    port map (
      I => temp_9,
      O => NlwBufferSignal_qbar_OBUF_D2_IN0
    );
  NlwBufferBlock_qbar_OBUF_D2_IN1 : X_BUF
    port map (
      I => temp_9,
      O => NlwBufferSignal_qbar_OBUF_D2_IN1
    );
  NlwBufferBlock_qbar_OBUF_CE_IN0 : X_BUF
    port map (
      I => t_IBUF_1,
      O => NlwBufferSignal_qbar_OBUF_CE_IN0
    );
  NlwBufferBlock_qbar_OBUF_CE_IN1 : X_BUF
    port map (
      I => t_IBUF_1,
      O => NlwBufferSignal_qbar_OBUF_CE_IN1
    );
  NlwBlockROC : X_ROC
    generic map (ROC_WIDTH => 100 ns)
    port map (O => PRLD);

end Structure;

