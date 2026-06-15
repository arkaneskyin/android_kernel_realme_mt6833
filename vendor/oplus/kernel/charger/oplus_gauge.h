#ifndef _OPLUS_GAUGE_H_
#define _OPLUS_GAUGE_H_

struct oplus_gauge_operations {
	int (*get_battery_mvolts)(void);
	int (*get_battery_temperature)(void);
	int (*get_batt_remaining_capacity)(void);
	int (*get_battery_soc)(void);
	int (*get_average_current)(void);
	int (*get_prev_batt_fcc)(void);
	int (*get_battery_fcc)(void);
	int (*get_battery_cc)(void);
	int (*get_battery_soh)(void);
	int (*get_battery_authenticate)(void);
	int (*set_battery_full)(bool);
	int (*get_prev_battery_mvolts)(void);
	int (*get_prev_battery_temperature)(void);
	int (*get_prev_battery_soc)(void);
	int (*get_prev_average_current)(void);
	int (*get_prev_batt_remaining_capacity)(void);
	int (*get_battery_mvolts_2cell_max)(void);
	int (*get_battery_mvolts_2cell_min)(void);
	int (*get_prev_battery_mvolts_2cell_max)(void);
	int (*get_prev_battery_mvolts_2cell_min)(void);
	int (*update_battery_dod0)(void);
	int (*update_soc_smooth_parameter)(void);
};

struct oplus_gauge_chip {
	struct oplus_gauge_operations *gauge_ops;
};

static inline void oplus_gauge_init(struct oplus_gauge_chip *chip) {}

#endif