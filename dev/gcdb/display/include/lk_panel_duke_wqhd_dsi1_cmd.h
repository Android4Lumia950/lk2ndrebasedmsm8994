// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2024 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_DUKE_WQHD_DSI1_CMD_H_
#define _PANEL_DUKE_WQHD_DSI1_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config duke_wqhd_dsi1_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_duke_wqhd_dsi1_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution duke_wqhd_dsi1_cmd_panel_res = {
	.panel_width = 720,
	.panel_height = 2560,
	.hfront_porch = 76,
	.hback_porch = 32,
	.hpulse_width = 16,
	.hsync_skew = 0,
	.vfront_porch = 4,
	.vback_porch = 2,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info duke_wqhd_dsi1_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char duke_wqhd_dsi1_cmd_on_cmd_0[] = {
	0x11, 0x00, 0x05, 0x80
};
static char duke_wqhd_dsi1_cmd_on_cmd_1[] = {
	0x03, 0x00, 0x39, 0xc0, 0xf0, 0x5a, 0x5a, 0xff
};
static char duke_wqhd_dsi1_cmd_on_cmd_2[] = {
	0x04, 0x00, 0x39, 0xc0, 0xbd, 0x05, 0x02, 0x16
};
static char duke_wqhd_dsi1_cmd_on_cmd_3[] = {
	0xff, 0x02, 0x15, 0x80
};
static char duke_wqhd_dsi1_cmd_on_cmd_4[] = {
	0x03, 0x00, 0x39, 0xc0, 0xf0, 0xa5, 0xa5, 0xff
};
static char duke_wqhd_dsi1_cmd_on_cmd_5[] = {
	0x53, 0x20, 0x15, 0x80
};
static char duke_wqhd_dsi1_cmd_on_cmd_6[] = {
	0x51, 0x80, 0x15, 0x80
};
static char duke_wqhd_dsi1_cmd_on_cmd_7[] = {
	0x35, 0x00, 0x15, 0x80
};
static char duke_wqhd_dsi1_cmd_on_cmd_8[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd duke_wqhd_dsi1_cmd_on_command[] = {
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_0), duke_wqhd_dsi1_cmd_on_cmd_0, 120 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_1), duke_wqhd_dsi1_cmd_on_cmd_1, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_2), duke_wqhd_dsi1_cmd_on_cmd_2, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_3), duke_wqhd_dsi1_cmd_on_cmd_3, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_4), duke_wqhd_dsi1_cmd_on_cmd_4, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_5), duke_wqhd_dsi1_cmd_on_cmd_5, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_6), duke_wqhd_dsi1_cmd_on_cmd_6, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_7), duke_wqhd_dsi1_cmd_on_cmd_7, 0 },
	{ sizeof(duke_wqhd_dsi1_cmd_on_cmd_8), duke_wqhd_dsi1_cmd_on_cmd_8, 0 },
};

static char duke_wqhd_dsi1_cmd_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char duke_wqhd_dsi1_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd duke_wqhd_dsi1_cmd_off_command[] = {
	{ sizeof(duke_wqhd_dsi1_cmd_off_cmd_0), duke_wqhd_dsi1_cmd_off_cmd_0, 33 },
	{ sizeof(duke_wqhd_dsi1_cmd_off_cmd_1), duke_wqhd_dsi1_cmd_off_cmd_1, 0 },
};

static struct command_state duke_wqhd_dsi1_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info duke_wqhd_dsi1_cmd_command_panel = {
	/* FIXME: This is a command mode panel */
};

static struct videopanel_info duke_wqhd_dsi1_cmd_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration duke_wqhd_dsi1_cmd_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t duke_wqhd_dsi1_cmd_timings[] = {
	0x97, 0x5a, 0x3e, 0x00, 0x9a, 0x9a, 0x48, 0x5e, 0x4b, 0x03, 0x04, 0x00
};

static struct panel_timing duke_wqhd_dsi1_cmd_timing_info = {
	.tclk_post = 0x05,
	.tclk_pre = 0x5e,
};

static struct panel_reset_sequence duke_wqhd_dsi1_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 17, 17, 17 },
	.pin_direction = 2,
};

static struct backlight duke_wqhd_dsi1_cmd_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 128,
};

static inline void panel_duke_wqhd_dsi1_cmd_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &duke_wqhd_dsi1_cmd_panel_data;
	panel->panelres = &duke_wqhd_dsi1_cmd_panel_res;
	panel->color = &duke_wqhd_dsi1_cmd_color;
	panel->videopanel = &duke_wqhd_dsi1_cmd_video_panel;
	panel->commandpanel = &duke_wqhd_dsi1_cmd_command_panel;
	panel->state = &duke_wqhd_dsi1_cmd_state;
	panel->laneconfig = &duke_wqhd_dsi1_cmd_lane_config;
	panel->paneltiminginfo = &duke_wqhd_dsi1_cmd_timing_info;
	panel->panelresetseq = &duke_wqhd_dsi1_cmd_reset_seq;
	panel->backlightinfo = &duke_wqhd_dsi1_cmd_backlight;
	pinfo->mipi.panel_on_cmds = duke_wqhd_dsi1_cmd_on_command;
	pinfo->mipi.panel_off_cmds = duke_wqhd_dsi1_cmd_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(duke_wqhd_dsi1_cmd_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(duke_wqhd_dsi1_cmd_off_command);
	memcpy(phy_db->timing, duke_wqhd_dsi1_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_DUKE_WQHD_DSI1_CMD_H_ */
