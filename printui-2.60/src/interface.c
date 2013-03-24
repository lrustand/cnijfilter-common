#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"

GtkWidget*
create_ui_window (void)
{
  GtkWidget *ui_window;
  GtkWidget *vbox1;
  GtkWidget *ui_main_notebook;
  GtkWidget *vbox2;
  GtkWidget *hbox1;
  GtkWidget *vbox4;
  GtkWidget *cartridge_type_vbox;
  GtkWidget *table40;
  GtkWidget *label79;
  GtkWidget *cartridge_type_combo;
  GtkWidget *print_bw_button1;
  GtkWidget *hseparator18;
  GtkWidget *table1;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *media_type_combo;
  GtkWidget *media_supply_combo;
  GtkWidget *supply_label2;
  GtkWidget *hseparator2;
  GtkWidget *hbox4;
  GtkWidget *table42;
  GtkWidget *hseparator20;
  GtkWidget *vbox64;
  GtkWidget *quality_dialog_button;
  GtkWidget *vbox65;
  GtkWidget *color_dialog_button;
  GtkWidget *vbox5;
  GtkWidget *label7;
  GtkWidget *vbox6;
  GtkWidget *label8;
  GtkWidget *vbox7;
  GtkWidget *table56;
  GtkWidget *quality_high_button;
  GSList *quality_high_button_group = NULL;
  GtkWidget *quality_standard_button;
  GtkWidget *quality_draft_button;
  GtkWidget *quality_custom_button;
  GtkWidget *vbox9;
  GtkWidget *table57;
  GtkWidget *color_auto_button;
  GSList *color_auto_button_group = NULL;
  GtkWidget *color_manual_button;
  GtkWidget *hseparator14;
  GtkWidget *one_cartridge_vbox;
  GtkWidget *print_bw_button2;
  GtkWidget *hseparator16;
  GtkWidget *lever_pos_vbox;
  GtkWidget *lever_pos_hbox;
  GtkWidget *lever_label;
  GtkWidget *thick_msg_label;
  GtkWidget *paper_gap_hbox;
  GtkWidget *label118;
  GtkWidget *paper_gap_combo;
  GtkWidget *hseparator1;
  GtkWidget *hbox32;
  GtkWidget *table58;
  GtkWidget *default_button;
  GtkWidget *label96;
  GtkWidget *version_button;
  GtkWidget *label95;
  GtkWidget *basic_sheet;
  GtkWidget *vbox72;
  GtkWidget *vbox73;
  GtkWidget *table47;
  GtkWidget *label9;
  GtkWidget *media_size_combo;
  GtkWidget *label84;
  GtkWidget *printing_type_combo;
  GtkWidget *hbox_user;
  GtkWidget *label187;
  GtkWidget *usersize_button;
  GtkWidget *hseparator81;
  GtkWidget *scaling_hbox;
  GtkWidget *label85;
  GtkObject *printing_scaling_spin_adj;
  GtkWidget *printing_scaling_spin;
  GtkWidget *label86;
  GtkWidget *vbox79;
  GtkWidget *centering_button;
  GtkWidget *borderless_vbox;
  GtkWidget *borderless_button;
  GtkWidget *borderless_hbox;
  GtkWidget *label87;
  GtkWidget *table48;
  GtkWidget *border_ext_0_button;
  GSList *border_ext_0_button_group = NULL;
  GtkWidget *border_ext_1_button;
  GtkWidget *border_ext_2_button;
  GtkWidget *border_ext_3_button;
  GtkWidget *label88;
  GtkWidget *label89;
  GtkWidget *hseparator31;
  GtkWidget *duplex_printing_vbox;
  GtkWidget *duplex_vbox;
  GtkWidget *auto_duplex_button;
  GtkWidget *duplex_hbox;
  GtkWidget *vbox168;
  GtkWidget *label128;
  GtkWidget *vbox169;
  GtkWidget *longside_button;
  GSList *longside_button_group = NULL;
  GtkWidget *shortside_button;
  GtkWidget *hseparator43;
  GtkWidget *hbox30;
  GtkWidget *vbox75;
  GtkWidget *label90;
  GtkWidget *vbox76;
  GtkWidget *hbox31;
  GtkObject *copies_spin_adj;
  GtkWidget *copies_spin;
  GtkWidget *label91;
  GtkWidget *reverse_order_button;
  GtkWidget *collate_button;
  GtkWidget *hseparator30;
  GtkWidget *hbox33;
  GtkWidget *page_setup_default_button;
  GtkWidget *label97;
  GtkWidget *page_setup_sheet;
  GtkWidget *table43;
  GtkWidget *monitor_hseparator;
  GtkWidget *hseparator22;
  GtkWidget *hseparator21;
  GtkWidget *vbox47;
  GtkWidget *util_clean_button;
  GtkWidget *label52;
  GtkWidget *util_refresh_button;
  GtkWidget *label53;
  GtkWidget *util_roller_clean_button;
  GtkWidget *label54;
  GtkWidget *util_plate_clean_button;
  GtkWidget *label125;
  GtkWidget *vbox48;
  GtkWidget *util_nozzle_check_button;
  GtkWidget *label55;
  GtkWidget *util_head_adjust_button;
  GtkWidget *label56;
  GtkWidget *util_ink_reset_button;
  GtkWidget *label93;
  GtkWidget *util_ink_warning_button;
  GtkWidget *label94;
  GtkWidget *util_ink_cartridge_button;
  GtkWidget *label127;
  GtkWidget *util_paper_source_setting_button;
  GtkWidget *label190;
  GtkWidget *vbox49;
  GtkWidget *util_power_off_button;
  GtkWidget *label57;
  GtkWidget *util_auto_power_button;
  GtkWidget *label82;
  GtkWidget *util_config_button;
  GtkWidget *label58;
  GtkWidget *util_quiet_button;
  GtkWidget *label92;
  GtkWidget *vbox50;
  GtkWidget *monitor_button;
  GtkWidget *label59;
  GtkWidget *hseparator24;
  GtkWidget *hseparator25;
  GtkWidget *hseparator26;
  GtkWidget *hseparator27;
  GtkWidget *utility_sheet;
  GtkWidget *hbuttonbox1;
  GtkWidget *ok_button;
  GtkWidget *cancel_button;

  ui_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_resizable (GTK_WINDOW (ui_window), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (ui_window), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (ui_window), vbox1);

  ui_main_notebook = gtk_notebook_new ();
  gtk_widget_show (ui_main_notebook);
  gtk_box_pack_start (GTK_BOX (vbox1), ui_main_notebook, TRUE, TRUE, 0);

  vbox2 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (ui_main_notebook), vbox2);
  gtk_container_set_border_width (GTK_CONTAINER (vbox2), 12);

  hbox1 = gtk_hbox_new (FALSE, 16);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox2), hbox1, TRUE, TRUE, 0);

  vbox4 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox4);
  gtk_box_pack_start (GTK_BOX (hbox1), vbox4, TRUE, TRUE, 0);

  cartridge_type_vbox = gtk_vbox_new (FALSE, 8);
  gtk_box_pack_start (GTK_BOX (vbox4), cartridge_type_vbox, FALSE, TRUE, 0);

  table40 = gtk_table_new (1, 2, FALSE);
  gtk_widget_show (table40);
  gtk_box_pack_start (GTK_BOX (cartridge_type_vbox), table40, TRUE, TRUE, 0);
  gtk_table_set_col_spacings (GTK_TABLE (table40), 8);

  /* LUM_IDD_PAG_MAIN_IDC_STT_CARTRIDGE */
  label79 = gtk_label_new (_("BJ Cartridge:"));
  gtk_widget_show (label79);
  gtk_table_attach (GTK_TABLE (table40), label79, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label79), 7.45058e-09, 0.5);

  cartridge_type_combo = gtk_combo_box_new_text ();
  gtk_widget_show (cartridge_type_combo);
  gtk_table_attach (GTK_TABLE (table40), cartridge_type_combo, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  /* LUM_IDD_PAG_MAIN_IDC_CHK_GRAYSCALE */
  print_bw_button1 = gtk_check_button_new_with_mnemonic (_("Grayscale Printing"));
  gtk_widget_show (print_bw_button1);
  gtk_box_pack_start (GTK_BOX (cartridge_type_vbox), print_bw_button1, FALSE, FALSE, 0);

  hseparator18 = gtk_hseparator_new ();
  gtk_widget_show (hseparator18);
  gtk_box_pack_start (GTK_BOX (cartridge_type_vbox), hseparator18, TRUE, TRUE, 0);

  table1 = gtk_table_new (3, 2, FALSE);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox4), table1, TRUE, TRUE, 0);
  gtk_table_set_row_spacings (GTK_TABLE (table1), 5);
  gtk_table_set_col_spacings (GTK_TABLE (table1), 8);

  /* LUM_IDD_PAG_MAIN_IDC_STT_MEDIATYPE */
  label4 = gtk_label_new (_("Media Type:"));
  gtk_widget_show (label4);
  gtk_table_attach (GTK_TABLE (table1), label4, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label4), 7.45058e-09, 0.5);

  /* LUM_IDD_PAG_MAIN_IDC_STT_PAPERFEED */
  label5 = gtk_label_new (_("Paper Source:"));
  gtk_widget_show (label5);
  gtk_table_attach (GTK_TABLE (table1), label5, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label5), 0, 0.5);

  media_type_combo = gtk_combo_box_new_text ();
  gtk_widget_show (media_type_combo);
  gtk_table_attach (GTK_TABLE (table1), media_type_combo, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  media_supply_combo = gtk_combo_box_new_text ();
  gtk_widget_show (media_supply_combo);
  gtk_table_attach (GTK_TABLE (table1), media_supply_combo, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  supply_label2 = gtk_label_new (_("*"));
  gtk_table_attach (GTK_TABLE (table1), supply_label2, 1, 2, 2, 3,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (supply_label2), 0, 0.5);

  hseparator2 = gtk_hseparator_new ();
  gtk_widget_show (hseparator2);
  gtk_box_pack_start (GTK_BOX (vbox4), hseparator2, TRUE, TRUE, 0);

  hbox4 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox4);
  gtk_box_pack_start (GTK_BOX (vbox4), hbox4, TRUE, TRUE, 0);

  table42 = gtk_table_new (3, 3, FALSE);
  gtk_widget_show (table42);
  gtk_box_pack_end (GTK_BOX (hbox4), table42, TRUE, TRUE, 0);
  gtk_table_set_row_spacings (GTK_TABLE (table42), 8);
  gtk_table_set_col_spacings (GTK_TABLE (table42), 8);

  hseparator20 = gtk_hseparator_new ();
  gtk_widget_show (hseparator20);
  gtk_table_attach (GTK_TABLE (table42), hseparator20, 0, 3, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  vbox64 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox64);
  gtk_table_attach (GTK_TABLE (table42), vbox64, 2, 3, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_QUALITY */
  quality_dialog_button = gtk_button_new_with_mnemonic (_("  Set...  "));
  gtk_widget_show (quality_dialog_button);
  gtk_box_pack_end (GTK_BOX (vbox64), quality_dialog_button, FALSE, FALSE, 0);
  gtk_widget_set_sensitive (quality_dialog_button, FALSE);
  GTK_WIDGET_SET_FLAGS (quality_dialog_button, GTK_CAN_DEFAULT);

  vbox65 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox65);
  gtk_table_attach (GTK_TABLE (table42), vbox65, 2, 3, 2, 3,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_QUALITY */
  color_dialog_button = gtk_button_new_with_mnemonic (_("  Set...  "));
  gtk_widget_show (color_dialog_button);
  gtk_box_pack_end (GTK_BOX (vbox65), color_dialog_button, FALSE, FALSE, 0);
  gtk_widget_set_sensitive (color_dialog_button, FALSE);
  GTK_WIDGET_SET_FLAGS (color_dialog_button, GTK_CAN_DEFAULT);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox5);
  gtk_table_attach (GTK_TABLE (table42), vbox5, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  /* LUM_IDD_PAG_MAIN_IDC_GRP_QUALITY */
  label7 = gtk_label_new (_("Print Quality"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (vbox5), label7, FALSE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (label7), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (label7), 7.45058e-09, 7.45058e-09);

  vbox6 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox6);
  gtk_table_attach (GTK_TABLE (table42), vbox6, 0, 1, 2, 3,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  /* LUM_IDS_COLORADJUSTMENT */
  label8 = gtk_label_new (_("Color/Intensity"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (vbox6), label8, FALSE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (label8), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (label8), 7.45058e-09, 7.45058e-09);

  vbox7 = gtk_vbox_new (TRUE, 0);
  gtk_widget_show (vbox7);
  gtk_table_attach (GTK_TABLE (table42), vbox7, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox7), 4);

  table56 = gtk_table_new (4, 1, FALSE);
  gtk_widget_show (table56);
  gtk_box_pack_start (GTK_BOX (vbox7), table56, TRUE, TRUE, 0);

  /* LUM_IDS_QUALITY_BEST */
  quality_high_button = gtk_radio_button_new_with_mnemonic (NULL, _("High"));
  gtk_widget_show (quality_high_button);
  gtk_table_attach (GTK_TABLE (table56), quality_high_button, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_high_button), quality_high_button_group);
  quality_high_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_high_button));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (quality_high_button), TRUE);

  /* LUM_IDS_OUTPUTSTYLE_STANDARD */
  quality_standard_button = gtk_radio_button_new_with_mnemonic (NULL, _("Standard"));
  gtk_widget_show (quality_standard_button);
  gtk_table_attach (GTK_TABLE (table56), quality_standard_button, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_standard_button), quality_high_button_group);
  quality_high_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_standard_button));

  /* LUM_IDS_QUALITY_FAST */
  quality_draft_button = gtk_radio_button_new_with_mnemonic (NULL, _("Fast"));
  gtk_widget_show (quality_draft_button);
  gtk_table_attach (GTK_TABLE (table56), quality_draft_button, 0, 1, 2, 3,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_draft_button), quality_high_button_group);
  quality_high_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_draft_button));

  /* LUM_IDD_PAG_MAIN_IDC_RAD_QUALITY_CUSTOM */
  quality_custom_button = gtk_radio_button_new_with_mnemonic (NULL, _("Custom"));
  gtk_widget_show (quality_custom_button);
  gtk_table_attach (GTK_TABLE (table56), quality_custom_button, 0, 1, 3, 4,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_custom_button), quality_high_button_group);
  quality_high_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_custom_button));

  vbox9 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox9);
  gtk_table_attach (GTK_TABLE (table42), vbox9, 1, 2, 2, 3,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox9), 4);

  table57 = gtk_table_new (2, 1, FALSE);
  gtk_widget_show (table57);
  gtk_box_pack_end (GTK_BOX (vbox9), table57, FALSE, FALSE, 0);

  /* LUM_IDD_PAG_MAIN_IDC_RAD_COLORADJ_AUTO */
  color_auto_button = gtk_radio_button_new_with_mnemonic (NULL, _("Auto"));
  gtk_widget_show (color_auto_button);
  gtk_table_attach (GTK_TABLE (table57), color_auto_button, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (color_auto_button), color_auto_button_group);
  color_auto_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (color_auto_button));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (color_auto_button), TRUE);

  /* LUM_IDD_PAG_MAIN_IDC_RAD_COLORADJ_MANUAL */
  color_manual_button = gtk_radio_button_new_with_mnemonic (NULL, _("Manual"));
  gtk_widget_show (color_manual_button);
  gtk_table_attach (GTK_TABLE (table57), color_manual_button, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (color_manual_button), color_auto_button_group);
  color_auto_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (color_manual_button));

  hseparator14 = gtk_hseparator_new ();
  gtk_widget_show (hseparator14);
  gtk_box_pack_start (GTK_BOX (vbox4), hseparator14, FALSE, FALSE, 0);

  one_cartridge_vbox = gtk_vbox_new (FALSE, 8);
  gtk_box_pack_start (GTK_BOX (vbox4), one_cartridge_vbox, FALSE, FALSE, 0);

  /* LUM_IDD_PAG_MAIN_IDC_CHK_GRAYSCALE */
  print_bw_button2 = gtk_check_button_new_with_mnemonic (_("Grayscale Printing"));
  gtk_widget_show (print_bw_button2);
  gtk_box_pack_start (GTK_BOX (one_cartridge_vbox), print_bw_button2, FALSE, FALSE, 0);

  hseparator16 = gtk_hseparator_new ();
  gtk_widget_show (hseparator16);
  gtk_box_pack_start (GTK_BOX (one_cartridge_vbox), hseparator16, TRUE, TRUE, 0);

  lever_pos_vbox = gtk_vbox_new (FALSE, 8);
  gtk_box_pack_start (GTK_BOX (vbox4), lever_pos_vbox, TRUE, TRUE, 0);

  lever_pos_hbox = gtk_hbox_new (FALSE, 4);
  gtk_box_pack_start (GTK_BOX (lever_pos_vbox), lever_pos_hbox, TRUE, TRUE, 0);

  lever_label = gtk_label_new (_("*"));
  gtk_widget_show (lever_label);
  gtk_box_pack_start (GTK_BOX (lever_pos_hbox), lever_label, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (lever_label), 7.45058e-09, 0.5);

  thick_msg_label = gtk_label_new (_("*"));
  gtk_widget_show (thick_msg_label);
  gtk_box_pack_start (GTK_BOX (lever_pos_hbox), thick_msg_label, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (thick_msg_label), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (thick_msg_label), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (thick_msg_label), 30, 0);

  paper_gap_hbox = gtk_hbox_new (FALSE, 16);
  gtk_box_pack_start (GTK_BOX (lever_pos_vbox), paper_gap_hbox, TRUE, TRUE, 0);

  /* LUM_LID_PAPER_GAP */
  label118 = gtk_label_new (_("Paper Gap:"));
  gtk_widget_show (label118);
  gtk_box_pack_start (GTK_BOX (paper_gap_hbox), label118, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label118), 7.45058e-09, 0.5);

  paper_gap_combo = gtk_combo_box_new_text ();
  gtk_widget_show (paper_gap_combo);
  gtk_box_pack_start (GTK_BOX (paper_gap_hbox), paper_gap_combo, FALSE, FALSE, 0);

  hseparator1 = gtk_hseparator_new ();
  gtk_widget_show (hseparator1);
  gtk_box_pack_start (GTK_BOX (lever_pos_vbox), hseparator1, TRUE, TRUE, 0);

  hbox32 = gtk_hbox_new (FALSE, 4);
  gtk_widget_show (hbox32);
  gtk_box_pack_end (GTK_BOX (vbox2), hbox32, FALSE, FALSE, 0);

  table58 = gtk_table_new (1, 2, FALSE);
  gtk_widget_show (table58);
  gtk_box_pack_end (GTK_BOX (hbox32), table58, FALSE, FALSE, 0);
  gtk_table_set_col_spacings (GTK_TABLE (table58), 8);

  default_button = gtk_button_new ();
  gtk_widget_show (default_button);
  gtk_table_attach (GTK_TABLE (table58), default_button, 1, 2, 0, 1,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  GTK_WIDGET_SET_FLAGS (default_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_MAIN_DEFAULT */
  label96 = gtk_label_new (_("Defaults"));
  gtk_widget_show (label96);
  gtk_container_add (GTK_CONTAINER (default_button), label96);
  gtk_label_set_justify (GTK_LABEL (label96), GTK_JUSTIFY_CENTER);
  gtk_misc_set_padding (GTK_MISC (label96), 6, 0);

  version_button = gtk_button_new ();
  gtk_widget_show (version_button);
  gtk_table_attach (GTK_TABLE (table58), version_button, 0, 1, 0, 1,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  GTK_WIDGET_SET_FLAGS (version_button, GTK_CAN_DEFAULT);

  /* LUM_IDR_PV_MAIN_IDM_PV_VERSION */
  label95 = gtk_label_new (_("About"));
  gtk_widget_show (label95);
  gtk_container_add (GTK_CONTAINER (version_button), label95);
  gtk_label_set_justify (GTK_LABEL (label95), GTK_JUSTIFY_CENTER);
  gtk_misc_set_padding (GTK_MISC (label95), 6, 0);

  /* LUM_IDD_PAG_MAIN */
  basic_sheet = gtk_label_new (_("Main"));
  gtk_widget_show (basic_sheet);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (ui_main_notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (ui_main_notebook), 0), basic_sheet);
  gtk_label_set_justify (GTK_LABEL (basic_sheet), GTK_JUSTIFY_CENTER);

  vbox72 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox72);
  gtk_container_add (GTK_CONTAINER (ui_main_notebook), vbox72);
  gtk_container_set_border_width (GTK_CONTAINER (vbox72), 12);

  vbox73 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox73);
  gtk_box_pack_start (GTK_BOX (vbox72), vbox73, FALSE, FALSE, 0);

  table47 = gtk_table_new (4, 2, FALSE);
  gtk_widget_show (table47);
  gtk_box_pack_start (GTK_BOX (vbox73), table47, TRUE, TRUE, 0);
  gtk_table_set_row_spacings (GTK_TABLE (table47), 2);
  gtk_table_set_col_spacings (GTK_TABLE (table47), 8);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_PAGESIZE */
  label9 = gtk_label_new (_("Page Size:"));
  gtk_widget_show (label9);
  gtk_table_attach (GTK_TABLE (table47), label9, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label9), 7.45058e-09, 0.5);

  media_size_combo = gtk_combo_box_new_text ();
  gtk_widget_show (media_size_combo);
  gtk_table_attach (GTK_TABLE (table47), media_size_combo, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_PRINTTYPE */
  label84 = gtk_label_new (_("Page Layout:"));
  gtk_widget_show (label84);
  gtk_table_attach (GTK_TABLE (table47), label84, 0, 1, 3, 4,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label84), 7.45058e-09, 0.5);

  printing_type_combo = gtk_combo_box_new_text ();
  gtk_widget_show (printing_type_combo);
  gtk_table_attach (GTK_TABLE (table47), printing_type_combo, 1, 2, 3, 4,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  hbox_user = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox_user);
  gtk_table_attach (GTK_TABLE (table47), hbox_user, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox_user), 2);

  label187 = gtk_label_new ("");
  gtk_widget_show (label187);
  gtk_box_pack_start (GTK_BOX (hbox_user), label187, FALSE, FALSE, 0);
  gtk_widget_set_size_request (label187, 150, -1);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_QUALITY */
  usersize_button = gtk_button_new_with_mnemonic (_("  Set...  "));
  gtk_widget_show (usersize_button);
  gtk_box_pack_start (GTK_BOX (hbox_user), usersize_button, TRUE, TRUE, 0);
  GTK_WIDGET_SET_FLAGS (usersize_button, GTK_CAN_DEFAULT);

  hseparator81 = gtk_hseparator_new ();
  gtk_widget_show (hseparator81);
  gtk_table_attach (GTK_TABLE (table47), hseparator81, 0, 2, 2, 3,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 6);

  scaling_hbox = gtk_hbox_new (FALSE, 16);
  gtk_box_pack_start (GTK_BOX (vbox73), scaling_hbox, TRUE, TRUE, 0);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_SCALING */
  label85 = gtk_label_new (_("Scaling:"));
  gtk_widget_show (label85);
  gtk_box_pack_start (GTK_BOX (scaling_hbox), label85, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (label85), 1, 0.5);

  printing_scaling_spin_adj = gtk_adjustment_new (100, 20, 400, 1, 10, 0);
  printing_scaling_spin = gtk_spin_button_new (GTK_ADJUSTMENT (printing_scaling_spin_adj), 1, 0);
  gtk_widget_show (printing_scaling_spin);
  gtk_box_pack_start (GTK_BOX (scaling_hbox), printing_scaling_spin, FALSE, FALSE, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (printing_scaling_spin), TRUE);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_SCALING_RANGE */
  label86 = gtk_label_new (_("% (20-400)"));
  gtk_widget_show (label86);
  gtk_box_pack_end (GTK_BOX (scaling_hbox), label86, FALSE, FALSE, 0);

  vbox79 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox79);
  gtk_box_pack_start (GTK_BOX (vbox72), vbox79, FALSE, FALSE, 0);

  /* LUM_LID_CENTERRING */
  centering_button = gtk_check_button_new_with_mnemonic (_("Centering"));
  gtk_widget_show (centering_button);
  gtk_box_pack_start (GTK_BOX (vbox79), centering_button, FALSE, FALSE, 1);

  borderless_vbox = gtk_vbox_new (FALSE, 4);
  gtk_box_pack_start (GTK_BOX (vbox79), borderless_vbox, TRUE, TRUE, 0);

  /* LUM_IDS_EDGETOEDGE */
  borderless_button = gtk_check_button_new_with_mnemonic (_("Borderless"));
  gtk_widget_show (borderless_button);
  gtk_box_pack_start (GTK_BOX (borderless_vbox), borderless_button, FALSE, FALSE, 0);

  borderless_hbox = gtk_hbox_new (FALSE, 16);
  gtk_widget_show (borderless_hbox);
  gtk_box_pack_start (GTK_BOX (borderless_vbox), borderless_hbox, FALSE, FALSE, 0);

  /* LUM_IDD_PAG_PAGESET_XP_ETOE_IDC_STT_ETOEOVERPRINT */
  label87 = gtk_label_new (_("Amount of Extension:"));
  gtk_widget_show (label87);
  gtk_box_pack_start (GTK_BOX (borderless_hbox), label87, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (label87), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label87), 1, 0.5);

  table48 = gtk_table_new (2, 4, TRUE);
  gtk_widget_show (table48);
  gtk_box_pack_start (GTK_BOX (borderless_hbox), table48, FALSE, FALSE, 0);

  border_ext_0_button = gtk_radio_button_new_with_mnemonic (NULL, _("0"));
  gtk_widget_show (border_ext_0_button);
  gtk_table_attach (GTK_TABLE (table48), border_ext_0_button, 0, 1, 1, 2,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (border_ext_0_button), border_ext_0_button_group);
  border_ext_0_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (border_ext_0_button));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_5 */
  border_ext_1_button = gtk_radio_button_new_with_mnemonic (NULL, _("1"));
  gtk_widget_show (border_ext_1_button);
  gtk_table_attach (GTK_TABLE (table48), border_ext_1_button, 1, 2, 1, 2,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (border_ext_1_button), border_ext_0_button_group);
  border_ext_0_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (border_ext_1_button));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_4 */
  border_ext_2_button = gtk_radio_button_new_with_mnemonic (NULL, _("2"));
  gtk_widget_show (border_ext_2_button);
  gtk_table_attach (GTK_TABLE (table48), border_ext_2_button, 2, 3, 1, 2,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (border_ext_2_button), border_ext_0_button_group);
  border_ext_0_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (border_ext_2_button));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_3 */
  border_ext_3_button = gtk_radio_button_new_with_mnemonic (NULL, _("3"));
  gtk_widget_show (border_ext_3_button);
  gtk_table_attach (GTK_TABLE (table48), border_ext_3_button, 3, 4, 1, 2,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (border_ext_3_button), border_ext_0_button_group);
  border_ext_0_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (border_ext_3_button));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (border_ext_3_button), TRUE);

  /* LUM_LID_MIN */
  label88 = gtk_label_new (_("Min"));
  gtk_widget_show (label88);
  gtk_table_attach (GTK_TABLE (table48), label88, 0, 1, 0, 1,
  (GtkAttachOptions) (0),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label88), GTK_JUSTIFY_CENTER);

  /* LUM_LID_MAX */
  label89 = gtk_label_new (_("Max"));
  gtk_widget_show (label89);
  gtk_table_attach (GTK_TABLE (table48), label89, 3, 4, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label89), GTK_JUSTIFY_CENTER);

  hseparator31 = gtk_hseparator_new ();
  gtk_widget_show (hseparator31);
  gtk_box_pack_start (GTK_BOX (vbox72), hseparator31, FALSE, FALSE, 0);

  duplex_printing_vbox = gtk_vbox_new (FALSE, 0);
  gtk_box_pack_start (GTK_BOX (vbox72), duplex_printing_vbox, FALSE, FALSE, 0);

  duplex_vbox = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (duplex_vbox);
  gtk_box_pack_start (GTK_BOX (duplex_printing_vbox), duplex_vbox, TRUE, TRUE, 0);

  /* LUM_IDS_PT_DN_AUTODUPLEX */
  auto_duplex_button = gtk_check_button_new_with_mnemonic (_("Automatic Duplex Printing"));
  gtk_widget_show (auto_duplex_button);
  gtk_box_pack_start (GTK_BOX (duplex_vbox), auto_duplex_button, FALSE, FALSE, 0);

  duplex_hbox = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (duplex_hbox);
  gtk_box_pack_start (GTK_BOX (duplex_vbox), duplex_hbox, TRUE, TRUE, 0);

  vbox168 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox168);
  gtk_box_pack_start (GTK_BOX (duplex_hbox), vbox168, TRUE, TRUE, 0);

  /* LUM_IDD_PAG_PAGESET_XP_MANUDUP_IDC_STT_EDGE */
  label128 = gtk_label_new (_("Staple Side:"));
  gtk_widget_show (label128);
  gtk_box_pack_start (GTK_BOX (vbox168), label128, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label128), 0.61, 0.5);

  vbox169 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox169);
  gtk_box_pack_start (GTK_BOX (duplex_hbox), vbox169, TRUE, TRUE, 0);

  /* LUM_IDS_STAPLE_LONGSIDE */
  longside_button = gtk_radio_button_new_with_mnemonic (NULL, _("Long-side stapling"));
  gtk_widget_show (longside_button);
  gtk_box_pack_start (GTK_BOX (vbox169), longside_button, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (longside_button), longside_button_group);
  longside_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (longside_button));

  /* LUM_IDS_STAPLE_SHORTSIDE */
  shortside_button = gtk_radio_button_new_with_mnemonic (NULL, _("Short-side stapling"));
  gtk_widget_show (shortside_button);
  gtk_box_pack_start (GTK_BOX (vbox169), shortside_button, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (shortside_button), longside_button_group);
  longside_button_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (shortside_button));

  hseparator43 = gtk_hseparator_new ();
  gtk_widget_show (hseparator43);
  gtk_box_pack_start (GTK_BOX (duplex_printing_vbox), hseparator43, FALSE, TRUE, 8);

  hbox30 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox30);
  gtk_box_pack_start (GTK_BOX (vbox72), hbox30, FALSE, FALSE, 0);

  vbox75 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox75);
  gtk_box_pack_start (GTK_BOX (hbox30), vbox75, TRUE, TRUE, 0);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_COPIES */
  label90 = gtk_label_new (_("Copies:"));
  gtk_widget_show (label90);
  gtk_box_pack_start (GTK_BOX (vbox75), label90, FALSE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (label90), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (label90), 7.45058e-09, 7.45058e-09);

  vbox76 = gtk_vbox_new (FALSE, 4);
  gtk_widget_show (vbox76);
  gtk_box_pack_start (GTK_BOX (hbox30), vbox76, TRUE, TRUE, 0);

  hbox31 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox31);
  gtk_box_pack_start (GTK_BOX (vbox76), hbox31, TRUE, TRUE, 0);

  copies_spin_adj = gtk_adjustment_new (1, 1, 999, 1, 10, 0);
  copies_spin = gtk_spin_button_new (GTK_ADJUSTMENT (copies_spin_adj), 1, 0);
  gtk_widget_show (copies_spin);
  gtk_box_pack_start (GTK_BOX (hbox31), copies_spin, FALSE, FALSE, 0);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (copies_spin), TRUE);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_COPIES_RANGE */
  label91 = gtk_label_new (_("(1-999)"));
  gtk_widget_show (label91);
  gtk_box_pack_start (GTK_BOX (hbox31), label91, FALSE, FALSE, 0);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_CHK_REVERSE */
  reverse_order_button = gtk_check_button_new_with_mnemonic (_("Print from Last Page"));
  gtk_box_pack_start (GTK_BOX (vbox76), reverse_order_button, FALSE, FALSE, 0);
  gtk_widget_set_sensitive (reverse_order_button, FALSE);

  /* LUM_IDS_COLLATE */
  collate_button = gtk_check_button_new_with_mnemonic (_("Collate"));
  gtk_box_pack_start (GTK_BOX (vbox76), collate_button, FALSE, FALSE, 0);
  gtk_widget_set_sensitive (collate_button, FALSE);

  hseparator30 = gtk_hseparator_new ();
  gtk_widget_show (hseparator30);
  gtk_box_pack_end (GTK_BOX (vbox72), hseparator30, FALSE, FALSE, 0);

  hbox33 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox33);
  gtk_box_pack_end (GTK_BOX (vbox72), hbox33, FALSE, FALSE, 0);

  page_setup_default_button = gtk_button_new ();
  gtk_widget_show (page_setup_default_button);
  gtk_box_pack_end (GTK_BOX (hbox33), page_setup_default_button, FALSE, FALSE, 0);
  GTK_WIDGET_SET_FLAGS (page_setup_default_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_MAIN_DEFAULT */
  label97 = gtk_label_new (_("Defaults"));
  gtk_widget_show (label97);
  gtk_container_add (GTK_CONTAINER (page_setup_default_button), label97);
  gtk_label_set_justify (GTK_LABEL (label97), GTK_JUSTIFY_CENTER);
  gtk_misc_set_padding (GTK_MISC (label97), 6, 0);

  /* LUM_IDD_PAG_PAGESET_XP */
  page_setup_sheet = gtk_label_new (_("Page Setup"));
  gtk_widget_show (page_setup_sheet);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (ui_main_notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (ui_main_notebook), 1), page_setup_sheet);
  gtk_label_set_justify (GTK_LABEL (page_setup_sheet), GTK_JUSTIFY_CENTER);

  table43 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table43);
  gtk_container_add (GTK_CONTAINER (ui_main_notebook), table43);
  gtk_container_set_border_width (GTK_CONTAINER (table43), 12);

  monitor_hseparator = gtk_hseparator_new ();
  gtk_table_attach (GTK_TABLE (table43), monitor_hseparator, 0, 2, 5, 6,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  hseparator22 = gtk_hseparator_new ();
  gtk_widget_show (hseparator22);
  gtk_table_attach (GTK_TABLE (table43), hseparator22, 0, 2, 3, 4,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  hseparator21 = gtk_hseparator_new ();
  gtk_widget_show (hseparator21);
  gtk_table_attach (GTK_TABLE (table43), hseparator21, 0, 2, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  vbox47 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox47);
  gtk_table_attach (GTK_TABLE (table43), vbox47, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  util_clean_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox47), util_clean_button, FALSE, FALSE, 0);

  label52 = gtk_label_new (_("Cleaning"));
  gtk_widget_show (label52);
  gtk_container_add (GTK_CONTAINER (util_clean_button), label52);
  gtk_label_set_justify (GTK_LABEL (label52), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label52), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label52), 8, 4);

  util_refresh_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox47), util_refresh_button, FALSE, FALSE, 0);

  label53 = gtk_label_new (_("Deep Cleaning"));
  gtk_widget_show (label53);
  gtk_container_add (GTK_CONTAINER (util_refresh_button), label53);
  gtk_label_set_justify (GTK_LABEL (label53), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label53), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label53), 8, 4);

  util_roller_clean_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox47), util_roller_clean_button, FALSE, FALSE, 0);

  label54 = gtk_label_new (_("Roller Cleaning"));
  gtk_widget_show (label54);
  gtk_container_add (GTK_CONTAINER (util_roller_clean_button), label54);
  gtk_label_set_justify (GTK_LABEL (label54), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label54), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label54), 8, 4);

  util_plate_clean_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox47), util_plate_clean_button, FALSE, FALSE, 0);

  label125 = gtk_label_new (_("Bottom Plate Cleaning"));
  gtk_widget_show (label125);
  gtk_container_add (GTK_CONTAINER (util_plate_clean_button), label125);
  gtk_label_set_justify (GTK_LABEL (label125), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label125), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label125), 8, 4);

  vbox48 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox48);
  gtk_table_attach (GTK_TABLE (table43), vbox48, 0, 1, 2, 3,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  util_nozzle_check_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox48), util_nozzle_check_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_NOZZLE */
  label55 = gtk_label_new (_("Nozzle Check"));
  gtk_widget_show (label55);
  gtk_container_add (GTK_CONTAINER (util_nozzle_check_button), label55);
  gtk_label_set_justify (GTK_LABEL (label55), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label55), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label55), 8, 4);

  util_head_adjust_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox48), util_head_adjust_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_PHA */
  label56 = gtk_label_new (_("Print Head Alignment"));
  gtk_widget_show (label56);
  gtk_container_add (GTK_CONTAINER (util_head_adjust_button), label56);
  gtk_label_set_justify (GTK_LABEL (label56), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label56), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label56), 8, 4);

  util_ink_reset_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox48), util_ink_reset_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_INKCOUNT */
  label93 = gtk_label_new (_("Ink Counter Reset"));
  gtk_widget_show (label93);
  gtk_container_add (GTK_CONTAINER (util_ink_reset_button), label93);
  gtk_label_set_justify (GTK_LABEL (label93), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label93), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label93), 8, 4);

  util_ink_warning_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox48), util_ink_warning_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_INKALERT */
  label94 = gtk_label_new (_("Low Ink Warning Setting"));
  gtk_widget_show (label94);
  gtk_container_add (GTK_CONTAINER (util_ink_warning_button), label94);
  gtk_label_set_justify (GTK_LABEL (label94), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label94), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label94), 8, 4);

  util_ink_cartridge_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox48), util_ink_cartridge_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_CARTRIDGE */
  label127 = gtk_label_new (_("Ink Cartridge Settings"));
  gtk_widget_show (label127);
  gtk_container_add (GTK_CONTAINER (util_ink_cartridge_button), label127);
  gtk_label_set_justify (GTK_LABEL (label127), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label127), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label127), 8, 4);

  util_paper_source_setting_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox48), util_paper_source_setting_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_PPSOURCE */
  label190 = gtk_label_new (_("Paper Source Setting for Plain Paper"));
  gtk_widget_show (label190);
  gtk_container_add (GTK_CONTAINER (util_paper_source_setting_button), label190);
  gtk_label_set_justify (GTK_LABEL (label190), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label190), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label190), 8, 4);

  vbox49 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox49);
  gtk_table_attach (GTK_TABLE (table43), vbox49, 0, 1, 4, 5,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  util_power_off_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox49), util_power_off_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_POWEROFF */
  label57 = gtk_label_new (_("Power Off"));
  gtk_widget_show (label57);
  gtk_container_add (GTK_CONTAINER (util_power_off_button), label57);
  gtk_label_set_justify (GTK_LABEL (label57), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label57), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label57), 8, 4);

  util_auto_power_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox49), util_auto_power_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_AUTOPOWER */
  label82 = gtk_label_new (_("Auto Power"));
  gtk_widget_show (label82);
  gtk_container_add (GTK_CONTAINER (util_auto_power_button), label82);
  gtk_label_set_justify (GTK_LABEL (label82), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label82), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label82), 8, 4);

  util_config_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox49), util_config_button, FALSE, FALSE, 0);

  /* LUM_IDS_MNT_CPT_CUSTOM */
  label58 = gtk_label_new (_("Custom Settings"));
  gtk_widget_show (label58);
  gtk_container_add (GTK_CONTAINER (util_config_button), label58);
  gtk_label_set_justify (GTK_LABEL (label58), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label58), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label58), 8, 4);

  util_quiet_button = gtk_button_new ();
  gtk_box_pack_start (GTK_BOX (vbox49), util_quiet_button, FALSE, FALSE, 0);

  /* LUM_IDD_SILENTMODE */
  label92 = gtk_label_new (_("Quiet Mode"));
  gtk_widget_show (label92);
  gtk_container_add (GTK_CONTAINER (util_quiet_button), label92);
  gtk_label_set_justify (GTK_LABEL (label92), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label92), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label92), 8, 4);

  vbox50 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (vbox50);
  gtk_table_attach (GTK_TABLE (table43), vbox50, 0, 1, 6, 7,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  monitor_button = gtk_button_new ();
  gtk_box_pack_end (GTK_BOX (vbox50), monitor_button, FALSE, FALSE, 0);

  /* LUM_IDD_PAG_MAINTENANCE_IDC_BTN_STATUSMONITOR */
  label59 = gtk_label_new (_("View Printer Status..."));
  gtk_widget_show (label59);
  gtk_container_add (GTK_CONTAINER (monitor_button), label59);
  gtk_label_set_justify (GTK_LABEL (label59), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label59), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label59), 8, 4);

  hseparator24 = gtk_hseparator_new ();
  gtk_table_attach (GTK_TABLE (table43), hseparator24, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);

  hseparator25 = gtk_hseparator_new ();
  gtk_table_attach (GTK_TABLE (table43), hseparator25, 1, 2, 2, 3,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);

  hseparator26 = gtk_hseparator_new ();
  gtk_table_attach (GTK_TABLE (table43), hseparator26, 1, 2, 4, 5,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);

  hseparator27 = gtk_hseparator_new ();
  gtk_table_attach (GTK_TABLE (table43), hseparator27, 1, 2, 6, 7,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (GTK_FILL), 0, 0);

  utility_sheet = gtk_label_new (_("Maintenance"));
  gtk_widget_show (utility_sheet);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (ui_main_notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (ui_main_notebook), 2), utility_sheet);
  gtk_label_set_justify (GTK_LABEL (utility_sheet), GTK_JUSTIFY_CENTER);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbuttonbox1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbuttonbox1), 5);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox1), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox1), 8);

  /* LUM_IDD_MESSAGEBOX_IDOK */
  ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), ok_button);
  GTK_WIDGET_SET_FLAGS (ok_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_MESSAGEBOX_IDCANCEL */
  cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), cancel_button);
  GTK_WIDGET_SET_FLAGS (cancel_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) ui_window, "destroy",
  G_CALLBACK (on_ui_window_destroy),
  NULL);
  g_signal_connect ((gpointer) ui_main_notebook, "switch_page",
  G_CALLBACK (on_ui_main_notebook_switch_page),
  NULL);
  g_signal_connect ((gpointer) cartridge_type_combo, "changed",
  G_CALLBACK (on_cartridge_type_combo_changed),
  NULL);
  g_signal_connect ((gpointer) print_bw_button1, "clicked",
  G_CALLBACK (on_print_bw_button_clicked),
  NULL);
  g_signal_connect ((gpointer) media_type_combo, "changed",
  G_CALLBACK (on_media_type_combo_changed),
  NULL);
  g_signal_connect ((gpointer) media_supply_combo, "changed",
  G_CALLBACK (on_media_supply_combo_changed),
  NULL);
  g_signal_connect ((gpointer) quality_dialog_button, "clicked",
  G_CALLBACK (on_quality_dialog_button_clicked),
  NULL);
  g_signal_connect ((gpointer) color_dialog_button, "clicked",
  G_CALLBACK (on_color_dialog_button_clicked),
  NULL);
  g_signal_connect ((gpointer) quality_high_button, "clicked",
  G_CALLBACK (on_quality_button_clicked),
  NULL);
  g_signal_connect ((gpointer) quality_standard_button, "clicked",
  G_CALLBACK (on_quality_button_clicked),
  NULL);
  g_signal_connect ((gpointer) quality_draft_button, "clicked",
  G_CALLBACK (on_quality_button_clicked),
  NULL);
  g_signal_connect ((gpointer) quality_custom_button, "clicked",
  G_CALLBACK (on_quality_button_clicked),
  NULL);
  g_signal_connect ((gpointer) color_auto_button, "clicked",
  G_CALLBACK (on_color_button_clicked),
  NULL);
  g_signal_connect ((gpointer) color_manual_button, "clicked",
  G_CALLBACK (on_color_button_clicked),
  NULL);
  g_signal_connect ((gpointer) print_bw_button2, "clicked",
  G_CALLBACK (on_print_bw_button_clicked),
  NULL);
  g_signal_connect ((gpointer) paper_gap_combo, "changed",
  G_CALLBACK (on_paper_gap_combo_changed),
  NULL);
  g_signal_connect ((gpointer) default_button, "clicked",
  G_CALLBACK (on_default_button_clicked),
  NULL);
  g_signal_connect ((gpointer) version_button, "clicked",
  G_CALLBACK (on_version_button_clicked),
  NULL);
  g_signal_connect ((gpointer) media_size_combo, "changed",
  G_CALLBACK (on_media_size_combo_changed),
  NULL);
  g_signal_connect ((gpointer) printing_type_combo, "changed",
  G_CALLBACK (on_printing_type_combo_changed),
  NULL);
  g_signal_connect ((gpointer) usersize_button, "clicked",
  G_CALLBACK (on_usersize_button_clicked),
  NULL);
  g_signal_connect ((gpointer) printing_scaling_spin, "value_changed",
  G_CALLBACK (on_printing_scaling_spin_value_changed),
  NULL);
  g_signal_connect ((gpointer) centering_button, "clicked",
  G_CALLBACK (on_centering_button_clicked),
  NULL);
  g_signal_connect ((gpointer) borderless_button, "clicked",
  G_CALLBACK (on_borderless_button_clicked),
  NULL);
  g_signal_connect ((gpointer) border_ext_0_button, "toggled",
  G_CALLBACK (on_border_ext_i_button_toggled),
  NULL);
  g_signal_connect ((gpointer) border_ext_1_button, "toggled",
  G_CALLBACK (on_border_ext_i_button_toggled),
  NULL);
  g_signal_connect ((gpointer) border_ext_2_button, "toggled",
  G_CALLBACK (on_border_ext_i_button_toggled),
  NULL);
  g_signal_connect ((gpointer) border_ext_3_button, "toggled",
  G_CALLBACK (on_border_ext_i_button_toggled),
  NULL);
  g_signal_connect ((gpointer) auto_duplex_button, "clicked",
  G_CALLBACK (on_auto_duplex_button_clicked),
  NULL);
  g_signal_connect ((gpointer) longside_button, "clicked",
  G_CALLBACK (on_longside_button_clicked),
  NULL);
  g_signal_connect ((gpointer) shortside_button, "clicked",
  G_CALLBACK (on_shortside_button_clicked),
  NULL);
  g_signal_connect ((gpointer) copies_spin, "value_changed",
  G_CALLBACK (on_copies_spin_value_changed),
  NULL);
  g_signal_connect ((gpointer) reverse_order_button, "clicked",
  G_CALLBACK (on_reverse_order_button_clicked),
  NULL);
  g_signal_connect ((gpointer) collate_button, "clicked",
  G_CALLBACK (on_collate_button_clicked),
  NULL);
  g_signal_connect ((gpointer) page_setup_default_button, "clicked",
  G_CALLBACK (on_page_setup_default_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_clean_button, "clicked",
  G_CALLBACK (on_util_clean_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_refresh_button, "clicked",
  G_CALLBACK (on_util_refresh_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_roller_clean_button, "clicked",
  G_CALLBACK (on_util_roller_clean_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_plate_clean_button, "clicked",
  G_CALLBACK (on_util_plate_clean_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_nozzle_check_button, "clicked",
  G_CALLBACK (on_util_nozzle_check_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_head_adjust_button, "clicked",
  G_CALLBACK (on_util_head_adjust_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_ink_reset_button, "clicked",
  G_CALLBACK (on_util_ink_reset_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_ink_warning_button, "clicked",
  G_CALLBACK (on_util_ink_warning_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_ink_cartridge_button, "clicked",
  G_CALLBACK (on_util_ink_cartridge_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_paper_source_setting_button, "clicked",
  G_CALLBACK (on_util_paper_source_setting_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_power_off_button, "clicked",
  G_CALLBACK (on_util_power_off_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_auto_power_button, "clicked",
  G_CALLBACK (on_util_auto_power_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_config_button, "clicked",
  G_CALLBACK (on_util_config_button_clicked),
  NULL);
  g_signal_connect ((gpointer) util_quiet_button, "clicked",
  G_CALLBACK (on_util_quiet_button_clicked),
  NULL);
  g_signal_connect ((gpointer) monitor_button, "clicked",
  G_CALLBACK (on_monitor_button_clicked),
  NULL);
  g_signal_connect ((gpointer) ok_button, "clicked",
  G_CALLBACK (on_ok_button_clicked),
  NULL);
  g_signal_connect ((gpointer) cancel_button, "clicked",
  G_CALLBACK (on_cancel_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ui_window, ui_window, "ui_window");
  GLADE_HOOKUP_OBJECT (ui_window, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (ui_window, ui_main_notebook, "ui_main_notebook");
  GLADE_HOOKUP_OBJECT (ui_window, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (ui_window, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (ui_window, vbox4, "vbox4");
  GLADE_HOOKUP_OBJECT (ui_window, cartridge_type_vbox, "cartridge_type_vbox");
  GLADE_HOOKUP_OBJECT (ui_window, table40, "table40");
  GLADE_HOOKUP_OBJECT (ui_window, label79, "label79");
  GLADE_HOOKUP_OBJECT (ui_window, cartridge_type_combo, "cartridge_type_combo");
  GLADE_HOOKUP_OBJECT (ui_window, print_bw_button1, "print_bw_button1");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator18, "hseparator18");
  GLADE_HOOKUP_OBJECT (ui_window, table1, "table1");
  GLADE_HOOKUP_OBJECT (ui_window, label4, "label4");
  GLADE_HOOKUP_OBJECT (ui_window, label5, "label5");
  GLADE_HOOKUP_OBJECT (ui_window, media_type_combo, "media_type_combo");
  GLADE_HOOKUP_OBJECT (ui_window, media_supply_combo, "media_supply_combo");
  GLADE_HOOKUP_OBJECT (ui_window, supply_label2, "supply_label2");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator2, "hseparator2");
  GLADE_HOOKUP_OBJECT (ui_window, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (ui_window, table42, "table42");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator20, "hseparator20");
  GLADE_HOOKUP_OBJECT (ui_window, vbox64, "vbox64");
  GLADE_HOOKUP_OBJECT (ui_window, quality_dialog_button, "quality_dialog_button");
  GLADE_HOOKUP_OBJECT (ui_window, vbox65, "vbox65");
  GLADE_HOOKUP_OBJECT (ui_window, color_dialog_button, "color_dialog_button");
  GLADE_HOOKUP_OBJECT (ui_window, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (ui_window, label7, "label7");
  GLADE_HOOKUP_OBJECT (ui_window, vbox6, "vbox6");
  GLADE_HOOKUP_OBJECT (ui_window, label8, "label8");
  GLADE_HOOKUP_OBJECT (ui_window, vbox7, "vbox7");
  GLADE_HOOKUP_OBJECT (ui_window, table56, "table56");
  GLADE_HOOKUP_OBJECT (ui_window, quality_high_button, "quality_high_button");
  GLADE_HOOKUP_OBJECT (ui_window, quality_standard_button, "quality_standard_button");
  GLADE_HOOKUP_OBJECT (ui_window, quality_draft_button, "quality_draft_button");
  GLADE_HOOKUP_OBJECT (ui_window, quality_custom_button, "quality_custom_button");
  GLADE_HOOKUP_OBJECT (ui_window, vbox9, "vbox9");
  GLADE_HOOKUP_OBJECT (ui_window, table57, "table57");
  GLADE_HOOKUP_OBJECT (ui_window, color_auto_button, "color_auto_button");
  GLADE_HOOKUP_OBJECT (ui_window, color_manual_button, "color_manual_button");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator14, "hseparator14");
  GLADE_HOOKUP_OBJECT (ui_window, one_cartridge_vbox, "one_cartridge_vbox");
  GLADE_HOOKUP_OBJECT (ui_window, print_bw_button2, "print_bw_button2");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator16, "hseparator16");
  GLADE_HOOKUP_OBJECT (ui_window, lever_pos_vbox, "lever_pos_vbox");
  GLADE_HOOKUP_OBJECT (ui_window, lever_pos_hbox, "lever_pos_hbox");
  GLADE_HOOKUP_OBJECT (ui_window, lever_label, "lever_label");
  GLADE_HOOKUP_OBJECT (ui_window, thick_msg_label, "thick_msg_label");
  GLADE_HOOKUP_OBJECT (ui_window, paper_gap_hbox, "paper_gap_hbox");
  GLADE_HOOKUP_OBJECT (ui_window, label118, "label118");
  GLADE_HOOKUP_OBJECT (ui_window, paper_gap_combo, "paper_gap_combo");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator1, "hseparator1");
  GLADE_HOOKUP_OBJECT (ui_window, hbox32, "hbox32");
  GLADE_HOOKUP_OBJECT (ui_window, table58, "table58");
  GLADE_HOOKUP_OBJECT (ui_window, default_button, "default_button");
  GLADE_HOOKUP_OBJECT (ui_window, label96, "label96");
  GLADE_HOOKUP_OBJECT (ui_window, version_button, "version_button");
  GLADE_HOOKUP_OBJECT (ui_window, label95, "label95");
  GLADE_HOOKUP_OBJECT (ui_window, basic_sheet, "basic_sheet");
  GLADE_HOOKUP_OBJECT (ui_window, vbox72, "vbox72");
  GLADE_HOOKUP_OBJECT (ui_window, vbox73, "vbox73");
  GLADE_HOOKUP_OBJECT (ui_window, table47, "table47");
  GLADE_HOOKUP_OBJECT (ui_window, label9, "label9");
  GLADE_HOOKUP_OBJECT (ui_window, media_size_combo, "media_size_combo");
  GLADE_HOOKUP_OBJECT (ui_window, label84, "label84");
  GLADE_HOOKUP_OBJECT (ui_window, printing_type_combo, "printing_type_combo");
  GLADE_HOOKUP_OBJECT (ui_window, hbox_user, "hbox_user");
  GLADE_HOOKUP_OBJECT (ui_window, label187, "label187");
  GLADE_HOOKUP_OBJECT (ui_window, usersize_button, "usersize_button");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator81, "hseparator81");
  GLADE_HOOKUP_OBJECT (ui_window, scaling_hbox, "scaling_hbox");
  GLADE_HOOKUP_OBJECT (ui_window, label85, "label85");
  GLADE_HOOKUP_OBJECT (ui_window, printing_scaling_spin, "printing_scaling_spin");
  GLADE_HOOKUP_OBJECT (ui_window, label86, "label86");
  GLADE_HOOKUP_OBJECT (ui_window, vbox79, "vbox79");
  GLADE_HOOKUP_OBJECT (ui_window, centering_button, "centering_button");
  GLADE_HOOKUP_OBJECT (ui_window, borderless_vbox, "borderless_vbox");
  GLADE_HOOKUP_OBJECT (ui_window, borderless_button, "borderless_button");
  GLADE_HOOKUP_OBJECT (ui_window, borderless_hbox, "borderless_hbox");
  GLADE_HOOKUP_OBJECT (ui_window, label87, "label87");
  GLADE_HOOKUP_OBJECT (ui_window, table48, "table48");
  GLADE_HOOKUP_OBJECT (ui_window, border_ext_0_button, "border_ext_0_button");
  GLADE_HOOKUP_OBJECT (ui_window, border_ext_1_button, "border_ext_1_button");
  GLADE_HOOKUP_OBJECT (ui_window, border_ext_2_button, "border_ext_2_button");
  GLADE_HOOKUP_OBJECT (ui_window, border_ext_3_button, "border_ext_3_button");
  GLADE_HOOKUP_OBJECT (ui_window, label88, "label88");
  GLADE_HOOKUP_OBJECT (ui_window, label89, "label89");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator31, "hseparator31");
  GLADE_HOOKUP_OBJECT (ui_window, duplex_printing_vbox, "duplex_printing_vbox");
  GLADE_HOOKUP_OBJECT (ui_window, duplex_vbox, "duplex_vbox");
  GLADE_HOOKUP_OBJECT (ui_window, auto_duplex_button, "auto_duplex_button");
  GLADE_HOOKUP_OBJECT (ui_window, duplex_hbox, "duplex_hbox");
  GLADE_HOOKUP_OBJECT (ui_window, vbox168, "vbox168");
  GLADE_HOOKUP_OBJECT (ui_window, label128, "label128");
  GLADE_HOOKUP_OBJECT (ui_window, vbox169, "vbox169");
  GLADE_HOOKUP_OBJECT (ui_window, longside_button, "longside_button");
  GLADE_HOOKUP_OBJECT (ui_window, shortside_button, "shortside_button");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator43, "hseparator43");
  GLADE_HOOKUP_OBJECT (ui_window, hbox30, "hbox30");
  GLADE_HOOKUP_OBJECT (ui_window, vbox75, "vbox75");
  GLADE_HOOKUP_OBJECT (ui_window, label90, "label90");
  GLADE_HOOKUP_OBJECT (ui_window, vbox76, "vbox76");
  GLADE_HOOKUP_OBJECT (ui_window, hbox31, "hbox31");
  GLADE_HOOKUP_OBJECT (ui_window, copies_spin, "copies_spin");
  GLADE_HOOKUP_OBJECT (ui_window, label91, "label91");
  GLADE_HOOKUP_OBJECT (ui_window, reverse_order_button, "reverse_order_button");
  GLADE_HOOKUP_OBJECT (ui_window, collate_button, "collate_button");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator30, "hseparator30");
  GLADE_HOOKUP_OBJECT (ui_window, hbox33, "hbox33");
  GLADE_HOOKUP_OBJECT (ui_window, page_setup_default_button, "page_setup_default_button");
  GLADE_HOOKUP_OBJECT (ui_window, label97, "label97");
  GLADE_HOOKUP_OBJECT (ui_window, page_setup_sheet, "page_setup_sheet");
  GLADE_HOOKUP_OBJECT (ui_window, table43, "table43");
  GLADE_HOOKUP_OBJECT (ui_window, monitor_hseparator, "monitor_hseparator");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator22, "hseparator22");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator21, "hseparator21");
  GLADE_HOOKUP_OBJECT (ui_window, vbox47, "vbox47");
  GLADE_HOOKUP_OBJECT (ui_window, util_clean_button, "util_clean_button");
  GLADE_HOOKUP_OBJECT (ui_window, label52, "label52");
  GLADE_HOOKUP_OBJECT (ui_window, util_refresh_button, "util_refresh_button");
  GLADE_HOOKUP_OBJECT (ui_window, label53, "label53");
  GLADE_HOOKUP_OBJECT (ui_window, util_roller_clean_button, "util_roller_clean_button");
  GLADE_HOOKUP_OBJECT (ui_window, label54, "label54");
  GLADE_HOOKUP_OBJECT (ui_window, util_plate_clean_button, "util_plate_clean_button");
  GLADE_HOOKUP_OBJECT (ui_window, label125, "label125");
  GLADE_HOOKUP_OBJECT (ui_window, vbox48, "vbox48");
  GLADE_HOOKUP_OBJECT (ui_window, util_nozzle_check_button, "util_nozzle_check_button");
  GLADE_HOOKUP_OBJECT (ui_window, label55, "label55");
  GLADE_HOOKUP_OBJECT (ui_window, util_head_adjust_button, "util_head_adjust_button");
  GLADE_HOOKUP_OBJECT (ui_window, label56, "label56");
  GLADE_HOOKUP_OBJECT (ui_window, util_ink_reset_button, "util_ink_reset_button");
  GLADE_HOOKUP_OBJECT (ui_window, label93, "label93");
  GLADE_HOOKUP_OBJECT (ui_window, util_ink_warning_button, "util_ink_warning_button");
  GLADE_HOOKUP_OBJECT (ui_window, label94, "label94");
  GLADE_HOOKUP_OBJECT (ui_window, util_ink_cartridge_button, "util_ink_cartridge_button");
  GLADE_HOOKUP_OBJECT (ui_window, label127, "label127");
  GLADE_HOOKUP_OBJECT (ui_window, util_paper_source_setting_button, "util_paper_source_setting_button");
  GLADE_HOOKUP_OBJECT (ui_window, label190, "label190");
  GLADE_HOOKUP_OBJECT (ui_window, vbox49, "vbox49");
  GLADE_HOOKUP_OBJECT (ui_window, util_power_off_button, "util_power_off_button");
  GLADE_HOOKUP_OBJECT (ui_window, label57, "label57");
  GLADE_HOOKUP_OBJECT (ui_window, util_auto_power_button, "util_auto_power_button");
  GLADE_HOOKUP_OBJECT (ui_window, label82, "label82");
  GLADE_HOOKUP_OBJECT (ui_window, util_config_button, "util_config_button");
  GLADE_HOOKUP_OBJECT (ui_window, label58, "label58");
  GLADE_HOOKUP_OBJECT (ui_window, util_quiet_button, "util_quiet_button");
  GLADE_HOOKUP_OBJECT (ui_window, label92, "label92");
  GLADE_HOOKUP_OBJECT (ui_window, vbox50, "vbox50");
  GLADE_HOOKUP_OBJECT (ui_window, monitor_button, "monitor_button");
  GLADE_HOOKUP_OBJECT (ui_window, label59, "label59");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator24, "hseparator24");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator25, "hseparator25");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator26, "hseparator26");
  GLADE_HOOKUP_OBJECT (ui_window, hseparator27, "hseparator27");
  GLADE_HOOKUP_OBJECT (ui_window, utility_sheet, "utility_sheet");
  GLADE_HOOKUP_OBJECT (ui_window, hbuttonbox1, "hbuttonbox1");
  GLADE_HOOKUP_OBJECT (ui_window, ok_button, "ok_button");
  GLADE_HOOKUP_OBJECT (ui_window, cancel_button, "cancel_button");

  gtk_widget_grab_focus (ok_button);
  gtk_widget_grab_default (ok_button);
  return ui_window;
}

GtkWidget*
create_user_size_dialog (void)
{
  GtkWidget *user_size_dialog;
  GtkWidget *dialog_vbox2;
  GtkWidget *table32;
  GtkWidget *vbox43;
  GtkWidget *label48;
  GtkWidget *vbox45;
  GtkWidget *label47;
  GtkWidget *table34;
  GSList *user_size_scale_buttons_group = NULL;
  GtkWidget *user_size_scale_mm_button;
  GtkWidget *user_size_scale_inch_button;
  GtkWidget *table33;
  GtkWidget *label49;
  GtkWidget *label50;
  GtkWidget *user_size_width_label;
  GtkWidget *user_size_height_label;
  GtkObject *user_size_width_spin_adj;
  GtkWidget *user_size_width_spin;
  GtkObject *user_size_height_spin_adj;
  GtkWidget *user_size_height_spin;
  GtkWidget *dialog_action_area2;
  GtkWidget *hbuttonbox7;
  GtkWidget *user_size_ok_button;
  GtkWidget *user_size_cancel_button;

  user_size_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (user_size_dialog), _("Custom Paper Size"));
  gtk_window_set_modal (GTK_WINDOW (user_size_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (user_size_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (user_size_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox2 = GTK_DIALOG (user_size_dialog)->vbox;
  gtk_widget_show (dialog_vbox2);

  table32 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table32);
  gtk_box_pack_start (GTK_BOX (dialog_vbox2), table32, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table32), 12);
  gtk_table_set_row_spacings (GTK_TABLE (table32), 6);
  gtk_table_set_col_spacings (GTK_TABLE (table32), 16);

  vbox43 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox43);
  gtk_table_attach (GTK_TABLE (table32), vbox43, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  label48 = gtk_label_new (_("Units:"));
  gtk_widget_show (label48);
  gtk_box_pack_start (GTK_BOX (vbox43), label48, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label48), 7.45058e-09, 7.45058e-09);

  vbox45 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox45);
  gtk_table_attach (GTK_TABLE (table32), vbox45, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  label47 = gtk_label_new (_("Paper Size"));
  gtk_widget_show (label47);
  gtk_box_pack_start (GTK_BOX (vbox45), label47, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label47), 7.45058e-09, 7.45058e-09);

  table34 = gtk_table_new (2, 1, FALSE);
  gtk_widget_show (table34);
  gtk_table_attach (GTK_TABLE (table32), table34, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  user_size_scale_mm_button = gtk_radio_button_new_with_mnemonic (user_size_scale_buttons_group, _("mm"));
  gtk_widget_show (user_size_scale_mm_button);
  gtk_table_attach (GTK_TABLE (table34), user_size_scale_mm_button, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (user_size_scale_mm_button), user_size_scale_buttons_group);
  user_size_scale_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (user_size_scale_mm_button));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (user_size_scale_mm_button), TRUE);

  user_size_scale_inch_button = gtk_radio_button_new_with_mnemonic (user_size_scale_buttons_group, _("inches"));
  gtk_widget_show (user_size_scale_inch_button);
  gtk_table_attach (GTK_TABLE (table34), user_size_scale_inch_button, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (user_size_scale_inch_button), user_size_scale_buttons_group);
  user_size_scale_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (user_size_scale_inch_button));

  table33 = gtk_table_new (2, 3, FALSE);
  gtk_widget_show (table33);
  gtk_table_attach (GTK_TABLE (table32), table33, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_table_set_row_spacings (GTK_TABLE (table33), 6);
  gtk_table_set_col_spacings (GTK_TABLE (table33), 8);

  label49 = gtk_label_new (_("Width:    "));
  gtk_widget_show (label49);
  gtk_table_attach (GTK_TABLE (table33), label49, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label49), 7.45058e-09, 7.45058e-09);

  label50 = gtk_label_new (_("Height:     "));
  gtk_widget_show (label50);
  gtk_table_attach (GTK_TABLE (table33), label50, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label50), 7.45058e-09, 7.45058e-09);

  user_size_width_label = gtk_label_new (_("*"));
  gtk_widget_show (user_size_width_label);
  gtk_table_attach (GTK_TABLE (table33), user_size_width_label, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (user_size_width_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (user_size_width_label), 7.45058e-09, 7.45058e-09);

  user_size_height_label = gtk_label_new (_("*"));
  gtk_widget_show (user_size_height_label);
  gtk_table_attach (GTK_TABLE (table33), user_size_height_label, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (user_size_height_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (user_size_height_label), 7.45058e-09, 7.45058e-09);

  user_size_width_spin_adj = gtk_adjustment_new (0, 0, 100, 1, 10, 0);
  user_size_width_spin = gtk_spin_button_new (GTK_ADJUSTMENT (user_size_width_spin_adj), 1, 2);
  gtk_widget_show (user_size_width_spin);
  gtk_table_attach (GTK_TABLE (table33), user_size_width_spin, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (user_size_width_spin, 100, -2);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (user_size_width_spin), TRUE);

  user_size_height_spin_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 0);
  user_size_height_spin = gtk_spin_button_new (GTK_ADJUSTMENT (user_size_height_spin_adj), 1, 2);
  gtk_widget_show (user_size_height_spin);
  gtk_table_attach (GTK_TABLE (table33), user_size_height_spin, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (user_size_height_spin, 100, -2);
  gtk_spin_button_set_numeric (GTK_SPIN_BUTTON (user_size_height_spin), TRUE);

  dialog_action_area2 = GTK_DIALOG (user_size_dialog)->action_area;
  gtk_widget_show (dialog_action_area2);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area2), 5);

  hbuttonbox7 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox7);
  gtk_box_pack_start (GTK_BOX (dialog_action_area2), hbuttonbox7, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox7), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox7), 0);

  user_size_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (user_size_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox7), user_size_ok_button);
  GTK_WIDGET_SET_FLAGS (user_size_ok_button, GTK_CAN_DEFAULT);

  user_size_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (user_size_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox7), user_size_cancel_button);
  GTK_WIDGET_SET_FLAGS (user_size_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) user_size_dialog, "delete_event",
                    G_CALLBACK (on_user_size_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) user_size_scale_mm_button, "clicked",
                    G_CALLBACK (on_user_size_scale_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) user_size_scale_inch_button, "clicked",
                    G_CALLBACK (on_user_size_scale_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) user_size_ok_button, "clicked",
                    G_CALLBACK (on_user_size_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) user_size_cancel_button, "clicked",
                    G_CALLBACK (on_user_size_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (user_size_dialog, user_size_dialog, "user_size_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (user_size_dialog, dialog_vbox2, "dialog_vbox2");
  GLADE_HOOKUP_OBJECT (user_size_dialog, table32, "table32");
  GLADE_HOOKUP_OBJECT (user_size_dialog, vbox43, "vbox43");
  GLADE_HOOKUP_OBJECT (user_size_dialog, label48, "label48");
  GLADE_HOOKUP_OBJECT (user_size_dialog, vbox45, "vbox45");
  GLADE_HOOKUP_OBJECT (user_size_dialog, label47, "label47");
  GLADE_HOOKUP_OBJECT (user_size_dialog, table34, "table34");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_scale_mm_button, "user_size_scale_mm_button");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_scale_inch_button, "user_size_scale_inch_button");
  GLADE_HOOKUP_OBJECT (user_size_dialog, table33, "table33");
  GLADE_HOOKUP_OBJECT (user_size_dialog, label49, "label49");
  GLADE_HOOKUP_OBJECT (user_size_dialog, label50, "label50");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_width_label, "user_size_width_label");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_height_label, "user_size_height_label");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_width_spin, "user_size_width_spin");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_height_spin, "user_size_height_spin");
  GLADE_HOOKUP_OBJECT_NO_REF (user_size_dialog, dialog_action_area2, "dialog_action_area2");
  GLADE_HOOKUP_OBJECT (user_size_dialog, hbuttonbox7, "hbuttonbox7");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_ok_button, "user_size_ok_button");
  GLADE_HOOKUP_OBJECT (user_size_dialog, user_size_cancel_button, "user_size_cancel_button");

  gtk_widget_grab_focus (user_size_ok_button);
  gtk_widget_grab_default (user_size_ok_button);
  return user_size_dialog;
}

GtkWidget*
create_quality_dialog (void)
{
  GtkWidget *quality_dialog;
  GtkWidget *dialog_vbox3;
  GtkWidget *vbox22;
  GtkWidget *hbox9;
  GtkWidget *label13;
  GtkWidget *quality_level_name_label;
  GtkWidget *table23;
  GSList *quality_i_buttons_group = NULL;
  GtkWidget *quality_5_button;
  GtkWidget *quality_4_button;
  GtkWidget *quality_3_button;
  GtkWidget *quality_2_button;
  GtkWidget *quality_1_button;
  GtkWidget *label17;
  GtkWidget *label18;
  GtkWidget *hbox8;
  GtkWidget *label12;
  GtkWidget *vbox51;
  GSList *halftone_buttons_group = NULL;
  GtkWidget *ht_dither_button;
  GtkWidget *ht_ed_button;
  GtkWidget *dialog_action_area3;
  GtkWidget *hbuttonbox5;
  GtkWidget *quality_dialog_ok_button;
  GtkWidget *quality_dialog_cancel_button;

  quality_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (quality_dialog), _("Custom"));
  gtk_window_set_modal (GTK_WINDOW (quality_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (quality_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (quality_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox3 = GTK_DIALOG (quality_dialog)->vbox;
  gtk_widget_show (dialog_vbox3);

  vbox22 = gtk_vbox_new (FALSE, 16);
  gtk_widget_show (vbox22);
  gtk_box_pack_start (GTK_BOX (dialog_vbox3), vbox22, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox22), 12);

  hbox9 = gtk_hbox_new (FALSE, 16);
  gtk_widget_show (hbox9);
  gtk_box_pack_start (GTK_BOX (vbox22), hbox9, TRUE, TRUE, 0);

  label13 = gtk_label_new (_("Quality:"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox9), label13, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (label13), 7.45058e-09, 0.5);

  quality_level_name_label = gtk_label_new (_("Standard"));
  gtk_widget_show (quality_level_name_label);
  gtk_box_pack_start (GTK_BOX (hbox9), quality_level_name_label, FALSE, FALSE, 0);
  gtk_widget_set_size_request (quality_level_name_label, 170, -2);

  table23 = gtk_table_new (2, 5, TRUE);
  gtk_widget_show (table23);
  gtk_box_pack_start (GTK_BOX (hbox9), table23, TRUE, TRUE, 0);

  quality_5_button = gtk_radio_button_new_with_mnemonic (quality_i_buttons_group, _("5"));
  gtk_widget_show (quality_5_button);
  gtk_table_attach (GTK_TABLE (table23), quality_5_button, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_5_button), quality_i_buttons_group);
  quality_i_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_5_button));

  quality_4_button = gtk_radio_button_new_with_mnemonic (quality_i_buttons_group, _("4"));
  gtk_widget_show (quality_4_button);
  gtk_table_attach (GTK_TABLE (table23), quality_4_button, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_4_button), quality_i_buttons_group);
  quality_i_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_4_button));

  quality_3_button = gtk_radio_button_new_with_mnemonic (quality_i_buttons_group, _("3"));
  gtk_widget_show (quality_3_button);
  gtk_table_attach (GTK_TABLE (table23), quality_3_button, 2, 3, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_3_button), quality_i_buttons_group);
  quality_i_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_3_button));

  quality_2_button = gtk_radio_button_new_with_mnemonic (quality_i_buttons_group, _("2"));
  gtk_widget_show (quality_2_button);
  gtk_table_attach (GTK_TABLE (table23), quality_2_button, 3, 4, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_2_button), quality_i_buttons_group);
  quality_i_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_2_button));

  quality_1_button = gtk_radio_button_new_with_mnemonic (quality_i_buttons_group, _("1"));
  gtk_widget_show (quality_1_button);
  gtk_table_attach (GTK_TABLE (table23), quality_1_button, 4, 5, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (quality_1_button), quality_i_buttons_group);
  quality_i_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (quality_1_button));

  label17 = gtk_label_new (_("Fast"));
  gtk_widget_show (label17);
  gtk_table_attach (GTK_TABLE (table23), label17, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  label18 = gtk_label_new (_("Fine"));
  gtk_widget_show (label18);
  gtk_table_attach (GTK_TABLE (table23), label18, 4, 5, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  hbox8 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox8);
  gtk_box_pack_start (GTK_BOX (vbox22), hbox8, TRUE, TRUE, 0);

  label12 = gtk_label_new (_("Halftoning:"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox8), label12, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (label12), 0, 0);

  vbox51 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox51);
  gtk_box_pack_start (GTK_BOX (hbox8), vbox51, TRUE, TRUE, 0);

  ht_dither_button = gtk_radio_button_new_with_mnemonic (halftone_buttons_group, _("Dither"));
  gtk_widget_show (ht_dither_button);
  gtk_box_pack_start (GTK_BOX (vbox51), ht_dither_button, FALSE, FALSE, 0);

  ht_ed_button = gtk_radio_button_new_with_mnemonic (halftone_buttons_group, _("Diffusion"));
  gtk_widget_show (ht_ed_button);
  gtk_box_pack_start (GTK_BOX (vbox51), ht_ed_button, FALSE, FALSE, 0);

  dialog_action_area3 = GTK_DIALOG (quality_dialog)->action_area;
  gtk_widget_show (dialog_action_area3);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area3), 5);

  hbuttonbox5 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox5);
  gtk_box_pack_start (GTK_BOX (dialog_action_area3), hbuttonbox5, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox5), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox5), 0);

  quality_dialog_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (quality_dialog_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox5), quality_dialog_ok_button);
  GTK_WIDGET_SET_FLAGS (quality_dialog_ok_button, GTK_CAN_DEFAULT);

  quality_dialog_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (quality_dialog_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox5), quality_dialog_cancel_button);
  GTK_WIDGET_SET_FLAGS (quality_dialog_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) quality_dialog, "delete_event",
                    G_CALLBACK (on_quality_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) quality_5_button, "toggled",
                    G_CALLBACK (on_quality_dialog_quality_i_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) quality_4_button, "toggled",
                    G_CALLBACK (on_quality_dialog_quality_i_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) quality_3_button, "toggled",
                    G_CALLBACK (on_quality_dialog_quality_i_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) quality_2_button, "toggled",
                    G_CALLBACK (on_quality_dialog_quality_i_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) quality_1_button, "toggled",
                    G_CALLBACK (on_quality_dialog_quality_i_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) ht_dither_button, "toggled",
                    G_CALLBACK (on_quality_dialog_ht_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) ht_ed_button, "toggled",
                    G_CALLBACK (on_quality_dialog_ht_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) quality_dialog_ok_button, "clicked",
                    G_CALLBACK (on_quality_dialog_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) quality_dialog_cancel_button, "clicked",
                    G_CALLBACK (on_quality_dialog_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (quality_dialog, quality_dialog, "quality_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (quality_dialog, dialog_vbox3, "dialog_vbox3");
  GLADE_HOOKUP_OBJECT (quality_dialog, vbox22, "vbox22");
  GLADE_HOOKUP_OBJECT (quality_dialog, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (quality_dialog, label13, "label13");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_level_name_label, "quality_level_name_label");
  GLADE_HOOKUP_OBJECT (quality_dialog, table23, "table23");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_5_button, "quality_5_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_4_button, "quality_4_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_3_button, "quality_3_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_2_button, "quality_2_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_1_button, "quality_1_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, label17, "label17");
  GLADE_HOOKUP_OBJECT (quality_dialog, label18, "label18");
  GLADE_HOOKUP_OBJECT (quality_dialog, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (quality_dialog, label12, "label12");
  GLADE_HOOKUP_OBJECT (quality_dialog, vbox51, "vbox51");
  GLADE_HOOKUP_OBJECT (quality_dialog, ht_dither_button, "ht_dither_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, ht_ed_button, "ht_ed_button");
  GLADE_HOOKUP_OBJECT_NO_REF (quality_dialog, dialog_action_area3, "dialog_action_area3");
  GLADE_HOOKUP_OBJECT (quality_dialog, hbuttonbox5, "hbuttonbox5");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_dialog_ok_button, "quality_dialog_ok_button");
  GLADE_HOOKUP_OBJECT (quality_dialog, quality_dialog_cancel_button, "quality_dialog_cancel_button");

  gtk_widget_grab_focus (quality_dialog_ok_button);
  gtk_widget_grab_default (quality_dialog_ok_button);
  return quality_dialog;
}

GtkWidget*
create_color_dialog (void)
{
  GtkWidget *color_dialog;
  GtkWidget *dialog_vbox4;
  GtkWidget *hbox12;
  GtkWidget *vbox39;
  GtkWidget *vbox40;
  GtkWidget *color_dialog_balance_label;
  GtkWidget *table31;
  GtkWidget *color_dialog_yellow_label;
  GtkWidget *color_dialog_black_label;
  GtkWidget *color_dialog_cyan_value;
  GtkWidget *color_dialog_magenta_value;
  GtkWidget *color_dialog_yellow_value;
  GtkWidget *color_dialog_black_value;
  GtkWidget *vbox53;
  GtkWidget *color_dialog_cyan_pixmap;
  GtkWidget *color_dialog_cyan_scale;
  GtkWidget *vbox54;
  GtkWidget *color_dialog_magenta_pixmap;
  GtkWidget *color_dialog_magenta_scale;
  GtkWidget *vbox55;
  GtkWidget *color_dialog_yellow_pixmap;
  GtkWidget *color_dialog_yellow_scale;
  GtkWidget *vbox56;
  GtkWidget *color_dialog_black_pixmap;
  GtkWidget *color_dialog_black_scale;
  GtkWidget *color_dialog_cyan_label;
  GtkWidget *color_dialog_magenta_label;
  GtkWidget *hseparator13;
  GtkWidget *table35;
  GtkWidget *color_dialog_density_label;
  GtkWidget *color_dialog_density_value;
  GtkWidget *vbox57;
  GtkWidget *color_dialog_density_pixmap;
  GtkWidget *color_dialog_density_scale;
  GtkWidget *hseparator17;
  GtkWidget *color_dialog_vivid_button;
  GtkWidget *table30;
  GtkWidget *color_dialog_correct_combo;
  GtkWidget *color_dialog_gamma_combo;
  GtkWidget *color_dialog_correct_label;
  GtkWidget *color_dialog_gamma_label;
  GtkWidget *dialog_action_area4;
  GtkWidget *hbuttonbox6;
  GtkWidget *color_dialog_ok_button;
  GtkWidget *color_dialog_cancel_button;
  GtkWidget *color_dialog_default_button;

  color_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (color_dialog), _("Manual Color Adjustment"));
  gtk_window_set_modal (GTK_WINDOW (color_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (color_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (color_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox4 = GTK_DIALOG (color_dialog)->vbox;
  gtk_widget_show (dialog_vbox4);

  hbox12 = gtk_hbox_new (FALSE, 10);
  gtk_widget_show (hbox12);
  gtk_box_pack_start (GTK_BOX (dialog_vbox4), hbox12, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox12), 12);

  vbox39 = gtk_vbox_new (FALSE, 8);
  gtk_widget_show (vbox39);
  gtk_box_pack_start (GTK_BOX (hbox12), vbox39, TRUE, TRUE, 0);

  vbox40 = gtk_vbox_new (FALSE, 4);
  gtk_widget_show (vbox40);
  gtk_box_pack_start (GTK_BOX (vbox39), vbox40, TRUE, TRUE, 0);

  color_dialog_balance_label = gtk_label_new (_("Color Balance"));
  gtk_widget_show (color_dialog_balance_label);
  gtk_box_pack_start (GTK_BOX (vbox40), color_dialog_balance_label, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_balance_label), 7.45058e-09, 0.5);

  table31 = gtk_table_new (4, 3, FALSE);
  gtk_widget_show (table31);
  gtk_box_pack_start (GTK_BOX (vbox40), table31, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table31), 4);
  gtk_table_set_row_spacings (GTK_TABLE (table31), 8);
  gtk_table_set_col_spacings (GTK_TABLE (table31), 8);

  color_dialog_yellow_label = gtk_label_new (_("  Yellow:"));
  gtk_widget_show (color_dialog_yellow_label);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_yellow_label, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_yellow_label), 7.45058e-09, 0.5);

  color_dialog_black_label = gtk_label_new (_("  Black:"));
  gtk_widget_show (color_dialog_black_label);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_black_label, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_black_label), 7.45058e-09, 0.5);

  color_dialog_cyan_value = gtk_label_new (_("0"));
  gtk_widget_show (color_dialog_cyan_value);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_cyan_value, 1, 2, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (color_dialog_cyan_value, 40, -2);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_cyan_value), 1, 0.5);

  color_dialog_magenta_value = gtk_label_new (_("0"));
  gtk_widget_show (color_dialog_magenta_value);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_magenta_value, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (color_dialog_magenta_value, 40, -2);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_magenta_value), 1, 0.5);

  color_dialog_yellow_value = gtk_label_new (_("0"));
  gtk_widget_show (color_dialog_yellow_value);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_yellow_value, 1, 2, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (color_dialog_yellow_value, 40, -2);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_yellow_value), 1, 0.5);

  color_dialog_black_value = gtk_label_new (_("0"));
  gtk_widget_show (color_dialog_black_value);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_black_value, 1, 2, 3, 4,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (color_dialog_black_value, 40, -2);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_black_value), 1, 0.5);

  vbox53 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox53);
  gtk_table_attach (GTK_TABLE (table31), vbox53, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  color_dialog_cyan_pixmap = create_pixmap (color_dialog, "cyan_bar.xpm");
  gtk_widget_show (color_dialog_cyan_pixmap);
  gtk_box_pack_start (GTK_BOX (vbox53), color_dialog_cyan_pixmap, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_cyan_pixmap), 0.5, 1);

  color_dialog_cyan_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, -50, 50, 1, 10, 0)));
  gtk_widget_show (color_dialog_cyan_scale);
  gtk_box_pack_start (GTK_BOX (vbox53), color_dialog_cyan_scale, FALSE, FALSE, 0);
  gtk_widget_set_size_request (color_dialog_cyan_scale, 202, -2);
  gtk_scale_set_draw_value (GTK_SCALE (color_dialog_cyan_scale), FALSE);

  vbox54 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox54);
  gtk_table_attach (GTK_TABLE (table31), vbox54, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  color_dialog_magenta_pixmap = create_pixmap (color_dialog, "magenta_bar.xpm");
  gtk_widget_show (color_dialog_magenta_pixmap);
  gtk_box_pack_start (GTK_BOX (vbox54), color_dialog_magenta_pixmap, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_magenta_pixmap), 0.5, 1);

  color_dialog_magenta_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, -50, 50, 1, 10, 0)));
  gtk_widget_show (color_dialog_magenta_scale);
  gtk_box_pack_start (GTK_BOX (vbox54), color_dialog_magenta_scale, TRUE, FALSE, 0);
  gtk_widget_set_size_request (color_dialog_magenta_scale, 202, -2);
  gtk_scale_set_draw_value (GTK_SCALE (color_dialog_magenta_scale), FALSE);

  vbox55 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox55);
  gtk_table_attach (GTK_TABLE (table31), vbox55, 2, 3, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  color_dialog_yellow_pixmap = create_pixmap (color_dialog, "yellow_bar.xpm");
  gtk_widget_show (color_dialog_yellow_pixmap);
  gtk_box_pack_start (GTK_BOX (vbox55), color_dialog_yellow_pixmap, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_yellow_pixmap), 0.5, 1);

  color_dialog_yellow_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, -50, 50, 1, 10, 0)));
  gtk_widget_show (color_dialog_yellow_scale);
  gtk_box_pack_start (GTK_BOX (vbox55), color_dialog_yellow_scale, FALSE, FALSE, 0);
  gtk_widget_set_size_request (color_dialog_yellow_scale, 202, -2);
  gtk_scale_set_draw_value (GTK_SCALE (color_dialog_yellow_scale), FALSE);

  vbox56 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox56);
  gtk_table_attach (GTK_TABLE (table31), vbox56, 2, 3, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  color_dialog_black_pixmap = create_pixmap (color_dialog, "black_bar.xpm");
  gtk_widget_show (color_dialog_black_pixmap);
  gtk_box_pack_start (GTK_BOX (vbox56), color_dialog_black_pixmap, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_black_pixmap), 0.5, 1);

  color_dialog_black_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, -50, 50, 1, 10, 0)));
  gtk_widget_show (color_dialog_black_scale);
  gtk_box_pack_start (GTK_BOX (vbox56), color_dialog_black_scale, FALSE, FALSE, 0);
  gtk_widget_set_size_request (color_dialog_black_scale, 202, -2);
  gtk_scale_set_draw_value (GTK_SCALE (color_dialog_black_scale), FALSE);

  color_dialog_cyan_label = gtk_label_new (_("  Cyan:"));
  gtk_widget_show (color_dialog_cyan_label);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_cyan_label, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (color_dialog_cyan_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_cyan_label), 0, 0.5);

  color_dialog_magenta_label = gtk_label_new (_("  Magenta:"));
  gtk_widget_show (color_dialog_magenta_label);
  gtk_table_attach (GTK_TABLE (table31), color_dialog_magenta_label, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (color_dialog_magenta_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_magenta_label), 0, 0.5);


  hseparator13 = gtk_hseparator_new ();
  gtk_widget_show (hseparator13);
  gtk_box_pack_start (GTK_BOX (vbox39), hseparator13, TRUE, TRUE, 0);

  table35 = gtk_table_new (1, 3, FALSE);
  gtk_widget_show (table35);
  gtk_box_pack_start (GTK_BOX (vbox39), table35, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table35), 4);
  gtk_table_set_row_spacings (GTK_TABLE (table35), 8);
  gtk_table_set_col_spacings (GTK_TABLE (table35), 8);

  color_dialog_density_label = gtk_label_new (_("Intensity:"));
  gtk_widget_show (color_dialog_density_label);
  gtk_table_attach (GTK_TABLE (table35), color_dialog_density_label, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_density_label), 7.45058e-09, 0.5);

  color_dialog_density_value = gtk_label_new (_("0"));
  gtk_widget_show (color_dialog_density_value);
  gtk_table_attach (GTK_TABLE (table35), color_dialog_density_value, 1, 2, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_size_request (color_dialog_density_value, 40, -2);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_density_value), 1, 0.5);

  vbox57 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox57);
  gtk_table_attach (GTK_TABLE (table35), vbox57, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  color_dialog_density_pixmap = create_pixmap (color_dialog, "black_bar.xpm");
  gtk_widget_show (color_dialog_density_pixmap);
  gtk_box_pack_start (GTK_BOX (vbox57), color_dialog_density_pixmap, TRUE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_density_pixmap), 0.5, 1);

  color_dialog_density_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, -50, 50, 1, 10, 0)));
  gtk_widget_show (color_dialog_density_scale);
  gtk_box_pack_start (GTK_BOX (vbox57), color_dialog_density_scale, FALSE, FALSE, 0);
  gtk_widget_set_size_request (color_dialog_density_scale, 202, -2);
  gtk_scale_set_draw_value (GTK_SCALE (color_dialog_density_scale), FALSE);


  hseparator17 = gtk_hseparator_new ();
  gtk_widget_show (hseparator17);
  gtk_box_pack_start (GTK_BOX (vbox39), hseparator17, TRUE, TRUE, 0);

  color_dialog_vivid_button = gtk_check_button_new_with_mnemonic (_("Vivid Photo"));
  gtk_box_pack_start (GTK_BOX (vbox39), color_dialog_vivid_button, FALSE, FALSE, 0);

  table30 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table30);
  gtk_box_pack_start (GTK_BOX (vbox39), table30, TRUE, TRUE, 0);
  gtk_table_set_row_spacings (GTK_TABLE (table30), 5);

  color_dialog_correct_combo = gtk_combo_box_new_text ();
  gtk_widget_show (color_dialog_correct_combo);
  gtk_table_attach (GTK_TABLE (table30), color_dialog_correct_combo, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  color_dialog_gamma_combo = gtk_combo_box_new_text ();
  gtk_widget_show (color_dialog_gamma_combo);
  gtk_table_attach (GTK_TABLE (table30), color_dialog_gamma_combo, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  color_dialog_correct_label = gtk_label_new (_("Print Type:"));
  gtk_widget_show (color_dialog_correct_label);
  gtk_table_attach (GTK_TABLE (table30), color_dialog_correct_label, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (color_dialog_correct_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_correct_label), 7.45058e-09, 0.5);

  color_dialog_gamma_label = gtk_label_new (_("Brightness:"));
  gtk_widget_show (color_dialog_gamma_label);
  gtk_table_attach (GTK_TABLE (table30), color_dialog_gamma_label, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (color_dialog_gamma_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (color_dialog_gamma_label), 7.45058e-09, 0.5);

  dialog_action_area4 = GTK_DIALOG (color_dialog)->action_area;
  gtk_widget_show (dialog_action_area4);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area4), 5);

  hbuttonbox6 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox6);
  gtk_box_pack_start (GTK_BOX (dialog_action_area4), hbuttonbox6, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox6), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox6), 0);

  color_dialog_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (color_dialog_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox6), color_dialog_ok_button);
  GTK_WIDGET_SET_FLAGS (color_dialog_ok_button, GTK_CAN_DEFAULT);

  color_dialog_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (color_dialog_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox6), color_dialog_cancel_button);
  GTK_WIDGET_SET_FLAGS (color_dialog_cancel_button, GTK_CAN_DEFAULT);

  color_dialog_default_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (color_dialog_default_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox6), color_dialog_default_button);
  GTK_WIDGET_SET_FLAGS (color_dialog_default_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) color_dialog, "delete_event",
                    G_CALLBACK (on_color_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) color_dialog_vivid_button, "clicked",
                    G_CALLBACK (on_color_dialog_vivid_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) color_dialog_gamma_combo, "changed",
                    G_CALLBACK (on_color_dialog_gamma_combo_changed),
                    NULL);
  g_signal_connect ((gpointer) color_dialog_ok_button, "clicked",
                    G_CALLBACK (on_color_dialog_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) color_dialog_cancel_button, "clicked",
                    G_CALLBACK (on_color_dialog_cancel_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) color_dialog_default_button, "clicked",
                    G_CALLBACK (on_color_dialog_default_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (color_dialog, color_dialog, "color_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (color_dialog, dialog_vbox4, "dialog_vbox4");
  GLADE_HOOKUP_OBJECT (color_dialog, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox39, "vbox39");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox40, "vbox40");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_balance_label, "color_dialog_balance_label");
  GLADE_HOOKUP_OBJECT (color_dialog, table31, "table31");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_yellow_label, "color_dialog_yellow_label");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_black_label, "color_dialog_black_label");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_cyan_value, "color_dialog_cyan_value");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_magenta_value, "color_dialog_magenta_value");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_yellow_value, "color_dialog_yellow_value");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_black_value, "color_dialog_black_value");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox53, "vbox53");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_cyan_pixmap, "color_dialog_cyan_pixmap");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_cyan_scale, "color_dialog_cyan_scale");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox54, "vbox54");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_magenta_pixmap, "color_dialog_magenta_pixmap");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_magenta_scale, "color_dialog_magenta_scale");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox55, "vbox55");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_yellow_pixmap, "color_dialog_yellow_pixmap");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_yellow_scale, "color_dialog_yellow_scale");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox56, "vbox56");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_black_pixmap, "color_dialog_black_pixmap");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_black_scale, "color_dialog_black_scale");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_cyan_label, "color_dialog_cyan_label");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_magenta_label, "color_dialog_magenta_label");
  GLADE_HOOKUP_OBJECT (color_dialog, hseparator13, "hseparator13");
  GLADE_HOOKUP_OBJECT (color_dialog, table35, "table35");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_density_label, "color_dialog_density_label");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_density_value, "color_dialog_density_value");
  GLADE_HOOKUP_OBJECT (color_dialog, vbox57, "vbox57");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_density_pixmap, "color_dialog_density_pixmap");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_density_scale, "color_dialog_density_scale");
  GLADE_HOOKUP_OBJECT (color_dialog, hseparator17, "hseparator17");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_vivid_button, "color_dialog_vivid_button");
  GLADE_HOOKUP_OBJECT (color_dialog, table30, "table30");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_correct_combo, "color_dialog_correct_combo");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_gamma_combo, "color_dialog_gamma_combo");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_correct_label, "color_dialog_correct_label");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_gamma_label, "color_dialog_gamma_label");
  GLADE_HOOKUP_OBJECT_NO_REF (color_dialog, dialog_action_area4, "dialog_action_area4");
  GLADE_HOOKUP_OBJECT (color_dialog, hbuttonbox6, "hbuttonbox6");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_ok_button, "color_dialog_ok_button");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_cancel_button, "color_dialog_cancel_button");
  GLADE_HOOKUP_OBJECT (color_dialog, color_dialog_default_button, "color_dialog_default_button");

  gtk_widget_grab_focus (color_dialog_ok_button);
  gtk_widget_grab_default (color_dialog_ok_button);
  return color_dialog;
}

GtkWidget*
create_version_dialog (void)
{
  GtkWidget *version_dialog;
  GtkWidget *dialog_vbox5;
  GtkWidget *vbox46;
  GtkWidget *label11;
  GtkWidget *dialog_action_area5;
  GtkWidget *hbuttonbox4;
  GtkWidget *version_dlg_ok_button;

  version_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (version_dialog), _("About"));
  gtk_window_set_modal (GTK_WINDOW (version_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (version_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (version_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox5 = GTK_DIALOG (version_dialog)->vbox;
  gtk_widget_show (dialog_vbox5);

  vbox46 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox46);
  gtk_box_pack_start (GTK_BOX (dialog_vbox5), vbox46, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox46), 20);

  label11 = gtk_label_new (_("Canon Inkjet Print Filter Ver.2.60 for LinuxnCopyright CANON INC. 2001-2006nAll Rights Reserved. "));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (vbox46), label11, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label11), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label11), TRUE);

  dialog_action_area5 = GTK_DIALOG (version_dialog)->action_area;
  gtk_widget_show (dialog_action_area5);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area5), 5);

  hbuttonbox4 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox4);
  gtk_box_pack_start (GTK_BOX (dialog_action_area5), hbuttonbox4, TRUE, TRUE, 0);

  version_dlg_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (version_dlg_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox4), version_dlg_ok_button);
  GTK_WIDGET_SET_FLAGS (version_dlg_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) version_dialog, "delete_event",
                    G_CALLBACK (on_version_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) version_dlg_ok_button, "clicked",
                    G_CALLBACK (on_version_dlg_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (version_dialog, version_dialog, "version_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (version_dialog, dialog_vbox5, "dialog_vbox5");
  GLADE_HOOKUP_OBJECT (version_dialog, vbox46, "vbox46");
  GLADE_HOOKUP_OBJECT (version_dialog, label11, "label11");
  GLADE_HOOKUP_OBJECT_NO_REF (version_dialog, dialog_action_area5, "dialog_action_area5");
  GLADE_HOOKUP_OBJECT (version_dialog, hbuttonbox4, "hbuttonbox4");
  GLADE_HOOKUP_OBJECT (version_dialog, version_dlg_ok_button, "version_dlg_ok_button");

  gtk_widget_grab_focus (version_dlg_ok_button);
  gtk_widget_grab_default (version_dlg_ok_button);
  return version_dialog;
}

GtkWidget*
create_special_dialog (void)
{
  GtkWidget *special_dialog;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox20;
  GtkWidget *vbox66;
  GtkWidget *page_checkbutton;
  GtkWidget *scan_checkbutton;
  GtkWidget *dialog_action_area1;
  GtkWidget *hbox7;
  GtkWidget *hbuttonbox10;
  GtkWidget *special_send_button;
  GtkWidget *special_cancel_button;
  GtkWidget *special_std_button;

  special_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (special_dialog), _("Custom Settings"));
  gtk_window_set_modal (GTK_WINDOW (special_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (special_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (special_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (special_dialog)->vbox;
  gtk_widget_show (dialog_vbox1);

  vbox20 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox20);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox20, TRUE, TRUE, 0);

  vbox66 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox66);
  gtk_box_pack_start (GTK_BOX (vbox20), vbox66, FALSE, FALSE, 0);

  page_checkbutton = gtk_check_button_new_with_mnemonic (_("Pause Page"));
  gtk_widget_show (page_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox66), page_checkbutton, FALSE, FALSE, 0);

  scan_checkbutton = gtk_check_button_new_with_mnemonic (_("Pause Scan"));
  gtk_widget_show (scan_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox66), scan_checkbutton, FALSE, FALSE, 0);

  dialog_action_area1 = GTK_DIALOG (special_dialog)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area1), 10);

  hbox7 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox7);
  gtk_box_pack_start (GTK_BOX (dialog_action_area1), hbox7, TRUE, TRUE, 0);

  hbuttonbox10 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox10);
  gtk_box_pack_start (GTK_BOX (hbox7), hbuttonbox10, FALSE, FALSE, 0);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox10), 0);

  special_send_button = gtk_button_new_with_mnemonic (_("Send"));
  gtk_widget_show (special_send_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox10), special_send_button);
  GTK_WIDGET_SET_FLAGS (special_send_button, GTK_CAN_DEFAULT);

  special_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (special_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox10), special_cancel_button);
  GTK_WIDGET_SET_FLAGS (special_cancel_button, GTK_CAN_DEFAULT);

  special_std_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (special_std_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox10), special_std_button);
  GTK_WIDGET_SET_FLAGS (special_std_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) special_dialog, "destroy",
                    G_CALLBACK (on_special_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) special_dialog, "delete_event",
                    G_CALLBACK (on_special_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) special_send_button, "clicked",
                    G_CALLBACK (on_special_send_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) special_cancel_button, "clicked",
                    G_CALLBACK (on_special_cancel_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) special_std_button, "clicked",
                    G_CALLBACK (on_special_std_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (special_dialog, special_dialog, "special_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (special_dialog, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (special_dialog, vbox20, "vbox20");
  GLADE_HOOKUP_OBJECT (special_dialog, vbox66, "vbox66");
  GLADE_HOOKUP_OBJECT (special_dialog, page_checkbutton, "page_checkbutton");
  GLADE_HOOKUP_OBJECT (special_dialog, scan_checkbutton, "scan_checkbutton");
  GLADE_HOOKUP_OBJECT_NO_REF (special_dialog, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (special_dialog, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (special_dialog, hbuttonbox10, "hbuttonbox10");
  GLADE_HOOKUP_OBJECT (special_dialog, special_send_button, "special_send_button");
  GLADE_HOOKUP_OBJECT (special_dialog, special_cancel_button, "special_cancel_button");
  GLADE_HOOKUP_OBJECT (special_dialog, special_std_button, "special_std_button");

  gtk_widget_grab_focus (special_send_button);
  gtk_widget_grab_default (special_send_button);
  return special_dialog;
}

GtkWidget*
create_regi_dialog (void)
{
  GtkWidget *regi_dialog;
  GtkWidget *regi_dialog_vbox1;
  GtkWidget *vbox1;
  GtkWidget *label1;
  GtkWidget *hbox1;
  GtkWidget *regi_drawingarea;
  GtkWidget *vbox2;
  GtkWidget *table1;
  GtkObject *regi_spinbutton1_adj;
  GtkWidget *regi_spinbutton1;
  GtkObject *regi_spinbutton2_adj;
  GtkWidget *regi_spinbutton2;
  GtkObject *regi_spinbutton3_adj;
  GtkWidget *regi_spinbutton3;
  GtkObject *regi_spinbutton4_adj;
  GtkWidget *regi_spinbutton4;
  GtkObject *regi_spinbutton5_adj;
  GtkWidget *regi_spinbutton5;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *label6;
  GtkWidget *label7;
  GtkWidget *hseparator1;
  GtkWidget *table2;
  GtkObject *regi_spinbutton6_adj;
  GtkWidget *regi_spinbutton6;
  GtkWidget *label8;
  GtkWidget *label9;
  GtkWidget *regi_dialog_action_area1;
  GtkWidget *hbuttonbox14;
  GtkWidget *regi_ok_button;

  regi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (regi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (regi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (regi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (regi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  regi_dialog_vbox1 = GTK_DIALOG (regi_dialog)->vbox;
  gtk_widget_show (regi_dialog_vbox1);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (regi_dialog_vbox1), vbox1, TRUE, TRUE, 0);

  label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to F."));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (vbox1), label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (label1), 5, 5);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, TRUE, TRUE, 0);

  regi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (regi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox1), regi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (regi_drawingarea, 100, 144);
  gtk_widget_set_events (regi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (hbox1), vbox2, TRUE, TRUE, 0);

  table1 = gtk_table_new (6, 2, FALSE);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox2), table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 5);

  regi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  regi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (regi_spinbutton1_adj), 1, 0);
  gtk_widget_show (regi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table1), regi_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  regi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  regi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (regi_spinbutton2_adj), 1, 0);
  gtk_widget_show (regi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table1), regi_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  regi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  regi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (regi_spinbutton3_adj), 1, 0);
  gtk_widget_show (regi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table1), regi_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  regi_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  regi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (regi_spinbutton4_adj), 1, 0);
  gtk_widget_show (regi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table1), regi_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  regi_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  regi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (regi_spinbutton5_adj), 1, 0);
  gtk_widget_show (regi_spinbutton5);
  gtk_table_attach (GTK_TABLE (table1), regi_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (label2);
  gtk_table_attach (GTK_TABLE (table1), label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label2), 0, 0.5);

  label3 = gtk_label_new (_("A. Black:"));
  gtk_widget_show (label3);
  gtk_table_attach (GTK_TABLE (table1), label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label3), 0, 0.5);

  label4 = gtk_label_new (_("B. Cyan:"));
  gtk_widget_show (label4);
  gtk_table_attach (GTK_TABLE (table1), label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label4), 0, 0.5);

  label5 = gtk_label_new (_("C. Magenta:"));
  gtk_widget_show (label5);
  gtk_table_attach (GTK_TABLE (table1), label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label5), 0, 0.5);

  label6 = gtk_label_new (_("D. Photo Cyan:"));
  gtk_widget_show (label6);
  gtk_table_attach (GTK_TABLE (table1), label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label6), 0, 0.5);

  label7 = gtk_label_new (_("E. Photo Magenta:"));
  gtk_widget_show (label7);
  gtk_table_attach (GTK_TABLE (table1), label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label7), 0, 0.5);


  hseparator1 = gtk_hseparator_new ();
  gtk_widget_show (hseparator1);
  gtk_box_pack_start (GTK_BOX (vbox2), hseparator1, TRUE, TRUE, 0);

  table2 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table2);
  gtk_box_pack_start (GTK_BOX (vbox2), table2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table2), 5);

  regi_spinbutton6_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  regi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (regi_spinbutton6_adj), 1, 0);
  gtk_widget_show (regi_spinbutton6);
  gtk_table_attach (GTK_TABLE (table2), regi_spinbutton6, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label8 = gtk_label_new (_("Bi-directional Alignment (-3 to +3)"));
  gtk_widget_show (label8);
  gtk_table_attach (GTK_TABLE (table2), label8, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label8), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label8), 0, 0.5);

  label9 = gtk_label_new (_("F. Bi-directional:"));
  gtk_widget_show (label9);
  gtk_table_attach (GTK_TABLE (table2), label9, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label9), 0, 0.5);

  regi_dialog_action_area1 = GTK_DIALOG (regi_dialog)->action_area;
  gtk_widget_show (regi_dialog_action_area1);
  gtk_container_set_border_width (GTK_CONTAINER (regi_dialog_action_area1), 5);

  hbuttonbox14 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox14);
  gtk_box_pack_start (GTK_BOX (regi_dialog_action_area1), hbuttonbox14, TRUE, FALSE, 0);

  regi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (regi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox14), regi_ok_button);
  GTK_WIDGET_SET_FLAGS (regi_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) regi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) regi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) regi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) regi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) regi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) regi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (regi_dialog, regi_dialog, "regi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (regi_dialog, regi_dialog_vbox1, "regi_dialog_vbox1");
  GLADE_HOOKUP_OBJECT (regi_dialog, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (regi_dialog, label1, "label1");
  GLADE_HOOKUP_OBJECT (regi_dialog, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_drawingarea, "regi_drawingarea");
  GLADE_HOOKUP_OBJECT (regi_dialog, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (regi_dialog, table1, "table1");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_spinbutton1, "regi_spinbutton1");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_spinbutton2, "regi_spinbutton2");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_spinbutton3, "regi_spinbutton3");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_spinbutton4, "regi_spinbutton4");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_spinbutton5, "regi_spinbutton5");
  GLADE_HOOKUP_OBJECT (regi_dialog, label2, "label2");
  GLADE_HOOKUP_OBJECT (regi_dialog, label3, "label3");
  GLADE_HOOKUP_OBJECT (regi_dialog, label4, "label4");
  GLADE_HOOKUP_OBJECT (regi_dialog, label5, "label5");
  GLADE_HOOKUP_OBJECT (regi_dialog, label6, "label6");
  GLADE_HOOKUP_OBJECT (regi_dialog, label7, "label7");
  GLADE_HOOKUP_OBJECT (regi_dialog, hseparator1, "hseparator1");
  GLADE_HOOKUP_OBJECT (regi_dialog, table2, "table2");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_spinbutton6, "regi_spinbutton6");
  GLADE_HOOKUP_OBJECT (regi_dialog, label8, "label8");
  GLADE_HOOKUP_OBJECT (regi_dialog, label9, "label9");
  GLADE_HOOKUP_OBJECT_NO_REF (regi_dialog, regi_dialog_action_area1, "regi_dialog_action_area1");
  GLADE_HOOKUP_OBJECT (regi_dialog, hbuttonbox14, "hbuttonbox14");
  GLADE_HOOKUP_OBJECT (regi_dialog, regi_ok_button, "regi_ok_button");

  gtk_widget_grab_focus (regi_ok_button);
  gtk_widget_grab_default (regi_ok_button);
  return regi_dialog;
}

GtkWidget*
create_mediasize_illegal_dialog (void)
{
  GtkWidget *mediasize_illegal_dialog;
  GtkWidget *dialog_vbox6;
  GtkWidget *vbox58;
  GtkWidget *label60;
  GtkWidget *table37;
  GtkWidget *mediasize_illegal_current_size_label;
  GtkWidget *mediasize_illegal_current_media_label;
  GtkWidget *label73;
  GtkWidget *label74;
  GtkWidget *label63;
  GtkWidget *table38;
  GtkWidget *mediasize_illegal_recommend_size_label;
  GtkWidget *mediasize_illegal_recommend_media_label;
  GtkWidget *label75;
  GtkWidget *label76;
  GtkWidget *label71;
  GtkWidget *dialog_action_area6;
  GtkWidget *hbuttonbox11;
  GtkWidget *mediasize_illegal_apply_button;
  GtkWidget *mediasize_illegal_cancel_button;

  mediasize_illegal_dialog = gtk_dialog_new ();
  /* LUM_LID_CHANGE_COMBINATION */
  gtk_window_set_title (GTK_WINDOW (mediasize_illegal_dialog), _("Change Combination"));
  gtk_window_set_modal (GTK_WINDOW (mediasize_illegal_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (mediasize_illegal_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (mediasize_illegal_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox6 = GTK_DIALOG (mediasize_illegal_dialog)->vbox;
  gtk_widget_show (dialog_vbox6);

  vbox58 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (vbox58);
  gtk_box_pack_start (GTK_BOX (dialog_vbox6), vbox58, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox58), 16);

  /* LUM_IDD_SA_INVALIDCOMBINATION_IDC_STT_SA_TITLE */
  label60 = gtk_label_new (_("You cannot print with the following combination:"));
  gtk_widget_show (label60);
  gtk_box_pack_start (GTK_BOX (vbox58), label60, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label60), 7.45058e-09, 0.5);

  table37 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table37);
  gtk_box_pack_start (GTK_BOX (vbox58), table37, FALSE, FALSE, 0);

  mediasize_illegal_current_size_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_current_size_label);
  gtk_table_attach (GTK_TABLE (table37), mediasize_illegal_current_size_label, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_current_size_label), 7.45058e-09, 0.5);

  mediasize_illegal_current_media_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_current_media_label);
  gtk_table_attach (GTK_TABLE (table37), mediasize_illegal_current_media_label, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_current_media_label), 7.45058e-09, 0.5);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_PAGESIZE */
  label73 = gtk_label_new (_("Page Size:"));
  gtk_widget_show (label73);
  gtk_table_attach (GTK_TABLE (table37), label73, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label73), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label73), 20, 0);

  /* LUM_IDD_PAG_MAIN_IDC_STT_MEDIATYPE */
  label74 = gtk_label_new (_("Media Type:"));
  gtk_widget_show (label74);
  gtk_table_attach (GTK_TABLE (table37), label74, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label74), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label74), 20, 0);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDC_STT_SA_TITLE2 */
  label63 = gtk_label_new (_("The following is recommended:"));
  gtk_widget_show (label63);
  gtk_box_pack_start (GTK_BOX (vbox58), label63, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label63), 7.45058e-09, 0.5);

  table38 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table38);
  gtk_box_pack_start (GTK_BOX (vbox58), table38, FALSE, FALSE, 0);

  mediasize_illegal_recommend_size_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_recommend_size_label);
  gtk_table_attach (GTK_TABLE (table38), mediasize_illegal_recommend_size_label, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_recommend_size_label), 7.45058e-09, 0.5);

  mediasize_illegal_recommend_media_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_recommend_media_label);
  gtk_table_attach (GTK_TABLE (table38), mediasize_illegal_recommend_media_label, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_recommend_media_label), 7.45058e-09, 0.5);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_PAGESIZE */
  label75 = gtk_label_new (_("Page Size:"));
  gtk_widget_show (label75);
  gtk_table_attach (GTK_TABLE (table38), label75, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label75), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label75), 19, 0);

  /* LUM_IDD_PAG_MAIN_IDC_STT_MEDIATYPE */
  label76 = gtk_label_new (_("Media Type:"));
  gtk_widget_show (label76);
  gtk_table_attach (GTK_TABLE (table38), label76, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label76), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label76), 20, 0);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDC_STT_SA_RESOLV2S */
  label71 = gtk_label_new (_("Click Change to use this, or Back to Setup to select a different combination."));
  gtk_widget_show (label71);
  gtk_box_pack_start (GTK_BOX (vbox58), label71, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label71), 7.45058e-09, 0.5);

  dialog_action_area6 = GTK_DIALOG (mediasize_illegal_dialog)->action_area;
  gtk_widget_show (dialog_action_area6);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area6), GTK_BUTTONBOX_END);

  hbuttonbox11 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox11);
  gtk_container_add (GTK_CONTAINER (dialog_action_area6), hbuttonbox11);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox11), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox11), 8);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDOK */
  mediasize_illegal_apply_button = gtk_button_new_with_mnemonic (_("Change"));
  gtk_widget_show (mediasize_illegal_apply_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox11), mediasize_illegal_apply_button);
  GTK_WIDGET_SET_FLAGS (mediasize_illegal_apply_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDCANCEL */
  mediasize_illegal_cancel_button = gtk_button_new_with_mnemonic (_("Back to Setup"));
  gtk_widget_show (mediasize_illegal_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox11), mediasize_illegal_cancel_button);
  GTK_WIDGET_SET_FLAGS (mediasize_illegal_cancel_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) mediasize_illegal_dialog, "delete_event",
  G_CALLBACK (on_mediasize_illegal_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) mediasize_illegal_apply_button, "clicked",
  G_CALLBACK (on_mediasize_illegal_apply_button_clicked),
  NULL);
  g_signal_connect ((gpointer) mediasize_illegal_cancel_button, "clicked",
  G_CALLBACK (on_mediasize_illegal_cancel_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_illegal_dialog, mediasize_illegal_dialog, "mediasize_illegal_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_illegal_dialog, dialog_vbox6, "dialog_vbox6");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, vbox58, "vbox58");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label60, "label60");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, table37, "table37");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, mediasize_illegal_current_size_label, "mediasize_illegal_current_size_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, mediasize_illegal_current_media_label, "mediasize_illegal_current_media_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label73, "label73");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label74, "label74");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label63, "label63");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, table38, "table38");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, mediasize_illegal_recommend_size_label, "mediasize_illegal_recommend_size_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, mediasize_illegal_recommend_media_label, "mediasize_illegal_recommend_media_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label75, "label75");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label76, "label76");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, label71, "label71");
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_illegal_dialog, dialog_action_area6, "dialog_action_area6");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, hbuttonbox11, "hbuttonbox11");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, mediasize_illegal_apply_button, "mediasize_illegal_apply_button");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_dialog, mediasize_illegal_cancel_button, "mediasize_illegal_cancel_button");

  gtk_widget_grab_focus (mediasize_illegal_apply_button);
  gtk_widget_grab_default (mediasize_illegal_apply_button);
  return mediasize_illegal_dialog;
}

GtkWidget*
create_mediasize_recommend_dialog (void)
{
  GtkWidget *mediasize_recommend_dialog;
  GtkWidget *dialog_vbox7;
  GtkWidget *vbox59;
  GtkWidget *label67;
  GtkWidget *table39;
  GtkWidget *mediasize_recommend_current_media_label;
  GtkWidget *mediasize_recommend_current_size_label;
  GtkWidget *label77;
  GtkWidget *label78;
  GtkWidget *mediasize_recommend_message_label;
  GtkWidget *vbox62;
  GtkWidget *mediasize_recommend_radio_button1;
  GSList *mediasize_recommend_radio_button1_group = NULL;
  GtkWidget *mediasize_recommend_radio_button2;
  GtkWidget *mediasize_recommend_radio_button3;
  GtkWidget *mediasize_recommend_radio_button4;
  GtkWidget *dialog_action_area7;
  GtkWidget *hbuttonbox12;
  GtkWidget *mediasize_recommend_apply_button;
  GtkWidget *mediasize_recommend_not_apply_button;
  GtkWidget *mediasize_recommend_cancel_button;

  mediasize_recommend_dialog = gtk_dialog_new ();
  /* LUM_LID_CHANGE_COMBINATION */
  gtk_window_set_title (GTK_WINDOW (mediasize_recommend_dialog), _("Change Combination"));
  gtk_window_set_modal (GTK_WINDOW (mediasize_recommend_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (mediasize_recommend_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (mediasize_recommend_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox7 = GTK_DIALOG (mediasize_recommend_dialog)->vbox;
  gtk_widget_show (dialog_vbox7);

  vbox59 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (vbox59);
  gtk_box_pack_start (GTK_BOX (dialog_vbox7), vbox59, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox59), 16);

  /* LUM_IDD_SA_RECOMMENDCOMBINATIONONE_IDC_STT_SA_TITLE */
  label67 = gtk_label_new (_("You have selected the following combination:"));
  gtk_widget_show (label67);
  gtk_box_pack_start (GTK_BOX (vbox59), label67, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label67), 7.45058e-09, 0.5);

  table39 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table39);
  gtk_box_pack_start (GTK_BOX (vbox59), table39, FALSE, FALSE, 0);

  mediasize_recommend_current_media_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_recommend_current_media_label);
  gtk_table_attach (GTK_TABLE (table39), mediasize_recommend_current_media_label, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (mediasize_recommend_current_media_label), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (mediasize_recommend_current_media_label), 7.45058e-09, 0.5);

  mediasize_recommend_current_size_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_recommend_current_size_label);
  gtk_table_attach (GTK_TABLE (table39), mediasize_recommend_current_size_label, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_recommend_current_size_label), 7.45058e-09, 0.5);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_PAGESIZE */
  label77 = gtk_label_new (_("Page Size:"));
  gtk_widget_show (label77);
  gtk_table_attach (GTK_TABLE (table39), label77, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label77), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label77), 20, 0);

  /* LUM_IDD_PAG_MAIN_IDC_STT_MEDIATYPE */
  label78 = gtk_label_new (_("Media Type:"));
  gtk_widget_show (label78);
  gtk_table_attach (GTK_TABLE (table39), label78, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label78), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label78), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label78), 20, 0);

  mediasize_recommend_message_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_recommend_message_label);
  gtk_box_pack_start (GTK_BOX (vbox59), mediasize_recommend_message_label, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_recommend_message_label), 7.45058e-09, 0.5);

  vbox62 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox62);
  gtk_box_pack_start (GTK_BOX (vbox59), vbox62, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox62), 10);

  mediasize_recommend_radio_button1 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_recommend_radio_button1);
  gtk_box_pack_start (GTK_BOX (vbox62), mediasize_recommend_radio_button1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button1), mediasize_recommend_radio_button1_group);
  mediasize_recommend_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button1));

  mediasize_recommend_radio_button2 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_recommend_radio_button2);
  gtk_box_pack_start (GTK_BOX (vbox62), mediasize_recommend_radio_button2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button2), mediasize_recommend_radio_button1_group);
  mediasize_recommend_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button2));

  mediasize_recommend_radio_button3 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_recommend_radio_button3);
  gtk_box_pack_start (GTK_BOX (vbox62), mediasize_recommend_radio_button3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button3), mediasize_recommend_radio_button1_group);
  mediasize_recommend_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button3));

  mediasize_recommend_radio_button4 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_recommend_radio_button4);
  gtk_box_pack_start (GTK_BOX (vbox62), mediasize_recommend_radio_button4, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button4), mediasize_recommend_radio_button1_group);
  mediasize_recommend_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button4));

  dialog_action_area7 = GTK_DIALOG (mediasize_recommend_dialog)->action_area;
  gtk_widget_show (dialog_action_area7);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area7), GTK_BUTTONBOX_END);

  hbuttonbox12 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox12);
  gtk_container_add (GTK_CONTAINER (dialog_action_area7), hbuttonbox12);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox12), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox12), 8);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDOK */
  mediasize_recommend_apply_button = gtk_button_new_with_mnemonic (_("Change"));
  gtk_widget_show (mediasize_recommend_apply_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox12), mediasize_recommend_apply_button);
  GTK_WIDGET_SET_FLAGS (mediasize_recommend_apply_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_SA_RECOMMENDCOMBINATIONONE_IDIGNORE */
  mediasize_recommend_not_apply_button = gtk_button_new_with_mnemonic (_("Ignore"));
  gtk_widget_show (mediasize_recommend_not_apply_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox12), mediasize_recommend_not_apply_button);
  GTK_WIDGET_SET_FLAGS (mediasize_recommend_not_apply_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDCANCEL */
  mediasize_recommend_cancel_button = gtk_button_new_with_mnemonic (_("Back to Setup"));
  gtk_widget_show (mediasize_recommend_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox12), mediasize_recommend_cancel_button);
  GTK_WIDGET_SET_FLAGS (mediasize_recommend_cancel_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) mediasize_recommend_dialog, "delete_event",
  G_CALLBACK (on_mediasize_recommend_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) mediasize_recommend_apply_button, "clicked",
  G_CALLBACK (on_mediasize_recommend_apply_button_clicked),
  NULL);
  g_signal_connect ((gpointer) mediasize_recommend_not_apply_button, "clicked",
  G_CALLBACK (on_mediasize_recommend_not_apply_button_clicked),
  NULL);
  g_signal_connect ((gpointer) mediasize_recommend_cancel_button, "clicked",
  G_CALLBACK (on_mediasize_recommend_cancel_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_recommend_dialog, mediasize_recommend_dialog, "mediasize_recommend_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_recommend_dialog, dialog_vbox7, "dialog_vbox7");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, vbox59, "vbox59");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, label67, "label67");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, table39, "table39");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_current_media_label, "mediasize_recommend_current_media_label");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_current_size_label, "mediasize_recommend_current_size_label");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, label77, "label77");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, label78, "label78");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_message_label, "mediasize_recommend_message_label");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, vbox62, "vbox62");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_radio_button1, "mediasize_recommend_radio_button1");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_radio_button2, "mediasize_recommend_radio_button2");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_radio_button3, "mediasize_recommend_radio_button3");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_radio_button4, "mediasize_recommend_radio_button4");
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_recommend_dialog, dialog_action_area7, "dialog_action_area7");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, hbuttonbox12, "hbuttonbox12");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_apply_button, "mediasize_recommend_apply_button");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_not_apply_button, "mediasize_recommend_not_apply_button");
  GLADE_HOOKUP_OBJECT (mediasize_recommend_dialog, mediasize_recommend_cancel_button, "mediasize_recommend_cancel_button");

  gtk_widget_grab_focus (mediasize_recommend_apply_button);
  gtk_widget_grab_default (mediasize_recommend_apply_button);
  return mediasize_recommend_dialog;
}

GtkWidget*
create_mediatype_dialog (void)
{
  GtkWidget *mediatype_dialog;
  GtkWidget *dialog_vbox8;
  GtkWidget *vbox63;
  GtkWidget *mediatype_dialog_label;
  GtkWidget *label81;
  GtkWidget *mediatype_dialog_combo;
  GtkWidget *dialog_action_area8;
  GtkWidget *hbuttonbox13;
  GtkWidget *mediatype_dialog_ok_button;
  GtkWidget *mediatype_dialog_cancel_button;

  mediatype_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (mediatype_dialog), _("Change Media Type"));
  gtk_window_set_modal (GTK_WINDOW (mediatype_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (mediatype_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (mediatype_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox8 = GTK_DIALOG (mediatype_dialog)->vbox;
  gtk_widget_show (dialog_vbox8);

  vbox63 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (vbox63);
  gtk_box_pack_start (GTK_BOX (dialog_vbox8), vbox63, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox63), 16);

  mediatype_dialog_label = gtk_label_new (_("*"));
  gtk_widget_show (mediatype_dialog_label);
  gtk_box_pack_start (GTK_BOX (vbox63), mediatype_dialog_label, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (mediatype_dialog_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (mediatype_dialog_label), 7.45058e-09, 0.5);

  label81 = gtk_label_new (_("Available Media Types:"));
  gtk_widget_show (label81);
  gtk_box_pack_start (GTK_BOX (vbox63), label81, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label81), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label81), 7.45058e-09, 0.5);

  mediatype_dialog_combo = gtk_combo_box_new_text ();
  gtk_widget_show (mediatype_dialog_combo);
  gtk_box_pack_start (GTK_BOX (vbox63), mediatype_dialog_combo, FALSE, FALSE, 0);

  dialog_action_area8 = GTK_DIALOG (mediatype_dialog)->action_area;
  gtk_widget_show (dialog_action_area8);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area8), 5);

  hbuttonbox13 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox13);
  gtk_box_pack_start (GTK_BOX (dialog_action_area8), hbuttonbox13, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox13), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox13), 0);

  mediatype_dialog_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (mediatype_dialog_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox13), mediatype_dialog_ok_button);
  GTK_WIDGET_SET_FLAGS (mediatype_dialog_ok_button, GTK_CAN_DEFAULT);

  mediatype_dialog_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (mediatype_dialog_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox13), mediatype_dialog_cancel_button);
  GTK_WIDGET_SET_FLAGS (mediatype_dialog_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) mediatype_dialog, "delete_event",
                    G_CALLBACK (on_mediatype_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) mediatype_dialog_combo, "changed",
                    G_CALLBACK (on_mediatype_dialog_combo_changed),
                    NULL);
  g_signal_connect ((gpointer) mediatype_dialog_ok_button, "clicked",
                    G_CALLBACK (on_mediatype_dialog_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) mediatype_dialog_cancel_button, "clicked",
                    G_CALLBACK (on_mediatype_dialog_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mediatype_dialog, mediatype_dialog, "mediatype_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (mediatype_dialog, dialog_vbox8, "dialog_vbox8");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, vbox63, "vbox63");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, mediatype_dialog_label, "mediatype_dialog_label");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, label81, "label81");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, mediatype_dialog_combo, "mediatype_dialog_combo");
  GLADE_HOOKUP_OBJECT_NO_REF (mediatype_dialog, dialog_action_area8, "dialog_action_area8");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, hbuttonbox13, "hbuttonbox13");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, mediatype_dialog_ok_button, "mediatype_dialog_ok_button");
  GLADE_HOOKUP_OBJECT (mediatype_dialog, mediatype_dialog_cancel_button, "mediatype_dialog_cancel_button");

  return mediatype_dialog;
}

GtkWidget*
create_F360regi1_dialog (void)
{
  GtkWidget *F360regi1_dialog;
  GtkWidget *F360regi1_vbox01;
  GtkWidget *F360regi1_vbox02;
  GtkWidget *F360regi1_label01;
  GtkWidget *F360regi1_hbox01;
  GtkWidget *F360regi1_drawingarea;
  GtkWidget *F360regi1_vbox03;
  GtkWidget *F360regi1_table1;
  GtkWidget *F360regi1_hbox02;
  GtkObject *F360regi1_spinbutton1_adj;
  GtkWidget *F360regi1_spinbutton1;
  GtkWidget *F360regi1_label03;
  GtkWidget *F360regi1_label02;
  GtkWidget *hseparator18;
  GtkWidget *F360regi1_table2;
  GtkWidget *F360regi1_label04;
  GtkWidget *F360regi1_hbox03;
  GtkObject *F360regi1_spinbutton2_adj;
  GtkWidget *F360regi1_spinbutton2;
  GtkWidget *F360regi1_label05;
  GtkWidget *hbox18;
  GtkWidget *hbuttonbox15;
  GtkWidget *F360regi1_ok_button;

  F360regi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (F360regi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (F360regi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (F360regi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (F360regi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  F360regi1_vbox01 = GTK_DIALOG (F360regi1_dialog)->vbox;
  gtk_widget_show (F360regi1_vbox01);

  F360regi1_vbox02 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (F360regi1_vbox02);
  gtk_box_pack_start (GTK_BOX (F360regi1_vbox01), F360regi1_vbox02, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (F360regi1_vbox02), 5);

  F360regi1_label01 = gtk_label_new (_("Aligning for standard resolution. Inspect the printednpattern and determine the number of the patternnwhere the upper and lower lines appear to coincide.nEnter this number for B1, B2."));
  gtk_widget_show (F360regi1_label01);
  gtk_box_pack_start (GTK_BOX (F360regi1_vbox02), F360regi1_label01, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi1_label01), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (F360regi1_label01), 5, 5);

  F360regi1_hbox01 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (F360regi1_hbox01);
  gtk_box_pack_start (GTK_BOX (F360regi1_vbox02), F360regi1_hbox01, TRUE, TRUE, 0);

  F360regi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (F360regi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (F360regi1_hbox01), F360regi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (F360regi1_drawingarea, 100, 144);
  gtk_widget_set_events (F360regi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  F360regi1_vbox03 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (F360regi1_vbox03);
  gtk_box_pack_start (GTK_BOX (F360regi1_hbox01), F360regi1_vbox03, TRUE, TRUE, 0);

  F360regi1_table1 = gtk_table_new (2, 1, FALSE);
  gtk_widget_show (F360regi1_table1);
  gtk_box_pack_start (GTK_BOX (F360regi1_vbox03), F360regi1_table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (F360regi1_table1), 5);

  F360regi1_hbox02 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (F360regi1_hbox02);
  gtk_table_attach (GTK_TABLE (F360regi1_table1), F360regi1_hbox02, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);

  F360regi1_spinbutton1_adj = gtk_adjustment_new (0, -7, 7, 1, 10, 10);
  F360regi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (F360regi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (F360regi1_spinbutton1);
  gtk_box_pack_start (GTK_BOX (F360regi1_hbox02), F360regi1_spinbutton1, FALSE, TRUE, 0);
  gtk_widget_set_size_request (F360regi1_spinbutton1, 50, 22);

  F360regi1_label03 = gtk_label_new (_("(-7 to +7)"));
  gtk_widget_show (F360regi1_label03);
  gtk_box_pack_start (GTK_BOX (F360regi1_hbox02), F360regi1_label03, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi1_label03), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (F360regi1_label03), 0, 0.5);

  F360regi1_label02 = gtk_label_new (_("B1. Bi-directional Alignment:"));
  gtk_widget_show (F360regi1_label02);
  gtk_table_attach (GTK_TABLE (F360regi1_table1), F360regi1_label02, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi1_label02), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (F360regi1_label02), 0, 0.5);


  hseparator18 = gtk_hseparator_new ();
  gtk_widget_show (hseparator18);
  gtk_box_pack_start (GTK_BOX (F360regi1_vbox03), hseparator18, TRUE, TRUE, 0);

  F360regi1_table2 = gtk_table_new (2, 1, FALSE);
  gtk_widget_show (F360regi1_table2);
  gtk_box_pack_start (GTK_BOX (F360regi1_vbox03), F360regi1_table2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (F360regi1_table2), 5);

  F360regi1_label04 = gtk_label_new (_("B2. Bi-directional Alignment:"));
  gtk_widget_show (F360regi1_label04);
  gtk_table_attach (GTK_TABLE (F360regi1_table2), F360regi1_label04, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button4), mediasize_recommend_radio_buttons_group);
  mediasize_recommend_radio_buttons_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_recommend_radio_button4));
  gtk_label_set_justify (GTK_LABEL (F360regi1_label04), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (F360regi1_label04), TRUE);
  gtk_misc_set_alignment (GTK_MISC (F360regi1_label04), 0, 0.5);

  F360regi1_hbox03 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (F360regi1_hbox03);
  gtk_table_attach (GTK_TABLE (F360regi1_table2), F360regi1_hbox03, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  F360regi1_spinbutton2_adj = gtk_adjustment_new (0, -7, 7, 1, 10, 10);
  F360regi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (F360regi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (F360regi1_spinbutton2);
  gtk_box_pack_start (GTK_BOX (F360regi1_hbox03), F360regi1_spinbutton2, FALSE, TRUE, 0);
  gtk_widget_set_size_request (F360regi1_spinbutton2, 50, 22);

  F360regi1_label05 = gtk_label_new (_("(-7 to +7)"));
  gtk_widget_show (F360regi1_label05);
  gtk_box_pack_start (GTK_BOX (F360regi1_hbox03), F360regi1_label05, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi1_label05), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (F360regi1_label05), 0, 0.5);

  hbox18 = GTK_DIALOG (F360regi1_dialog)->action_area;
  gtk_widget_show (hbox18);
  gtk_container_set_border_width (GTK_CONTAINER (hbox18), 5);

  hbuttonbox15 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox15);
  gtk_box_pack_start (GTK_BOX (hbox18), hbuttonbox15, TRUE, FALSE, 0);

  F360regi1_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (F360regi1_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox15), F360regi1_ok_button);
  GTK_WIDGET_SET_FLAGS (F360regi1_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) F360regi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) F360regi1_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (F360regi1_dialog, F360regi1_dialog, "F360regi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (F360regi1_dialog, F360regi1_vbox01, "F360regi1_vbox01");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_vbox02, "F360regi1_vbox02");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_label01, "F360regi1_label01");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_hbox01, "F360regi1_hbox01");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_drawingarea, "F360regi1_drawingarea");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_vbox03, "F360regi1_vbox03");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_table1, "F360regi1_table1");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_hbox02, "F360regi1_hbox02");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_spinbutton1, "F360regi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_label03, "F360regi1_label03");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_label02, "F360regi1_label02");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, hseparator18, "hseparator18");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_table2, "F360regi1_table2");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_label04, "F360regi1_label04");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_hbox03, "F360regi1_hbox03");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_spinbutton2, "F360regi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_label05, "F360regi1_label05");
  GLADE_HOOKUP_OBJECT_NO_REF (F360regi1_dialog, hbox18, "hbox18");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, hbuttonbox15, "hbuttonbox15");
  GLADE_HOOKUP_OBJECT (F360regi1_dialog, F360regi1_ok_button, "F360regi1_ok_button");

  gtk_widget_grab_focus (F360regi1_ok_button);
  gtk_widget_grab_default (F360regi1_ok_button);
  return F360regi1_dialog;
}

GtkWidget*
create_F360regi2_dialog (void)
{
  GtkWidget *F360regi2_dialog;
  GtkWidget *F360regi2_vbox01;
  GtkWidget *F360regi2_vbox02;
  GtkWidget *F360regi2_label01;
  GtkWidget *F360regi2_hbox01;
  GtkWidget *F360regi2_drawingarea;
  GtkWidget *F360regi2_vbox03;
  GtkWidget *F360regi2_table1;
  GtkWidget *F360regi2_hbox02;
  GtkObject *F360regi2_spinbutton1_adj;
  GtkWidget *F360regi2_spinbutton1;
  GtkWidget *F360regi2_label03;
  GtkWidget *F360regi2_label02;
  GtkWidget *hseparator19;
  GtkWidget *F360regi2_table2;
  GtkWidget *F360regi2_hbox03;
  GtkObject *F360regi2_spinbutton2_adj;
  GtkWidget *F360regi2_spinbutton2;
  GtkWidget *F360regi2_label05;
  GtkWidget *F360regi2_label04;
  GtkWidget *hbox24;
  GtkWidget *hbuttonbox16;
  GtkWidget *F360regi2_ok_button;

  F360regi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (F360regi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (F360regi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (F360regi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (F360regi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  F360regi2_vbox01 = GTK_DIALOG (F360regi2_dialog)->vbox;
  gtk_widget_show (F360regi2_vbox01);

  F360regi2_vbox02 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (F360regi2_vbox02);
  gtk_box_pack_start (GTK_BOX (F360regi2_vbox01), F360regi2_vbox02, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (F360regi2_vbox02), 5);

  F360regi2_label01 = gtk_label_new (_("Inspect the printed high-resolution pattern andndetermine the number of the pattern where thenupper and lower lines appear to coincide. Enter thisnnumber for B1, B2."));
  gtk_widget_show (F360regi2_label01);
  gtk_box_pack_start (GTK_BOX (F360regi2_vbox02), F360regi2_label01, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi2_label01), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (F360regi2_label01), 5, 5);

  F360regi2_hbox01 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (F360regi2_hbox01);
  gtk_box_pack_start (GTK_BOX (F360regi2_vbox02), F360regi2_hbox01, TRUE, TRUE, 0);

  F360regi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (F360regi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (F360regi2_hbox01), F360regi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (F360regi2_drawingarea, 100, 144);
  gtk_widget_set_events (F360regi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  F360regi2_vbox03 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (F360regi2_vbox03);
  gtk_box_pack_start (GTK_BOX (F360regi2_hbox01), F360regi2_vbox03, TRUE, TRUE, 0);

  F360regi2_table1 = gtk_table_new (2, 1, FALSE);
  gtk_widget_show (F360regi2_table1);
  gtk_box_pack_start (GTK_BOX (F360regi2_vbox03), F360regi2_table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (F360regi2_table1), 5);

  F360regi2_hbox02 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (F360regi2_hbox02);
  gtk_table_attach (GTK_TABLE (F360regi2_table1), F360regi2_hbox02, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);

  F360regi2_spinbutton1_adj = gtk_adjustment_new (0, -1, 1, 1, 10, 10);
  F360regi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (F360regi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (F360regi2_spinbutton1);
  gtk_box_pack_start (GTK_BOX (F360regi2_hbox02), F360regi2_spinbutton1, FALSE, TRUE, 0);
  gtk_widget_set_size_request (F360regi2_spinbutton1, 50, 22);

  F360regi2_label03 = gtk_label_new (_("(-1 to +1)"));
  gtk_widget_show (F360regi2_label03);
  gtk_box_pack_start (GTK_BOX (F360regi2_hbox02), F360regi2_label03, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi2_label03), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (F360regi2_label03), 0, 0.5);

  F360regi2_label02 = gtk_label_new (_("B1. Bi-directional Alignment:"));
  gtk_widget_show (F360regi2_label02);
  gtk_table_attach (GTK_TABLE (F360regi2_table1), F360regi2_label02, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi2_label02), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (F360regi2_label02), 0, 0.5);


  hseparator19 = gtk_hseparator_new ();
  gtk_widget_show (hseparator19);
  gtk_box_pack_start (GTK_BOX (F360regi2_vbox03), hseparator19, TRUE, TRUE, 0);

  F360regi2_table2 = gtk_table_new (2, 1, FALSE);
  gtk_widget_show (F360regi2_table2);
  gtk_box_pack_start (GTK_BOX (F360regi2_vbox03), F360regi2_table2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (F360regi2_table2), 5);

  F360regi2_hbox03 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (F360regi2_hbox03);
  gtk_table_attach (GTK_TABLE (F360regi2_table2), F360regi2_hbox03, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  F360regi2_spinbutton2_adj = gtk_adjustment_new (0, -1, 1, 1, 10, 10);
  F360regi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (F360regi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (F360regi2_spinbutton2);
  gtk_box_pack_start (GTK_BOX (F360regi2_hbox03), F360regi2_spinbutton2, FALSE, TRUE, 0);
  gtk_widget_set_size_request (F360regi2_spinbutton2, 50, 22);

  F360regi2_label05 = gtk_label_new (_("(-1 to +1)"));
  gtk_widget_show (F360regi2_label05);
  gtk_box_pack_start (GTK_BOX (F360regi2_hbox03), F360regi2_label05, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi2_label05), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (F360regi2_label05), 0, 0.5);

  F360regi2_label04 = gtk_label_new (_("B2. Bi-directional Alignment:"));
  gtk_widget_show (F360regi2_label04);
  gtk_table_attach (GTK_TABLE (F360regi2_table2), F360regi2_label04, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (F360regi2_label04), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (F360regi2_label04), TRUE);
  gtk_misc_set_alignment (GTK_MISC (F360regi2_label04), 0, 0.5);

  hbox24 = GTK_DIALOG (F360regi2_dialog)->action_area;
  gtk_widget_show (hbox24);
  gtk_container_set_border_width (GTK_CONTAINER (hbox24), 5);

  hbuttonbox16 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox16);
  gtk_box_pack_start (GTK_BOX (hbox24), hbuttonbox16, TRUE, FALSE, 0);

  F360regi2_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (F360regi2_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox16), F360regi2_ok_button);
  GTK_WIDGET_SET_FLAGS (F360regi2_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) F360regi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) F360regi2_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (F360regi2_dialog, F360regi2_dialog, "F360regi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (F360regi2_dialog, F360regi2_vbox01, "F360regi2_vbox01");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_vbox02, "F360regi2_vbox02");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_label01, "F360regi2_label01");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_hbox01, "F360regi2_hbox01");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_drawingarea, "F360regi2_drawingarea");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_vbox03, "F360regi2_vbox03");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_table1, "F360regi2_table1");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_hbox02, "F360regi2_hbox02");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_spinbutton1, "F360regi2_spinbutton1");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_label03, "F360regi2_label03");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_label02, "F360regi2_label02");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, hseparator19, "hseparator19");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_table2, "F360regi2_table2");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_hbox03, "F360regi2_hbox03");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_spinbutton2, "F360regi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_label05, "F360regi2_label05");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_label04, "F360regi2_label04");
  GLADE_HOOKUP_OBJECT_NO_REF (F360regi2_dialog, hbox24, "hbox24");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, hbuttonbox16, "hbuttonbox16");
  GLADE_HOOKUP_OBJECT (F360regi2_dialog, F360regi2_ok_button, "F360regi2_ok_button");

  gtk_widget_grab_focus (F360regi2_ok_button);
  gtk_widget_grab_default (F360regi2_ok_button);
  return F360regi2_dialog;
}

GtkWidget*
create_S600regi1_dialog (void)
{
  GtkWidget *S600regi1_dialog;
  GtkWidget *S600regi1_vbox1;
  GtkWidget *S600regi1_vbox2;
  GtkWidget *S600regi1_label01;
  GtkWidget *S600regi1_hbox1;
  GtkWidget *S600regi1_drawingarea;
  GtkWidget *S600regi1_vbox3;
  GtkWidget *S600regi1_vbox4;
  GtkWidget *S600regi1_label02;
  GtkWidget *S600regi1_table1;
  GtkWidget *S600regi1_label05;
  GtkWidget *S600regi1_label04;
  GtkWidget *S600regi1_label03;
  GtkObject *S600regi1_spinbutton1_adj;
  GtkWidget *S600regi1_spinbutton1;
  GtkObject *S600regi1_spinbutton2_adj;
  GtkWidget *S600regi1_spinbutton2;
  GtkObject *S600regi1_spinbutton3_adj;
  GtkWidget *S600regi1_spinbutton3;
  GtkWidget *S600regi1_hseparator1;
  GtkWidget *S600regi1_vbox5;
  GtkWidget *S600regi1_label06;
  GtkWidget *S600regi1_table2;
  GtkWidget *S600regi1_label07;
  GtkWidget *S600regi1_label08;
  GtkWidget *S600regi1_label09;
  GtkObject *S600regi1_spinbutton4_adj;
  GtkWidget *S600regi1_spinbutton4;
  GtkObject *S600regi1_spinbutton5_adj;
  GtkWidget *S600regi1_spinbutton5;
  GtkObject *S600regi1_spinbutton6_adj;
  GtkWidget *S600regi1_spinbutton6;
  GtkWidget *S600regi2_hbox1;
  GtkWidget *hbuttonbox17;
  GtkWidget *S600regi1_ok_button;

  S600regi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (S600regi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (S600regi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (S600regi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (S600regi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  S600regi1_vbox1 = GTK_DIALOG (S600regi1_dialog)->vbox;
  gtk_widget_show (S600regi1_vbox1);

  S600regi1_vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (S600regi1_vbox2);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox1), S600regi1_vbox2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (S600regi1_vbox2), 5);

  S600regi1_label01 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to F."));
  gtk_widget_show (S600regi1_label01);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox2), S600regi1_label01, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi1_label01), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (S600regi1_label01), 5, 5);

  S600regi1_hbox1 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (S600regi1_hbox1);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox2), S600regi1_hbox1, TRUE, TRUE, 0);

  S600regi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (S600regi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (S600regi1_hbox1), S600regi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (S600regi1_drawingarea, 118, 170);
  gtk_widget_set_events (S600regi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  S600regi1_vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (S600regi1_vbox3);
  gtk_box_pack_start (GTK_BOX (S600regi1_hbox1), S600regi1_vbox3, TRUE, TRUE, 0);

  S600regi1_vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (S600regi1_vbox4);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox3), S600regi1_vbox4, TRUE, TRUE, 0);

  S600regi1_label02 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (S600regi1_label02);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox4), S600regi1_label02, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi1_label02), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label02), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label02), 0, 0.5);

  S600regi1_table1 = gtk_table_new (3, 2, TRUE);
  gtk_widget_show (S600regi1_table1);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox4), S600regi1_table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (S600regi1_table1), 5);

  S600regi1_label05 = gtk_label_new (_("Column C:"));
  gtk_widget_show (S600regi1_label05);
  gtk_table_attach (GTK_TABLE (S600regi1_table1), S600regi1_label05, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi1_label05), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label05), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label05), 0, 0.5);

  S600regi1_label04 = gtk_label_new (_("Column B:"));
  gtk_widget_show (S600regi1_label04);
  gtk_table_attach (GTK_TABLE (S600regi1_table1), S600regi1_label04, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi1_label04), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label04), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label04), 0, 0.5);

  S600regi1_label03 = gtk_label_new (_("Column A:"));
  gtk_widget_show (S600regi1_label03);
  gtk_table_attach (GTK_TABLE (S600regi1_table1), S600regi1_label03, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi1_label03), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label03), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label03), 0, 0.5);

  S600regi1_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 1, 1);
  S600regi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (S600regi1_spinbutton1);
  gtk_table_attach (GTK_TABLE (S600regi1_table1), S600regi1_spinbutton1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi1_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  S600regi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (S600regi1_spinbutton2);
  gtk_table_attach (GTK_TABLE (S600regi1_table1), S600regi1_spinbutton2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi1_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  S600regi1_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi1_spinbutton3_adj), 1, 0);
  gtk_widget_show (S600regi1_spinbutton3);
  gtk_table_attach (GTK_TABLE (S600regi1_table1), S600regi1_spinbutton3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);


  S600regi1_hseparator1 = gtk_hseparator_new ();
  gtk_widget_show (S600regi1_hseparator1);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox3), S600regi1_hseparator1, TRUE, TRUE, 0);

  S600regi1_vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (S600regi1_vbox5);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox3), S600regi1_vbox5, TRUE, TRUE, 0);

  S600regi1_label06 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (S600regi1_label06);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox5), S600regi1_label06, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi1_label06), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label06), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label06), 0, 0.5);

  S600regi1_table2 = gtk_table_new (3, 2, TRUE);
  gtk_widget_show (S600regi1_table2);
  gtk_box_pack_start (GTK_BOX (S600regi1_vbox5), S600regi1_table2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (S600regi1_table2), 5);

  S600regi1_label07 = gtk_label_new (_("Column D:"));
  gtk_widget_show (S600regi1_label07);
  gtk_table_attach (GTK_TABLE (S600regi1_table2), S600regi1_label07, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label07), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label07), 0, 0.5);

  S600regi1_label08 = gtk_label_new (_("Column E:"));
  gtk_widget_show (S600regi1_label08);
  gtk_table_attach (GTK_TABLE (S600regi1_table2), S600regi1_label08, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label08), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label08), 0, 0.5);

  S600regi1_label09 = gtk_label_new (_("Column F:"));
  gtk_widget_show (S600regi1_label09);
  gtk_table_attach (GTK_TABLE (S600regi1_table2), S600regi1_label09, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi1_label09), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi1_label09), 0, 0.5);

  S600regi1_spinbutton4_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  S600regi1_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi1_spinbutton4_adj), 1, 0);
  gtk_widget_show (S600regi1_spinbutton4);
  gtk_table_attach (GTK_TABLE (S600regi1_table2), S600regi1_spinbutton4, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi1_spinbutton5_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  S600regi1_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi1_spinbutton5_adj), 1, 0);
  gtk_widget_show (S600regi1_spinbutton5);
  gtk_table_attach (GTK_TABLE (S600regi1_table2), S600regi1_spinbutton5, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi1_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  S600regi1_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi1_spinbutton6_adj), 1, 0);
  gtk_widget_show (S600regi1_spinbutton6);
  gtk_table_attach (GTK_TABLE (S600regi1_table2), S600regi1_spinbutton6, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi2_hbox1 = GTK_DIALOG (S600regi1_dialog)->action_area;
  gtk_widget_show (S600regi2_hbox1);
  gtk_container_set_border_width (GTK_CONTAINER (S600regi2_hbox1), 5);

  hbuttonbox17 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox17);
  gtk_box_pack_start (GTK_BOX (S600regi2_hbox1), hbuttonbox17, TRUE, FALSE, 0);

  S600regi1_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (S600regi1_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox17), S600regi1_ok_button);
  GTK_WIDGET_SET_FLAGS (S600regi1_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) S600regi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) S600regi1_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (S600regi1_dialog, S600regi1_dialog, "S600regi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (S600regi1_dialog, S600regi1_vbox1, "S600regi1_vbox1");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_vbox2, "S600regi1_vbox2");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label01, "S600regi1_label01");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_hbox1, "S600regi1_hbox1");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_drawingarea, "S600regi1_drawingarea");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_vbox3, "S600regi1_vbox3");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_vbox4, "S600regi1_vbox4");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label02, "S600regi1_label02");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_table1, "S600regi1_table1");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label05, "S600regi1_label05");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label04, "S600regi1_label04");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label03, "S600regi1_label03");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_spinbutton1, "S600regi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_spinbutton2, "S600regi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_spinbutton3, "S600regi1_spinbutton3");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_hseparator1, "S600regi1_hseparator1");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_vbox5, "S600regi1_vbox5");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label06, "S600regi1_label06");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_table2, "S600regi1_table2");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label07, "S600regi1_label07");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label08, "S600regi1_label08");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_label09, "S600regi1_label09");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_spinbutton4, "S600regi1_spinbutton4");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_spinbutton5, "S600regi1_spinbutton5");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_spinbutton6, "S600regi1_spinbutton6");
  GLADE_HOOKUP_OBJECT_NO_REF (S600regi1_dialog, S600regi2_hbox1, "S600regi2_hbox1");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, hbuttonbox17, "hbuttonbox17");
  GLADE_HOOKUP_OBJECT (S600regi1_dialog, S600regi1_ok_button, "S600regi1_ok_button");

  gtk_widget_grab_focus (S600regi1_ok_button);
  gtk_widget_grab_default (S600regi1_ok_button);
  return S600regi1_dialog;
}

GtkWidget*
create_S600regi2_dialog (void)
{
  GtkWidget *S600regi2_dialog;
  GtkWidget *S600regi2_vbox1;
  GtkWidget *S600regi2_vbox2;
  GtkWidget *S600regi2_label01;
  GtkWidget *hbox27;
  GtkWidget *S600regi2_drawingarea;
  GtkWidget *vbox69;
  GtkWidget *vbox70;
  GtkWidget *S600regi2_label02;
  GtkWidget *table44;
  GtkWidget *S600regi2_label03;
  GtkWidget *S600regi2_label04;
  GtkObject *S600regi2_spinbutton2_adj;
  GtkWidget *S600regi2_spinbutton2;
  GtkObject *S600regi2_spinbutton1_adj;
  GtkWidget *S600regi2_spinbutton1;
  GtkWidget *S600regi2_hbox1;
  GtkWidget *hbuttonbox18;
  GtkWidget *S600regi2_ok_button;

  S600regi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (S600regi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (S600regi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (S600regi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (S600regi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  S600regi2_vbox1 = GTK_DIALOG (S600regi2_dialog)->vbox;
  gtk_widget_show (S600regi2_vbox1);

  S600regi2_vbox2 = gtk_vbox_new (FALSE, 10);
  gtk_widget_show (S600regi2_vbox2);
  gtk_box_pack_start (GTK_BOX (S600regi2_vbox1), S600regi2_vbox2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (S600regi2_vbox2), 5);

  S600regi2_label01 = gtk_label_new (_("Examine the printed patterns, and fill in the fields for columns G and H with the number of the pattern that is smoothest and has no stripes in areas indicated by arrows."));
  gtk_widget_show (S600regi2_label01);
  gtk_box_pack_start (GTK_BOX (S600regi2_vbox2), S600regi2_label01, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi2_label01), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (S600regi2_label01), 5, 5);

  hbox27 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox27);
  gtk_box_pack_start (GTK_BOX (S600regi2_vbox2), hbox27, TRUE, TRUE, 0);

  S600regi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (S600regi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox27), S600regi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (S600regi2_drawingarea, 118, 170);
  gtk_widget_set_events (S600regi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox69 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox69);
  gtk_box_pack_start (GTK_BOX (hbox27), vbox69, TRUE, TRUE, 0);

  vbox70 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox70);
  gtk_box_pack_start (GTK_BOX (vbox69), vbox70, TRUE, TRUE, 0);

  S600regi2_label02 = gtk_label_new (_("Vertical Alignment (-3 to +3)"));
  gtk_widget_show (S600regi2_label02);
  gtk_box_pack_start (GTK_BOX (vbox70), S600regi2_label02, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (S600regi2_label02), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi2_label02), TRUE);
  gtk_misc_set_alignment (GTK_MISC (S600regi2_label02), 0, 0.5);

  table44 = gtk_table_new (2, 2, TRUE);
  gtk_widget_show (table44);
  gtk_box_pack_start (GTK_BOX (vbox70), table44, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table44), 5);

  S600regi2_label03 = gtk_label_new (_("Column G:"));
  gtk_widget_show (S600regi2_label03);
  gtk_table_attach (GTK_TABLE (table44), S600regi2_label03, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi2_label03), TRUE);

  S600regi2_label04 = gtk_label_new (_("Column H:"));
  gtk_widget_show (S600regi2_label04);
  gtk_table_attach (GTK_TABLE (table44), S600regi2_label04, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (S600regi2_label04), TRUE);

  S600regi2_spinbutton2_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  S600regi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (S600regi2_spinbutton2);
  gtk_table_attach (GTK_TABLE (table44), S600regi2_spinbutton2, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi2_spinbutton1_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  S600regi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (S600regi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (S600regi2_spinbutton1);
  gtk_table_attach (GTK_TABLE (table44), S600regi2_spinbutton1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  S600regi2_hbox1 = GTK_DIALOG (S600regi2_dialog)->action_area;
  gtk_widget_show (S600regi2_hbox1);
  gtk_container_set_border_width (GTK_CONTAINER (S600regi2_hbox1), 5);

  hbuttonbox18 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox18);
  gtk_box_pack_start (GTK_BOX (S600regi2_hbox1), hbuttonbox18, TRUE, FALSE, 0);

  S600regi2_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (S600regi2_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox18), S600regi2_ok_button);
  GTK_WIDGET_SET_FLAGS (S600regi2_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) S600regi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) S600regi2_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (S600regi2_dialog, S600regi2_dialog, "S600regi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (S600regi2_dialog, S600regi2_vbox1, "S600regi2_vbox1");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_vbox2, "S600regi2_vbox2");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_label01, "S600regi2_label01");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, hbox27, "hbox27");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_drawingarea, "S600regi2_drawingarea");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, vbox69, "vbox69");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, vbox70, "vbox70");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_label02, "S600regi2_label02");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, table44, "table44");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_label03, "S600regi2_label03");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_label04, "S600regi2_label04");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_spinbutton2, "S600regi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_spinbutton1, "S600regi2_spinbutton1");
  GLADE_HOOKUP_OBJECT_NO_REF (S600regi2_dialog, S600regi2_hbox1, "S600regi2_hbox1");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, hbuttonbox18, "hbuttonbox18");
  GLADE_HOOKUP_OBJECT (S600regi2_dialog, S600regi2_ok_button, "S600regi2_ok_button");

  gtk_widget_grab_focus (S600regi2_ok_button);
  gtk_widget_grab_default (S600regi2_ok_button);
  return S600regi2_dialog;
}

GtkWidget*
create_autopower_dialog (void)
{
  GtkWidget *autopower_dialog;
  GtkWidget *autopower_vbox1;
  GtkWidget *table45;
  GtkWidget *autopower_label;
  GtkWidget *autopower_labe2;
  GtkWidget *autopower_combo2;
  GtkWidget *autopower_combo1;
  GtkWidget *hseparator28;
  GtkWidget *autopower_hbuttonbox1;
  GtkWidget *autopower_button1;
  GtkWidget *autopower_button2;

  autopower_dialog = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  /* LUM_IDD_AUTOPOWER */
  gtk_window_set_title (GTK_WINDOW (autopower_dialog), _("Auto Power Settings"));
  gtk_window_set_modal (GTK_WINDOW (autopower_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (autopower_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (autopower_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  autopower_vbox1 = gtk_vbox_new (FALSE, 5);
  gtk_widget_show (autopower_vbox1);
  gtk_container_add (GTK_CONTAINER (autopower_dialog), autopower_vbox1);
  gtk_container_set_border_width (GTK_CONTAINER (autopower_vbox1), 5);

  table45 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table45);
  gtk_box_pack_start (GTK_BOX (autopower_vbox1), table45, FALSE, FALSE, 0);
  gtk_table_set_row_spacings (GTK_TABLE (table45), 3);
  gtk_table_set_col_spacings (GTK_TABLE (table45), 3);

  /* LUM_IDD_AUTOPOWER_IDC_STT_AUTOPOWER_ON */
  autopower_label = gtk_label_new (_("Auto Power On:"));
  gtk_widget_show (autopower_label);
  gtk_table_attach (GTK_TABLE (table45), autopower_label, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (autopower_label), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (autopower_label), 0, 0.5);

  /* LUM_IDD_AUTOPOWER_IDC_STT_AUTOPOWER_OFF */
  autopower_labe2 = gtk_label_new (_("Auto Power Off:"));
  gtk_widget_show (autopower_labe2);
  gtk_table_attach (GTK_TABLE (table45), autopower_labe2, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (autopower_labe2), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (autopower_labe2), 0, 0.5);

  autopower_combo2 = gtk_combo_box_new_text ();
  gtk_widget_show (autopower_combo2);
  gtk_table_attach (GTK_TABLE (table45), autopower_combo2, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  autopower_combo1 = gtk_combo_box_new_text ();
  gtk_widget_show (autopower_combo1);
  gtk_table_attach (GTK_TABLE (table45), autopower_combo1, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);

  hseparator28 = gtk_hseparator_new ();
  gtk_widget_show (hseparator28);
  gtk_box_pack_start (GTK_BOX (autopower_vbox1), hseparator28, FALSE, FALSE, 0);

  autopower_hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_show (autopower_hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (autopower_vbox1), autopower_hbuttonbox1, FALSE, FALSE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (autopower_hbuttonbox1), GTK_BUTTONBOX_SPREAD);
  gtk_box_set_spacing (GTK_BOX (autopower_hbuttonbox1), 30);

  /* LUM_IDD_GENERAL_RAD_2_IDOK */
  autopower_button1 = gtk_button_new_with_mnemonic (_("Send"));
  gtk_widget_show (autopower_button1);
  gtk_container_add (GTK_CONTAINER (autopower_hbuttonbox1), autopower_button1);
  GTK_WIDGET_SET_FLAGS (autopower_button1, GTK_CAN_DEFAULT);

  /* LUM_IDD_MESSAGEBOX_IDCANCEL */
  autopower_button2 = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (autopower_button2);
  gtk_container_add (GTK_CONTAINER (autopower_hbuttonbox1), autopower_button2);
  GTK_WIDGET_SET_FLAGS (autopower_button2, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) autopower_dialog, "destroy",
  G_CALLBACK (on_autopower_dialog_destroy),
  NULL);
  g_signal_connect ((gpointer) autopower_dialog, "delete_event",
  G_CALLBACK (on_autopower_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) autopower_button1, "clicked",
  G_CALLBACK (on_autopower_send_button_clicked),
  NULL);
  g_signal_connect ((gpointer) autopower_button2, "clicked",
  G_CALLBACK (on_autopower_cancel_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (autopower_dialog, autopower_dialog, "autopower_dialog");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_vbox1, "autopower_vbox1");
  GLADE_HOOKUP_OBJECT (autopower_dialog, table45, "table45");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_label, "autopower_label");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_labe2, "autopower_labe2");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_combo2, "autopower_combo2");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_combo1, "autopower_combo1");
  GLADE_HOOKUP_OBJECT (autopower_dialog, hseparator28, "hseparator28");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_hbuttonbox1, "autopower_hbuttonbox1");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_button1, "autopower_button1");
  GLADE_HOOKUP_OBJECT (autopower_dialog, autopower_button2, "autopower_button2");

  gtk_widget_grab_focus (autopower_button1);
  gtk_widget_grab_default (autopower_button1);
  return autopower_dialog;
}

GtkWidget*
create_cleaning_dialog (void)
{
  GtkWidget *cleaning_dialog;
  GtkWidget *cleaning_vbox1;
  GtkWidget *cleaning_vbox2;
  GtkWidget *cleaning_label1;
  GtkWidget *cleaning_hbox1;
  GtkWidget *vbox124;
  GtkWidget *cleaning_label2;
  GtkWidget *cleaning_vbox3;
  GtkWidget *cleaning_radiobutton1;
  GSList *cleaning_radiobutton1_group = NULL;
  GtkWidget *cleaning_radiobutton2;
  GtkWidget *cleaning_radiobutton3;
  GtkWidget *cleaning_label3;
  GtkWidget *hseparator29;
  GtkWidget *cleaning_hbuttonbox1;
  GtkWidget *cleaning_button1;
  GtkWidget *cleaning_button2;

  cleaning_dialog = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  /* LUM_IDD_CLEAN */
  gtk_window_set_title (GTK_WINDOW (cleaning_dialog), _("Print Head Cleaning"));
  gtk_window_set_modal (GTK_WINDOW (cleaning_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (cleaning_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (cleaning_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  cleaning_vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (cleaning_vbox1);
  gtk_container_add (GTK_CONTAINER (cleaning_dialog), cleaning_vbox1);
  gtk_container_set_border_width (GTK_CONTAINER (cleaning_vbox1), 5);

  cleaning_vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (cleaning_vbox2);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox1), cleaning_vbox2, FALSE, FALSE, 0);

  cleaning_label1 = gtk_label_new (_("*"));
  gtk_widget_show (cleaning_label1);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox2), cleaning_label1, FALSE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (cleaning_label1), 0.05, 0.5);

  cleaning_hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (cleaning_hbox1);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox2), cleaning_hbox1, FALSE, FALSE, 0);

  vbox124 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox124);
  gtk_box_pack_start (GTK_BOX (cleaning_hbox1), vbox124, TRUE, FALSE, 0);

  cleaning_label2 = gtk_label_new (_("*"));
  gtk_widget_show (cleaning_label2);
  gtk_box_pack_start (GTK_BOX (vbox124), cleaning_label2, FALSE, FALSE, 10);
  gtk_label_set_justify (GTK_LABEL (cleaning_label2), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (cleaning_label2), 7.45058e-09, 7.45058e-09);

  cleaning_vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (cleaning_vbox3);
  gtk_box_pack_start (GTK_BOX (cleaning_hbox1), cleaning_vbox3, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (cleaning_vbox3), 5);

  /* LUM_IDS_CLEAN_ITEM_ALL */
  cleaning_radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("All Colors"));
  gtk_widget_show (cleaning_radiobutton1);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox3), cleaning_radiobutton1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (cleaning_radiobutton1), cleaning_radiobutton1_group);
  cleaning_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (cleaning_radiobutton1));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (cleaning_radiobutton1), TRUE);

  /* LUM_IDS_CLEAN_ITEM_BLACK */
  cleaning_radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("Black"));
  gtk_widget_show (cleaning_radiobutton2);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox3), cleaning_radiobutton2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (cleaning_radiobutton2), cleaning_radiobutton1_group);
  cleaning_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (cleaning_radiobutton2));

  /* LUM_IDS_CLEAN_ITEM_COLOR */
  cleaning_radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, _("Color"));
  gtk_widget_show (cleaning_radiobutton3);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox3), cleaning_radiobutton3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (cleaning_radiobutton3), cleaning_radiobutton1_group);
  cleaning_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (cleaning_radiobutton3));

  cleaning_label3 = gtk_label_new (_("*"));
  gtk_widget_show (cleaning_label3);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox2), cleaning_label3, FALSE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (cleaning_label3), 0.05, 0.5);

  hseparator29 = gtk_hseparator_new ();
  gtk_widget_show (hseparator29);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox1), hseparator29, FALSE, FALSE, 0);

  cleaning_hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_show (cleaning_hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (cleaning_vbox1), cleaning_hbuttonbox1, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (cleaning_hbuttonbox1), 5);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (cleaning_hbuttonbox1), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (cleaning_hbuttonbox1), 30);

  /* LUM_IDD_BITMAPMESSAGE_IDOK */
  cleaning_button1 = gtk_button_new_with_mnemonic (_("Execute"));
  gtk_widget_show (cleaning_button1);
  gtk_container_add (GTK_CONTAINER (cleaning_hbuttonbox1), cleaning_button1);
  GTK_WIDGET_SET_FLAGS (cleaning_button1, GTK_CAN_DEFAULT);

  /* LUM_IDD_MESSAGEBOX_IDCANCEL */
  cleaning_button2 = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (cleaning_button2);
  gtk_container_add (GTK_CONTAINER (cleaning_hbuttonbox1), cleaning_button2);
  GTK_WIDGET_SET_FLAGS (cleaning_button2, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) cleaning_dialog, "destroy",
  G_CALLBACK (on_cleaning_dialog_destroy),
  NULL);
  g_signal_connect ((gpointer) cleaning_dialog, "delete_event",
  G_CALLBACK (on_cleaning_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) cleaning_radiobutton1, "toggled",
  G_CALLBACK (on_cleaning_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) cleaning_radiobutton2, "toggled",
  G_CALLBACK (on_cleaning_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) cleaning_radiobutton3, "toggled",
  G_CALLBACK (on_cleaning_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) cleaning_button1, "clicked",
  G_CALLBACK (on_cleaning_execute_button_clicked),
  NULL);
  g_signal_connect ((gpointer) cleaning_button2, "clicked",
  G_CALLBACK (on_cleaning_cancel_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (cleaning_dialog, cleaning_dialog, "cleaning_dialog");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_vbox1, "cleaning_vbox1");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_vbox2, "cleaning_vbox2");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_label1, "cleaning_label1");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_hbox1, "cleaning_hbox1");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, vbox124, "vbox124");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_label2, "cleaning_label2");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_vbox3, "cleaning_vbox3");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_radiobutton1, "cleaning_radiobutton1");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_radiobutton2, "cleaning_radiobutton2");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_radiobutton3, "cleaning_radiobutton3");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_label3, "cleaning_label3");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, hseparator29, "hseparator29");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_hbuttonbox1, "cleaning_hbuttonbox1");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_button1, "cleaning_button1");
  GLADE_HOOKUP_OBJECT (cleaning_dialog, cleaning_button2, "cleaning_button2");

  gtk_widget_grab_focus (cleaning_button1);
  gtk_widget_grab_default (cleaning_button1);
  return cleaning_dialog;
}

GtkWidget*
create_mediaborder_dialog (void)
{
  GtkWidget *mediaborder_dialog;
  GtkWidget *vbox77;
  GtkWidget *vbox78;
  GtkWidget *mediaborder_dialog_label;
  GtkWidget *label99;
  GtkWidget *mediaborder_dialog_combo;
  GtkWidget *mediaborder_dialog_alert_label;
  GtkWidget *hbox34;
  GtkWidget *hbuttonbox20;
  GtkWidget *mediaborder_dialog_ok_button;
  GtkWidget *mediaborder_dialog_cancel_button;

  mediaborder_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (mediaborder_dialog), _("Change Media Type"));
  gtk_window_set_modal (GTK_WINDOW (mediaborder_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (mediaborder_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (mediaborder_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox77 = GTK_DIALOG (mediaborder_dialog)->vbox;
  gtk_widget_show (vbox77);

  vbox78 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (vbox78);
  gtk_box_pack_start (GTK_BOX (vbox77), vbox78, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox78), 16);

  mediaborder_dialog_label = gtk_label_new (_("*"));
  gtk_widget_show (mediaborder_dialog_label);
  gtk_box_pack_start (GTK_BOX (vbox78), mediaborder_dialog_label, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (mediaborder_dialog_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (mediaborder_dialog_label), 7.45058e-09, 0.5);

  label99 = gtk_label_new (_("Available Media Types:"));
  gtk_widget_show (label99);
  gtk_box_pack_start (GTK_BOX (vbox78), label99, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label99), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label99), 7.45058e-09, 0.5);

  mediaborder_dialog_combo = gtk_combo_box_new_text ();
  gtk_widget_show (mediaborder_dialog_combo);
  gtk_box_pack_start (GTK_BOX (vbox78), mediaborder_dialog_combo, FALSE, FALSE, 0);

  mediaborder_dialog_alert_label = gtk_label_new (_("*"));
  gtk_widget_show (mediaborder_dialog_alert_label);
  gtk_box_pack_start (GTK_BOX (vbox78), mediaborder_dialog_alert_label, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (mediaborder_dialog_alert_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (mediaborder_dialog_alert_label), 7.45058e-09, 0.5);

  hbox34 = GTK_DIALOG (mediaborder_dialog)->action_area;
  gtk_widget_show (hbox34);
  gtk_container_set_border_width (GTK_CONTAINER (hbox34), 5);

  hbuttonbox20 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox20);
  gtk_box_pack_start (GTK_BOX (hbox34), hbuttonbox20, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox20), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox20), 0);

  mediaborder_dialog_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (mediaborder_dialog_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox20), mediaborder_dialog_ok_button);
  GTK_WIDGET_SET_FLAGS (mediaborder_dialog_ok_button, GTK_CAN_DEFAULT);

  mediaborder_dialog_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (mediaborder_dialog_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox20), mediaborder_dialog_cancel_button);
  GTK_WIDGET_SET_FLAGS (mediaborder_dialog_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) mediaborder_dialog, "delete_event",
                    G_CALLBACK (on_mediaborder_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) mediaborder_dialog_combo, "changed",
                    G_CALLBACK (on_mediaborder_dialog_combo_changed),
                    NULL);
  g_signal_connect ((gpointer) mediaborder_dialog_ok_button, "clicked",
                    G_CALLBACK (on_mediaborder_dialog_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) mediaborder_dialog_cancel_button, "clicked",
                    G_CALLBACK (on_mediaborder_dialog_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mediaborder_dialog, mediaborder_dialog, "mediaborder_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (mediaborder_dialog, vbox77, "vbox77");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, vbox78, "vbox78");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, mediaborder_dialog_label, "mediaborder_dialog_label");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, label99, "label99");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, mediaborder_dialog_combo, "mediaborder_dialog_combo");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, mediaborder_dialog_alert_label, "mediaborder_dialog_alert_label");
  GLADE_HOOKUP_OBJECT_NO_REF (mediaborder_dialog, hbox34, "hbox34");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, hbuttonbox20, "hbuttonbox20");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, mediaborder_dialog_ok_button, "mediaborder_dialog_ok_button");
  GLADE_HOOKUP_OBJECT (mediaborder_dialog, mediaborder_dialog_cancel_button, "mediaborder_dialog_cancel_button");

  return mediaborder_dialog;
}

GtkWidget*
create_drylevel3_dialog (void)
{
  GtkWidget *drylevel3_dialog;
  GtkWidget *vbox80;
  GtkWidget *vbox127;
  GtkWidget *drylevel3_abrasion_checkbutton;
  GtkWidget *drylevel3_manhead_checkbutton;
  GtkWidget *hseparator38;
  GtkWidget *vbox81;
  GtkWidget *vbox82;
  GtkWidget *hbox35;
  GtkWidget *label100;
  GtkWidget *vbox83;
  GtkWidget *hbox36;
  GtkWidget *label101;
  GtkWidget *label102;
  GtkWidget *hbox37;
  GtkWidget *drylevel3_radiobutton1;
  GSList *drylevel3_radiobutton1_group = NULL;
  GtkWidget *drylevel3_radiobutton2;
  GtkWidget *drylevel3_radiobutton3;
  GtkWidget *hbox38;
  GtkWidget *hbox39;
  GtkWidget *hbuttonbox21;
  GtkWidget *drylevel3_send_button;
  GtkWidget *drylevel3_cancel_button;
  GtkWidget *drylevel3_std_button;

  drylevel3_dialog = gtk_dialog_new ();
  /* LUM_IDS_MNT_CPT_CUSTOM */
  gtk_window_set_title (GTK_WINDOW (drylevel3_dialog), _("Custom Settings"));
  gtk_window_set_modal (GTK_WINDOW (drylevel3_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (drylevel3_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (drylevel3_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox80 = GTK_DIALOG (drylevel3_dialog)->vbox;
  gtk_widget_show (vbox80);

  vbox127 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox127);
  gtk_box_pack_start (GTK_BOX (vbox80), vbox127, TRUE, TRUE, 0);

  /* LUM_IDS_CUSTOM_CPT_PAPERGAP */
  drylevel3_abrasion_checkbutton = gtk_check_button_new_with_mnemonic (_("Prevent paper abrasion"));
  gtk_widget_show (drylevel3_abrasion_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox127), drylevel3_abrasion_checkbutton, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (drylevel3_abrasion_checkbutton), 5);

  /* LUM_IDS_CUSTOM_CPT_MANUALPHA */
  drylevel3_manhead_checkbutton = gtk_check_button_new_with_mnemonic (_("Align heads manually"));
  gtk_widget_show (drylevel3_manhead_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox127), drylevel3_manhead_checkbutton, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (drylevel3_manhead_checkbutton), 5);

  hseparator38 = gtk_hseparator_new ();
  gtk_widget_show (hseparator38);
  gtk_box_pack_start (GTK_BOX (vbox127), hseparator38, TRUE, TRUE, 0);

  vbox81 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox81);
  gtk_box_pack_start (GTK_BOX (vbox127), vbox81, TRUE, TRUE, 0);

  vbox82 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox82);
  gtk_box_pack_start (GTK_BOX (vbox81), vbox82, FALSE, FALSE, 0);

  hbox35 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox35);
  gtk_box_pack_start (GTK_BOX (vbox82), hbox35, FALSE, FALSE, 0);

  /* LUM_IDD_CUSTOM_IDC_STT_INKDRY */
  label100 = gtk_label_new (_("Ink Drying Wait Time:"));
  gtk_widget_show (label100);
  gtk_box_pack_start (GTK_BOX (hbox35), label100, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label100), GTK_JUSTIFY_CENTER);
  gtk_misc_set_padding (GTK_MISC (label100), 10, 0);

  vbox83 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox83);
  gtk_box_pack_start (GTK_BOX (hbox35), vbox83, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox83), 10);

  hbox36 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox36);
  gtk_box_pack_start (GTK_BOX (vbox83), hbox36, TRUE, TRUE, 0);

  /* LUM_IDD_CUSTOM_IDC_STT_INKDRY_SPEEDY */
  label101 = gtk_label_new (_("Short"));
  gtk_widget_show (label101);
  gtk_box_pack_start (GTK_BOX (hbox36), label101, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label101), GTK_JUSTIFY_CENTER);

  /* LUM_IDD_CUSTOM_IDC_STT_INKDRY_DRYNESS */
  label102 = gtk_label_new (_("Long"));
  gtk_widget_show (label102);
  gtk_box_pack_start (GTK_BOX (hbox36), label102, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label102), GTK_JUSTIFY_CENTER);

  hbox37 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox37);
  gtk_box_pack_start (GTK_BOX (vbox83), hbox37, FALSE, FALSE, 0);

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_5 */
  drylevel3_radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("1"));
  gtk_widget_show (drylevel3_radiobutton1);
  gtk_box_pack_start (GTK_BOX (hbox37), drylevel3_radiobutton1, FALSE, FALSE, 3);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel3_radiobutton1), drylevel3_radiobutton1_group);
  drylevel3_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel3_radiobutton1));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (drylevel3_radiobutton1), TRUE);

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_4 */
  drylevel3_radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("2"));
  gtk_widget_show (drylevel3_radiobutton2);
  gtk_box_pack_start (GTK_BOX (hbox37), drylevel3_radiobutton2, FALSE, FALSE, 3);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel3_radiobutton2), drylevel3_radiobutton1_group);
  drylevel3_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel3_radiobutton2));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_3 */
  drylevel3_radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, _("3"));
  gtk_widget_show (drylevel3_radiobutton3);
  gtk_box_pack_start (GTK_BOX (hbox37), drylevel3_radiobutton3, FALSE, FALSE, 3);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel3_radiobutton3), drylevel3_radiobutton1_group);
  drylevel3_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel3_radiobutton3));

  hbox38 = GTK_DIALOG (drylevel3_dialog)->action_area;
  gtk_widget_show (hbox38);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbox38), GTK_BUTTONBOX_END);

  hbox39 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox39);
  gtk_container_add (GTK_CONTAINER (hbox38), hbox39);

  hbuttonbox21 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox21);
  gtk_box_pack_start (GTK_BOX (hbox39), hbuttonbox21, FALSE, FALSE, 0);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox21), 8);

  /* LUM_IDD_GENERAL_RAD_2_IDOK */
  drylevel3_send_button = gtk_button_new_with_mnemonic (_("Send"));
  gtk_widget_show (drylevel3_send_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox21), drylevel3_send_button);
  GTK_WIDGET_SET_FLAGS (drylevel3_send_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_MESSAGEBOX_IDCANCEL */
  drylevel3_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (drylevel3_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox21), drylevel3_cancel_button);
  GTK_WIDGET_SET_FLAGS (drylevel3_cancel_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_MAIN_DEFAULT */
  drylevel3_std_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (drylevel3_std_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox21), drylevel3_std_button);
  GTK_WIDGET_SET_FLAGS (drylevel3_std_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) drylevel3_dialog, "delete_event",
  G_CALLBACK (on_drylevel_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) drylevel3_dialog, "destroy",
  G_CALLBACK (on_drylevel_dialog_destroy),
  NULL);
  g_signal_connect ((gpointer) drylevel3_radiobutton1, "toggled",
  G_CALLBACK (on_drylevel3_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel3_radiobutton2, "toggled",
  G_CALLBACK (on_drylevel3_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel3_radiobutton3, "toggled",
  G_CALLBACK (on_drylevel3_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel3_send_button, "clicked",
  G_CALLBACK (on_drylevel_send_button_clicked),
  NULL);
  g_signal_connect ((gpointer) drylevel3_cancel_button, "clicked",
  G_CALLBACK (on_drylevel_cancel_button_clicked),
  NULL);
  g_signal_connect ((gpointer) drylevel3_std_button, "clicked",
  G_CALLBACK (on_drylevel_std_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (drylevel3_dialog, drylevel3_dialog, "drylevel3_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (drylevel3_dialog, vbox80, "vbox80");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, vbox127, "vbox127");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_abrasion_checkbutton, "drylevel3_abrasion_checkbutton");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_manhead_checkbutton, "drylevel3_manhead_checkbutton");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, hseparator38, "hseparator38");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, vbox81, "vbox81");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, vbox82, "vbox82");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, hbox35, "hbox35");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, label100, "label100");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, vbox83, "vbox83");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, hbox36, "hbox36");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, label101, "label101");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, label102, "label102");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, hbox37, "hbox37");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_radiobutton1, "drylevel3_radiobutton1");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_radiobutton2, "drylevel3_radiobutton2");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_radiobutton3, "drylevel3_radiobutton3");
  GLADE_HOOKUP_OBJECT_NO_REF (drylevel3_dialog, hbox38, "hbox38");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, hbox39, "hbox39");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, hbuttonbox21, "hbuttonbox21");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_send_button, "drylevel3_send_button");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_cancel_button, "drylevel3_cancel_button");
  GLADE_HOOKUP_OBJECT (drylevel3_dialog, drylevel3_std_button, "drylevel3_std_button");

  gtk_widget_grab_focus (drylevel3_send_button);
  gtk_widget_grab_default (drylevel3_send_button);
  return drylevel3_dialog;
}

GtkWidget*
create_quiet_dialog (void)
{
  GtkWidget *quiet_dialog;
  GtkWidget *vbox84;
  GtkWidget *quiet_checkbutton;
  GtkWidget *hbox40;
  GtkWidget *hbox41;
  GtkWidget *hbuttonbox22;
  GtkWidget *quiet_send_button;
  GtkWidget *quiet_cancel_button;
  GtkWidget *quiet_std_button;

  quiet_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (quiet_dialog), _("Quiet Mode"));
  gtk_window_set_modal (GTK_WINDOW (quiet_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (quiet_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (quiet_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox84 = GTK_DIALOG (quiet_dialog)->vbox;
  gtk_widget_show (vbox84);

  quiet_checkbutton = gtk_check_button_new_with_mnemonic (_("Use quiet mode"));
  gtk_widget_show (quiet_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox84), quiet_checkbutton, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (quiet_checkbutton), 10);

  hbox40 = GTK_DIALOG (quiet_dialog)->action_area;
  gtk_widget_show (hbox40);
  gtk_container_set_border_width (GTK_CONTAINER (hbox40), 10);

  hbox41 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox41);
  gtk_box_pack_start (GTK_BOX (hbox40), hbox41, TRUE, TRUE, 0);

  hbuttonbox22 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox22);
  gtk_box_pack_start (GTK_BOX (hbox41), hbuttonbox22, FALSE, FALSE, 0);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox22), 0);

  quiet_send_button = gtk_button_new_with_mnemonic (_("Send"));
  gtk_widget_show (quiet_send_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox22), quiet_send_button);
  GTK_WIDGET_SET_FLAGS (quiet_send_button, GTK_CAN_DEFAULT);

  quiet_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (quiet_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox22), quiet_cancel_button);
  GTK_WIDGET_SET_FLAGS (quiet_cancel_button, GTK_CAN_DEFAULT);

  quiet_std_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (quiet_std_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox22), quiet_std_button);
  GTK_WIDGET_SET_FLAGS (quiet_std_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) quiet_dialog, "delete_event",
                    G_CALLBACK (on_quiet_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) quiet_dialog, "destroy",
                    G_CALLBACK (on_quiet_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) quiet_send_button, "clicked",
                    G_CALLBACK (on_quiet_send_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) quiet_cancel_button, "clicked",
                    G_CALLBACK (on_quiet_cancel_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) quiet_std_button, "clicked",
                    G_CALLBACK (on_quiet_std_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (quiet_dialog, quiet_dialog, "quiet_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (quiet_dialog, vbox84, "vbox84");
  GLADE_HOOKUP_OBJECT (quiet_dialog, quiet_checkbutton, "quiet_checkbutton");
  GLADE_HOOKUP_OBJECT_NO_REF (quiet_dialog, hbox40, "hbox40");
  GLADE_HOOKUP_OBJECT (quiet_dialog, hbox41, "hbox41");
  GLADE_HOOKUP_OBJECT (quiet_dialog, hbuttonbox22, "hbuttonbox22");
  GLADE_HOOKUP_OBJECT (quiet_dialog, quiet_send_button, "quiet_send_button");
  GLADE_HOOKUP_OBJECT (quiet_dialog, quiet_cancel_button, "quiet_cancel_button");
  GLADE_HOOKUP_OBJECT (quiet_dialog, quiet_std_button, "quiet_std_button");

  gtk_widget_grab_focus (quiet_send_button);
  gtk_widget_grab_default (quiet_send_button);
  return quiet_dialog;
}

GtkWidget*
create_F900regi_dialog (void)
{
  GtkWidget *F900regi_dialog;
  GtkWidget *vbox85;
  GtkWidget *vbox86;
  GtkWidget *label103;
  GtkWidget *hbox42;
  GtkWidget *F900regi_drawingarea;
  GtkWidget *vbox87;
  GtkWidget *table49;
  GtkObject *F900regi_spinbutton1_adj;
  GtkWidget *F900regi_spinbutton1;
  GtkObject *F900regi_spinbutton2_adj;
  GtkWidget *F900regi_spinbutton2;
  GtkObject *F900regi_spinbutton3_adj;
  GtkWidget *F900regi_spinbutton3;
  GtkObject *F900regi_spinbutton4_adj;
  GtkWidget *F900regi_spinbutton4;
  GtkObject *F900regi_spinbutton5_adj;
  GtkWidget *F900regi_spinbutton5;
  GtkWidget *label104;
  GtkWidget *label105;
  GtkWidget *label106;
  GtkWidget *label107;
  GtkWidget *label108;
  GtkWidget *label109;
  GtkWidget *hseparator33;
  GtkWidget *table50;
  GtkObject *F900regi_spinbutton6_adj;
  GtkWidget *F900regi_spinbutton6;
  GtkWidget *label110;
  GtkWidget *label111;
  GtkWidget *hbox43;
  GtkWidget *hbuttonbox23;
  GtkWidget *button1;

  F900regi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (F900regi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (F900regi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (F900regi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (F900regi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox85 = GTK_DIALOG (F900regi_dialog)->vbox;
  gtk_widget_show (vbox85);

  vbox86 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox86);
  gtk_box_pack_start (GTK_BOX (vbox85), vbox86, TRUE, TRUE, 0);

  label103 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to F."));
  gtk_widget_show (label103);
  gtk_box_pack_start (GTK_BOX (vbox86), label103, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label103), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (label103), 5, 5);

  hbox42 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox42);
  gtk_box_pack_start (GTK_BOX (vbox86), hbox42, TRUE, TRUE, 0);

  F900regi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (F900regi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox42), F900regi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (F900regi_drawingarea, 100, 144);
  gtk_widget_set_events (F900regi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox87 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox87);
  gtk_box_pack_start (GTK_BOX (hbox42), vbox87, TRUE, TRUE, 0);

  table49 = gtk_table_new (6, 2, FALSE);
  gtk_widget_show (table49);
  gtk_box_pack_start (GTK_BOX (vbox87), table49, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table49), 5);

  F900regi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  F900regi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (F900regi_spinbutton1_adj), 1, 0);
  gtk_widget_show (F900regi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table49), F900regi_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel3_radiobutton3), drylevel3_group_group);
  drylevel3_group_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel3_radiobutton3));

  F900regi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  F900regi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (F900regi_spinbutton2_adj), 1, 0);
  gtk_widget_show (F900regi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table49), F900regi_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  F900regi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  F900regi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (F900regi_spinbutton3_adj), 1, 0);
  gtk_widget_show (F900regi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table49), F900regi_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  F900regi_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  F900regi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (F900regi_spinbutton4_adj), 1, 0);
  gtk_widget_show (F900regi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table49), F900regi_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  F900regi_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  F900regi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (F900regi_spinbutton5_adj), 1, 0);
  gtk_widget_show (F900regi_spinbutton5);
  gtk_table_attach (GTK_TABLE (table49), F900regi_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label104 = gtk_label_new (_("Column A:"));
  gtk_widget_show (label104);
  gtk_table_attach (GTK_TABLE (table49), label104, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label104), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label104), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label104), 0, 0.5);

  label105 = gtk_label_new (_("Column B:"));
  gtk_widget_show (label105);
  gtk_table_attach (GTK_TABLE (table49), label105, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label105), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label105), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label105), 0, 0.5);

  label106 = gtk_label_new (_("Column C:"));
  gtk_widget_show (label106);
  gtk_table_attach (GTK_TABLE (table49), label106, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label106), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label106), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label106), 0, 0.5);

  label107 = gtk_label_new (_("Column D:"));
  gtk_widget_show (label107);
  gtk_table_attach (GTK_TABLE (table49), label107, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label107), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label107), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label107), 0, 0.5);

  label108 = gtk_label_new (_("Column E:"));
  gtk_widget_show (label108);
  gtk_table_attach (GTK_TABLE (table49), label108, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label108), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label108), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label108), 0, 0.5);

  label109 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (label109);
  gtk_table_attach (GTK_TABLE (table49), label109, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label109), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label109), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label109), 0, 0.5);


  hseparator33 = gtk_hseparator_new ();
  gtk_widget_show (hseparator33);
  gtk_box_pack_start (GTK_BOX (vbox87), hseparator33, TRUE, TRUE, 0);

  table50 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table50);
  gtk_box_pack_start (GTK_BOX (vbox87), table50, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table50), 5);

  F900regi_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  F900regi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (F900regi_spinbutton6_adj), 1, 0);
  gtk_widget_show (F900regi_spinbutton6);
  gtk_table_attach (GTK_TABLE (table50), F900regi_spinbutton6, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label110 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (label110);
  gtk_table_attach (GTK_TABLE (table50), label110, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label110), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (label110), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label110), 0, 0.5);

  label111 = gtk_label_new (_("Column F:"));
  gtk_widget_show (label111);
  gtk_table_attach (GTK_TABLE (table50), label111, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (label111), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label111), 0, 0.5);

  hbox43 = GTK_DIALOG (F900regi_dialog)->action_area;
  gtk_widget_show (hbox43);
  gtk_container_set_border_width (GTK_CONTAINER (hbox43), 5);

  hbuttonbox23 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox23);
  gtk_box_pack_start (GTK_BOX (hbox43), hbuttonbox23, TRUE, FALSE, 0);

  button1 = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (button1);
  gtk_container_add (GTK_CONTAINER (hbuttonbox23), button1);
  GTK_WIDGET_SET_FLAGS (button1, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) F900regi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) F900regi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) F900regi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) F900regi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) F900regi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (F900regi_dialog, F900regi_dialog, "F900regi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (F900regi_dialog, vbox85, "vbox85");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, vbox86, "vbox86");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label103, "label103");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, hbox42, "hbox42");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_drawingarea, "F900regi_drawingarea");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, vbox87, "vbox87");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, table49, "table49");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_spinbutton1, "F900regi_spinbutton1");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_spinbutton2, "F900regi_spinbutton2");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_spinbutton3, "F900regi_spinbutton3");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_spinbutton4, "F900regi_spinbutton4");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_spinbutton5, "F900regi_spinbutton5");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label104, "label104");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label105, "label105");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label106, "label106");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label107, "label107");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label108, "label108");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label109, "label109");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, hseparator33, "hseparator33");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, table50, "table50");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, F900regi_spinbutton6, "F900regi_spinbutton6");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label110, "label110");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, label111, "label111");
  GLADE_HOOKUP_OBJECT_NO_REF (F900regi_dialog, hbox43, "hbox43");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, hbuttonbox23, "hbuttonbox23");
  GLADE_HOOKUP_OBJECT (F900regi_dialog, button1, "button1");

  gtk_widget_grab_focus (button1);
  gtk_widget_grab_default (button1);
  return F900regi_dialog;
}

GtkWidget*
create_drylevel5_dialog (void)
{
  GtkWidget *drylevel5_dialog;
  GtkWidget *vbox88;
  GtkWidget *vbox126;
  GtkWidget *drylevel5_abrasion_checkbutton;
  GtkWidget *drylevel5_manhead_checkbutton;
  GtkWidget *hseparator37;
  GtkWidget *vbox89;
  GtkWidget *vbox90;
  GtkWidget *hbox44;
  GtkWidget *label112;
  GtkWidget *vbox91;
  GtkWidget *hbox45;
  GtkWidget *label113;
  GtkWidget *label114;
  GtkWidget *hbox46;
  GtkWidget *drylevel5_radiobutton1;
  GSList *drylevel5_radiobutton1_group = NULL;
  GtkWidget *drylevel5_radiobutton2;
  GtkWidget *drylevel5_radiobutton3;
  GtkWidget *drylevel5_radiobutton4;
  GtkWidget *drylevel5_radiobutton5;
  GtkWidget *hbox47;
  GtkWidget *hbox48;
  GtkWidget *hbuttonbox24;
  GtkWidget *drylevel5_send_button;
  GtkWidget *drylevel5_cancel_button;
  GtkWidget *drylevel5_std_button;

  drylevel5_dialog = gtk_dialog_new ();
  /* LUM_IDS_MNT_CPT_CUSTOM */
  gtk_window_set_title (GTK_WINDOW (drylevel5_dialog), _("Custom Settings"));
  gtk_window_set_modal (GTK_WINDOW (drylevel5_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (drylevel5_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (drylevel5_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox88 = GTK_DIALOG (drylevel5_dialog)->vbox;
  gtk_widget_show (vbox88);

  vbox126 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox126);
  gtk_box_pack_start (GTK_BOX (vbox88), vbox126, TRUE, TRUE, 0);

  /* LUM_IDS_CUSTOM_CPT_PAPERGAP */
  drylevel5_abrasion_checkbutton = gtk_check_button_new_with_mnemonic (_("Prevent paper abrasion"));
  gtk_widget_show (drylevel5_abrasion_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox126), drylevel5_abrasion_checkbutton, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (drylevel5_abrasion_checkbutton), 5);

  /* LUM_IDS_CUSTOM_CPT_MANUALPHA */
  drylevel5_manhead_checkbutton = gtk_check_button_new_with_mnemonic (_("Align heads manually"));
  gtk_widget_show (drylevel5_manhead_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox126), drylevel5_manhead_checkbutton, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (drylevel5_manhead_checkbutton), 5);

  hseparator37 = gtk_hseparator_new ();
  gtk_widget_show (hseparator37);
  gtk_box_pack_start (GTK_BOX (vbox126), hseparator37, TRUE, TRUE, 0);

  vbox89 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox89);
  gtk_box_pack_start (GTK_BOX (vbox126), vbox89, TRUE, TRUE, 0);

  vbox90 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox90);
  gtk_box_pack_start (GTK_BOX (vbox89), vbox90, FALSE, FALSE, 0);

  hbox44 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox44);
  gtk_box_pack_start (GTK_BOX (vbox90), hbox44, FALSE, FALSE, 0);

  /* LUM_IDD_CUSTOM_IDC_STT_INKDRY */
  label112 = gtk_label_new (_("Ink Drying Wait Time:"));
  gtk_widget_show (label112);
  gtk_box_pack_start (GTK_BOX (hbox44), label112, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label112), GTK_JUSTIFY_CENTER);
  gtk_misc_set_padding (GTK_MISC (label112), 10, 0);

  vbox91 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox91);
  gtk_box_pack_start (GTK_BOX (hbox44), vbox91, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox91), 10);

  hbox45 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox45);
  gtk_box_pack_start (GTK_BOX (vbox91), hbox45, TRUE, TRUE, 0);

  /* LUM_IDD_CUSTOM_IDC_STT_INKDRY_SPEEDY */
  label113 = gtk_label_new (_("Short"));
  gtk_widget_show (label113);
  gtk_box_pack_start (GTK_BOX (hbox45), label113, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label113), GTK_JUSTIFY_CENTER);

  /* LUM_IDD_CUSTOM_IDC_STT_INKDRY_DRYNESS */
  label114 = gtk_label_new (_("Long"));
  gtk_widget_show (label114);
  gtk_box_pack_start (GTK_BOX (hbox45), label114, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label114), GTK_JUSTIFY_CENTER);

  hbox46 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox46);
  gtk_box_pack_start (GTK_BOX (vbox91), hbox46, FALSE, FALSE, 0);

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_5 */
  drylevel5_radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("1"));
  gtk_widget_show (drylevel5_radiobutton1);
  gtk_box_pack_start (GTK_BOX (hbox46), drylevel5_radiobutton1, FALSE, FALSE, 3);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel5_radiobutton1), drylevel5_radiobutton1_group);
  drylevel5_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel5_radiobutton1));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_4 */
  drylevel5_radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("2"));
  gtk_widget_show (drylevel5_radiobutton2);
  gtk_box_pack_start (GTK_BOX (hbox46), drylevel5_radiobutton2, FALSE, FALSE, 3);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel5_radiobutton2), drylevel5_radiobutton1_group);
  drylevel5_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel5_radiobutton2));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_3 */
  drylevel5_radiobutton3 = gtk_radio_button_new_with_mnemonic (NULL, _("3"));
  gtk_widget_show (drylevel5_radiobutton3);
  gtk_box_pack_start (GTK_BOX (hbox46), drylevel5_radiobutton3, FALSE, FALSE, 3);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel5_radiobutton3), drylevel5_radiobutton1_group);
  drylevel5_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel5_radiobutton3));
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (drylevel5_radiobutton3), TRUE);

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_2 */
  drylevel5_radiobutton4 = gtk_radio_button_new_with_mnemonic (NULL, _("4"));
  gtk_widget_show (drylevel5_radiobutton4);
  gtk_box_pack_start (GTK_BOX (hbox46), drylevel5_radiobutton4, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel5_radiobutton4), drylevel5_radiobutton1_group);
  drylevel5_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel5_radiobutton4));

  /* LUM_IDD_CUSTOMQUALITY_IDC_STT_CUSTOMQUALITY_1 */
  drylevel5_radiobutton5 = gtk_radio_button_new_with_mnemonic (NULL, _("5"));
  gtk_widget_show (drylevel5_radiobutton5);
  gtk_box_pack_start (GTK_BOX (hbox46), drylevel5_radiobutton5, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel5_radiobutton5), drylevel5_radiobutton1_group);
  drylevel5_radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel5_radiobutton5));

  hbox47 = GTK_DIALOG (drylevel5_dialog)->action_area;
  gtk_widget_show (hbox47);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbox47), GTK_BUTTONBOX_END);

  hbox48 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox48);
  gtk_container_add (GTK_CONTAINER (hbox47), hbox48);

  hbuttonbox24 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox24);
  gtk_box_pack_start (GTK_BOX (hbox48), hbuttonbox24, FALSE, FALSE, 0);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox24), 8);

  /* LUM_IDD_GENERAL_RAD_2_IDOK */
  drylevel5_send_button = gtk_button_new_with_mnemonic (_("Send"));
  gtk_widget_show (drylevel5_send_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox24), drylevel5_send_button);
  GTK_WIDGET_SET_FLAGS (drylevel5_send_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_MESSAGEBOX_IDCANCEL */
  drylevel5_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (drylevel5_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox24), drylevel5_cancel_button);
  GTK_WIDGET_SET_FLAGS (drylevel5_cancel_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_PAG_MAIN_IDC_BTN_MAIN_DEFAULT */
  drylevel5_std_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (drylevel5_std_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox24), drylevel5_std_button);
  GTK_WIDGET_SET_FLAGS (drylevel5_std_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) drylevel5_dialog, "delete_event",
  G_CALLBACK (on_drylevel_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) drylevel5_dialog, "destroy",
  G_CALLBACK (on_drylevel_dialog_destroy),
  NULL);
  g_signal_connect ((gpointer) drylevel5_abrasion_checkbutton, "toggled",
  G_CALLBACK (on_drylevel5_abrasion_checkbutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel5_radiobutton1, "toggled",
  G_CALLBACK (on_drylevel5_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel5_radiobutton2, "toggled",
  G_CALLBACK (on_drylevel5_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel5_radiobutton3, "toggled",
  G_CALLBACK (on_drylevel5_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel5_radiobutton4, "toggled",
  G_CALLBACK (on_drylevel5_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel5_radiobutton5, "toggled",
  G_CALLBACK (on_drylevel5_radiobutton_toggled),
  NULL);
  g_signal_connect ((gpointer) drylevel5_send_button, "clicked",
  G_CALLBACK (on_drylevel_send_button_clicked),
  NULL);
  g_signal_connect ((gpointer) drylevel5_cancel_button, "clicked",
  G_CALLBACK (on_drylevel_cancel_button_clicked),
  NULL);
  g_signal_connect ((gpointer) drylevel5_std_button, "clicked",
  G_CALLBACK (on_drylevel_std_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (drylevel5_dialog, drylevel5_dialog, "drylevel5_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (drylevel5_dialog, vbox88, "vbox88");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, vbox126, "vbox126");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_abrasion_checkbutton, "drylevel5_abrasion_checkbutton");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_manhead_checkbutton, "drylevel5_manhead_checkbutton");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, hseparator37, "hseparator37");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, vbox89, "vbox89");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, vbox90, "vbox90");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, hbox44, "hbox44");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, label112, "label112");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, vbox91, "vbox91");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, hbox45, "hbox45");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, label113, "label113");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, label114, "label114");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, hbox46, "hbox46");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_radiobutton1, "drylevel5_radiobutton1");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_radiobutton2, "drylevel5_radiobutton2");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_radiobutton3, "drylevel5_radiobutton3");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_radiobutton4, "drylevel5_radiobutton4");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_radiobutton5, "drylevel5_radiobutton5");
  GLADE_HOOKUP_OBJECT_NO_REF (drylevel5_dialog, hbox47, "hbox47");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, hbox48, "hbox48");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, hbuttonbox24, "hbuttonbox24");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_send_button, "drylevel5_send_button");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_cancel_button, "drylevel5_cancel_button");
  GLADE_HOOKUP_OBJECT (drylevel5_dialog, drylevel5_std_button, "drylevel5_std_button");

  gtk_widget_grab_focus (drylevel5_send_button);
  gtk_widget_grab_default (drylevel5_send_button);
  return drylevel5_dialog;
}

GtkWidget*
create_ink_warning_dialog (void)
{
  GtkWidget *ink_warning_dialog;
  GtkWidget *vbox92;
  GtkWidget *vbox93;
  GtkWidget *ink_warning_checkbutton;
  GtkWidget *ink_warning_label1;
  GtkWidget *ink_warning_label2;
  GtkWidget *ink_warning_label3;
  GtkWidget *hbox49;
  GtkWidget *hbox50;
  GtkWidget *hbuttonbox25;
  GtkWidget *ink_warning_send_button;
  GtkWidget *ink_warning_cancel_button;
  GtkWidget *ink_warning_std_button;

  ink_warning_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (ink_warning_dialog), _("Low Ink Warning Setting"));
  gtk_window_set_modal (GTK_WINDOW (ink_warning_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (ink_warning_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (ink_warning_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox92 = GTK_DIALOG (ink_warning_dialog)->vbox;
  gtk_widget_show (vbox92);

  vbox93 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox93);
  gtk_box_pack_start (GTK_BOX (vbox92), vbox93, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox93), 10);

  ink_warning_checkbutton = gtk_check_button_new_with_mnemonic (_("Display low ink warning"));
  gtk_widget_show (ink_warning_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox93), ink_warning_checkbutton, FALSE, FALSE, 0);
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (ink_warning_checkbutton), TRUE);

  ink_warning_label1 = gtk_label_new (_("Read your printer manual for details about a low ink warning."));
  gtk_widget_show (ink_warning_label1);
  gtk_box_pack_start (GTK_BOX (vbox93), ink_warning_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ink_warning_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (ink_warning_label1), 0, 0);

  ink_warning_label2 = gtk_label_new (_("To ensure proper display of a low ink warning, the following operation is nrequired:n"));
  gtk_widget_show (ink_warning_label2);
  gtk_box_pack_start (GTK_BOX (vbox93), ink_warning_label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ink_warning_label2), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (ink_warning_label2), 0, 0);

  ink_warning_label3 = gtk_label_new (_("When you have replaced any ink tank with a new one, always click the Ink nCounter Reset button on the Maintenance tab of the printer driver and nselect the new ink tank."));
  gtk_widget_show (ink_warning_label3);
  gtk_box_pack_start (GTK_BOX (vbox93), ink_warning_label3, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ink_warning_label3), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (ink_warning_label3), 0, 0);

  hbox49 = GTK_DIALOG (ink_warning_dialog)->action_area;
  gtk_widget_show (hbox49);
  gtk_container_set_border_width (GTK_CONTAINER (hbox49), 10);

  hbox50 = gtk_hbox_new (TRUE, 0);
  gtk_widget_show (hbox50);
  gtk_box_pack_start (GTK_BOX (hbox49), hbox50, TRUE, TRUE, 0);

  hbuttonbox25 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox25);
  gtk_box_pack_start (GTK_BOX (hbox50), hbuttonbox25, FALSE, FALSE, 0);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox25), 0);

  ink_warning_send_button = gtk_button_new_with_mnemonic (_("Send"));
  gtk_widget_show (ink_warning_send_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox25), ink_warning_send_button);
  GTK_WIDGET_SET_FLAGS (ink_warning_send_button, GTK_CAN_DEFAULT);

  ink_warning_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (ink_warning_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox25), ink_warning_cancel_button);
  GTK_WIDGET_SET_FLAGS (ink_warning_cancel_button, GTK_CAN_DEFAULT);

  ink_warning_std_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (ink_warning_std_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox25), ink_warning_std_button);
  GTK_WIDGET_SET_FLAGS (ink_warning_std_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) ink_warning_dialog, "delete_event",
                    G_CALLBACK (on_ink_warning_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) ink_warning_dialog, "destroy",
                    G_CALLBACK (on_ink_warning_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) ink_warning_send_button, "clicked",
                    G_CALLBACK (on_ink_warning_send_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ink_warning_cancel_button, "clicked",
                    G_CALLBACK (on_ink_warning_cancel_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ink_warning_std_button, "clicked",
                    G_CALLBACK (on_ink_warning_std_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ink_warning_dialog, ink_warning_dialog, "ink_warning_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (ink_warning_dialog, vbox92, "vbox92");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, vbox93, "vbox93");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_checkbutton, "ink_warning_checkbutton");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_label1, "ink_warning_label1");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_label2, "ink_warning_label2");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_label3, "ink_warning_label3");
  GLADE_HOOKUP_OBJECT_NO_REF (ink_warning_dialog, hbox49, "hbox49");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, hbox50, "hbox50");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, hbuttonbox25, "hbuttonbox25");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_send_button, "ink_warning_send_button");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_cancel_button, "ink_warning_cancel_button");
  GLADE_HOOKUP_OBJECT (ink_warning_dialog, ink_warning_std_button, "ink_warning_std_button");

  gtk_widget_grab_focus (ink_warning_send_button);
  gtk_widget_grab_default (ink_warning_send_button);
  return ink_warning_dialog;
}

GtkWidget*
create_ink_reset_dialog (void)
{
  GtkWidget *ink_reset_dialog;
  GtkWidget *vbox94;
  GtkWidget *vbox95;
  GtkWidget *label124;
  GtkWidget *label116;
  GtkWidget *vbox96;
  GtkWidget *black_reset_checkbutton;
  GtkWidget *color_reset_checkbutton;
  GtkWidget *label117;
  GtkWidget *hbox51;
  GtkWidget *hbuttonbox26;
  GtkWidget *ink_reset_excute_button;
  GtkWidget *ink_reset_cancel_button;

  ink_reset_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (ink_reset_dialog), _("Ink Counter Reset"));
  gtk_window_set_modal (GTK_WINDOW (ink_reset_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (ink_reset_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (ink_reset_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox94 = GTK_DIALOG (ink_reset_dialog)->vbox;
  gtk_widget_show (vbox94);

  vbox95 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox95);
  gtk_box_pack_start (GTK_BOX (vbox94), vbox95, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox95), 10);

  label124 = gtk_label_new (_("Select the newly replaced ink tank and click the Execute button.n"));
  gtk_widget_show (label124);
  gtk_box_pack_start (GTK_BOX (vbox95), label124, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label124), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label124), 0, 0);

  label116 = gtk_label_new (_("The counter corresponding to the replaced ink tank will indicate the full nlevel. This operation ensures proper display of a low ink warning.n"));
  gtk_widget_show (label116);
  gtk_box_pack_start (GTK_BOX (vbox95), label116, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label116), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label116), 0, 0);

  vbox96 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox96);
  gtk_box_pack_start (GTK_BOX (vbox95), vbox96, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox96), 10);

  black_reset_checkbutton = gtk_check_button_new_with_mnemonic (_("Black Ink Tank"));
  gtk_widget_show (black_reset_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox96), black_reset_checkbutton, FALSE, FALSE, 0);

  color_reset_checkbutton = gtk_check_button_new_with_mnemonic (_("Color Ink Tank"));
  gtk_widget_show (color_reset_checkbutton);
  gtk_box_pack_start (GTK_BOX (vbox96), color_reset_checkbutton, FALSE, FALSE, 0);

  label117 = gtk_label_new ("");
  gtk_widget_show (label117);
  gtk_box_pack_start (GTK_BOX (vbox96), label117, FALSE, FALSE, 0);

  hbox51 = GTK_DIALOG (ink_reset_dialog)->action_area;
  gtk_widget_show (hbox51);
  gtk_container_set_border_width (GTK_CONTAINER (hbox51), 10);

  hbuttonbox26 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox26);
  gtk_box_pack_end (GTK_BOX (hbox51), hbuttonbox26, FALSE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox26), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox26), 0);

  ink_reset_excute_button = gtk_button_new_with_mnemonic (_("Execute"));
  gtk_widget_show (ink_reset_excute_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox26), ink_reset_excute_button);
  GTK_WIDGET_SET_FLAGS (ink_reset_excute_button, GTK_CAN_DEFAULT);

  ink_reset_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (ink_reset_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox26), ink_reset_cancel_button);
  GTK_WIDGET_SET_FLAGS (ink_reset_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) ink_reset_dialog, "delete_event",
                    G_CALLBACK (on_ink_reset_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) ink_reset_dialog, "destroy",
                    G_CALLBACK (on_ink_reset_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) black_reset_checkbutton, "toggled",
                    G_CALLBACK (on_ink_reset_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) color_reset_checkbutton, "toggled",
                    G_CALLBACK (on_ink_reset_button_toggled),
                    NULL);
  g_signal_connect ((gpointer) ink_reset_excute_button, "clicked",
                    G_CALLBACK (on_ink_reset_execute_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ink_reset_cancel_button, "clicked",
                    G_CALLBACK (on_ink_reset_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ink_reset_dialog, ink_reset_dialog, "ink_reset_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (ink_reset_dialog, vbox94, "vbox94");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, vbox95, "vbox95");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, label124, "label124");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, label116, "label116");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, vbox96, "vbox96");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, black_reset_checkbutton, "black_reset_checkbutton");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, color_reset_checkbutton, "color_reset_checkbutton");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, label117, "label117");
  GLADE_HOOKUP_OBJECT_NO_REF (ink_reset_dialog, hbox51, "hbox51");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, hbuttonbox26, "hbuttonbox26");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, ink_reset_excute_button, "ink_reset_excute_button");
  GLADE_HOOKUP_OBJECT (ink_reset_dialog, ink_reset_cancel_button, "ink_reset_cancel_button");

  gtk_widget_grab_focus (ink_reset_excute_button);
  gtk_widget_grab_default (ink_reset_excute_button);
  return ink_reset_dialog;
}

GtkWidget*
create_PX550Iregi_dialog (void)
{
  GtkWidget *PX550Iregi_dialog;
  GtkWidget *PX550Iregi_vbox1;
  GtkWidget *PX550Iregi_vbox2;
  GtkWidget *PX550Iregi_label1;
  GtkWidget *PX550Iregi_hbox1;
  GtkWidget *PX550Iregi_drawingarea;
  GtkWidget *PX550Iregi_vbox3;
  GtkWidget *PX550Iregi_vbox4;
  GtkWidget *PX550Iregi_label2;
  GtkWidget *table51;
  GtkWidget *PX550Iregi_label5;
  GtkWidget *PX550Iregi_label4;
  GtkWidget *PX550Iregi_label3;
  GtkObject *PX550Iregi_spinbutton1_adj;
  GtkWidget *PX550Iregi_spinbutton1;
  GtkObject *PX550Iregi_spinbutton2_adj;
  GtkWidget *PX550Iregi_spinbutton2;
  GtkObject *PX550Iregi_spinbutton3_adj;
  GtkWidget *PX550Iregi_spinbutton3;
  GtkWidget *hseparator34;
  GtkWidget *PX550Iregi_vbox5;
  GtkWidget *PX550Iregi_label6;
  GtkWidget *table52;
  GtkWidget *PX550Iregi_label7;
  GtkWidget *PX550Iregi_label8;
  GtkWidget *PX550Iregi_label9;
  GtkObject *PX550Iregi_spinbutton4_adj;
  GtkWidget *PX550Iregi_spinbutton4;
  GtkObject *PX550Iregi_spinbutton5_adj;
  GtkWidget *PX550Iregi_spinbutton5;
  GtkObject *PX550Iregi_spinbutton6_adj;
  GtkWidget *PX550Iregi_spinbutton6;
  GtkWidget *hbox52;
  GtkWidget *hbuttonbox27;
  GtkWidget *PX550Iregi_ok_button;
  GtkWidget *PX550Iregi_cancel_button;

  PX550Iregi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX550Iregi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX550Iregi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX550Iregi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX550Iregi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  PX550Iregi_vbox1 = GTK_DIALOG (PX550Iregi_dialog)->vbox;
  gtk_widget_show (PX550Iregi_vbox1);

  PX550Iregi_vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (PX550Iregi_vbox2);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox1), PX550Iregi_vbox2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (PX550Iregi_vbox2), 5);

  PX550Iregi_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to F."));
  gtk_widget_show (PX550Iregi_label1);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox2), PX550Iregi_label1, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (PX550Iregi_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX550Iregi_label1), 5, 5);

  PX550Iregi_hbox1 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (PX550Iregi_hbox1);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox2), PX550Iregi_hbox1, TRUE, TRUE, 0);

  PX550Iregi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX550Iregi_drawingarea);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_hbox1), PX550Iregi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX550Iregi_drawingarea, 128, 180);
  gtk_widget_set_events (PX550Iregi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  PX550Iregi_vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (PX550Iregi_vbox3);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_hbox1), PX550Iregi_vbox3, TRUE, TRUE, 0);

  PX550Iregi_vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (PX550Iregi_vbox4);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox3), PX550Iregi_vbox4, TRUE, TRUE, 0);

  PX550Iregi_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (PX550Iregi_label2);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox4), PX550Iregi_label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX550Iregi_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label2), 0, 0.5);

  table51 = gtk_table_new (3, 2, TRUE);
  gtk_widget_show (table51);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox4), table51, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table51), 5);

  PX550Iregi_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (PX550Iregi_label5);
  gtk_table_attach (GTK_TABLE (table51), PX550Iregi_label5, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (drylevel5_radiobutton5), drylevel5_group_group);
  drylevel5_group_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (drylevel5_radiobutton5));
  gtk_label_set_justify (GTK_LABEL (PX550Iregi_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label5), 0, 0.5);

  PX550Iregi_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (PX550Iregi_label4);
  gtk_table_attach (GTK_TABLE (table51), PX550Iregi_label4, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX550Iregi_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label4), 0, 0.5);

  PX550Iregi_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (PX550Iregi_label3);
  gtk_table_attach (GTK_TABLE (table51), PX550Iregi_label3, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX550Iregi_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label3), 0, 0.5);

  PX550Iregi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 1, 1);
  PX550Iregi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX550Iregi_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX550Iregi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table51), PX550Iregi_spinbutton1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  PX550Iregi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX550Iregi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX550Iregi_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX550Iregi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table51), PX550Iregi_spinbutton2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  PX550Iregi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX550Iregi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (PX550Iregi_spinbutton3_adj), 1, 0);
  gtk_widget_show (PX550Iregi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table51), PX550Iregi_spinbutton3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator34 = gtk_hseparator_new ();
  gtk_widget_show (hseparator34);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox3), hseparator34, TRUE, TRUE, 0);

  PX550Iregi_vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (PX550Iregi_vbox5);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox3), PX550Iregi_vbox5, TRUE, TRUE, 0);

  PX550Iregi_label6 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (PX550Iregi_label6);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox5), PX550Iregi_label6, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX550Iregi_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label6), 0, 0.5);

  table52 = gtk_table_new (3, 2, TRUE);
  gtk_widget_show (table52);
  gtk_box_pack_start (GTK_BOX (PX550Iregi_vbox5), table52, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table52), 5);

  PX550Iregi_label7 = gtk_label_new (_("Column D:"));
  gtk_widget_show (PX550Iregi_label7);
  gtk_table_attach (GTK_TABLE (table52), PX550Iregi_label7, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label7), 0, 0.5);

  PX550Iregi_label8 = gtk_label_new (_("Column E:"));
  gtk_widget_show (PX550Iregi_label8);
  gtk_table_attach (GTK_TABLE (table52), PX550Iregi_label8, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label8), 0, 0.5);

  PX550Iregi_label9 = gtk_label_new (_("Column F:"));
  gtk_widget_show (PX550Iregi_label9);
  gtk_table_attach (GTK_TABLE (table52), PX550Iregi_label9, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX550Iregi_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX550Iregi_label9), 0, 0.5);

  PX550Iregi_spinbutton4_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX550Iregi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (PX550Iregi_spinbutton4_adj), 1, 0);
  gtk_widget_show (PX550Iregi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table52), PX550Iregi_spinbutton4, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  PX550Iregi_spinbutton5_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX550Iregi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (PX550Iregi_spinbutton5_adj), 1, 0);
  gtk_widget_show (PX550Iregi_spinbutton5);
  gtk_table_attach (GTK_TABLE (table52), PX550Iregi_spinbutton5, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  PX550Iregi_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX550Iregi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (PX550Iregi_spinbutton6_adj), 1, 0);
  gtk_widget_show (PX550Iregi_spinbutton6);
  gtk_table_attach (GTK_TABLE (table52), PX550Iregi_spinbutton6, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  hbox52 = GTK_DIALOG (PX550Iregi_dialog)->action_area;
  gtk_widget_show (hbox52);
  gtk_container_set_border_width (GTK_CONTAINER (hbox52), 5);

  hbuttonbox27 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox27);
  gtk_box_pack_start (GTK_BOX (hbox52), hbuttonbox27, TRUE, FALSE, 0);

  PX550Iregi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX550Iregi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox27), PX550Iregi_ok_button);
  GTK_WIDGET_SET_FLAGS (PX550Iregi_ok_button, GTK_CAN_DEFAULT);

  PX550Iregi_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (PX550Iregi_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox27), PX550Iregi_cancel_button);
  GTK_WIDGET_SET_FLAGS (PX550Iregi_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX550Iregi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) PX550Iregi_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX550Iregi_dialog, PX550Iregi_dialog, "PX550Iregi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX550Iregi_dialog, PX550Iregi_vbox1, "PX550Iregi_vbox1");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_vbox2, "PX550Iregi_vbox2");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label1, "PX550Iregi_label1");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_hbox1, "PX550Iregi_hbox1");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_drawingarea, "PX550Iregi_drawingarea");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_vbox3, "PX550Iregi_vbox3");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_vbox4, "PX550Iregi_vbox4");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label2, "PX550Iregi_label2");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, table51, "table51");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label5, "PX550Iregi_label5");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label4, "PX550Iregi_label4");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label3, "PX550Iregi_label3");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_spinbutton1, "PX550Iregi_spinbutton1");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_spinbutton2, "PX550Iregi_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_spinbutton3, "PX550Iregi_spinbutton3");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, hseparator34, "hseparator34");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_vbox5, "PX550Iregi_vbox5");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label6, "PX550Iregi_label6");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, table52, "table52");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label7, "PX550Iregi_label7");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label8, "PX550Iregi_label8");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_label9, "PX550Iregi_label9");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_spinbutton4, "PX550Iregi_spinbutton4");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_spinbutton5, "PX550Iregi_spinbutton5");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_spinbutton6, "PX550Iregi_spinbutton6");
  GLADE_HOOKUP_OBJECT_NO_REF (PX550Iregi_dialog, hbox52, "hbox52");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, hbuttonbox27, "hbuttonbox27");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_ok_button, "PX550Iregi_ok_button");
  GLADE_HOOKUP_OBJECT (PX550Iregi_dialog, PX550Iregi_cancel_button, "PX550Iregi_cancel_button");

  gtk_widget_grab_focus (PX550Iregi_ok_button);
  gtk_widget_grab_default (PX550Iregi_ok_button);
  return PX550Iregi_dialog;
}

GtkWidget*
create_refreshing_dialog (void)
{
  GtkWidget *refreshing_dialog;
  GtkWidget *dialog_vbox9;
  GtkWidget *vbox108;
  GtkWidget *refreshing_label1;
  GtkWidget *hbox59;
  GtkWidget *vbox125;
  GtkWidget *refreshing_label2;
  GtkWidget *vbox109;
  GSList *refreshing_group = NULL;
  GtkWidget *refreshing_radiobutton1;
  GtkWidget *refreshing_radiobutton2;
  GtkWidget *refreshing_radiobutton3;
  GtkWidget *refreshing_label3;
  GtkWidget *dialog_action_area9;
  GtkWidget *hbuttonbox28;
  GtkWidget *refreshing_execute_button;
  GtkWidget *refreshing_cancel_button;

  refreshing_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (refreshing_dialog), _("Deep Cleaning"));
  gtk_window_set_modal (GTK_WINDOW (refreshing_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (refreshing_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (refreshing_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox9 = GTK_DIALOG (refreshing_dialog)->vbox;
  gtk_widget_show (dialog_vbox9);

  vbox108 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox108);
  gtk_box_pack_start (GTK_BOX (dialog_vbox9), vbox108, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox108), 3);

  refreshing_label1 = gtk_label_new (_("Deep Cleaning requires a lot of ink. Execute it when doing cleaningnseveral times does not resolve the print head problem.nnSelect the print head for deep cleaning.n"));
  gtk_widget_show (refreshing_label1);
  gtk_box_pack_start (GTK_BOX (vbox108), refreshing_label1, FALSE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (refreshing_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (refreshing_label1), 0.05, 0.5);

  hbox59 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox59);
  gtk_box_pack_start (GTK_BOX (vbox108), hbox59, FALSE, FALSE, 0);

  vbox125 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox125);
  gtk_box_pack_start (GTK_BOX (hbox59), vbox125, TRUE, FALSE, 0);

  refreshing_label2 = gtk_label_new (_("Print Head:"));
  gtk_widget_show (refreshing_label2);
  gtk_box_pack_start (GTK_BOX (vbox125), refreshing_label2, FALSE, FALSE, 10);
  gtk_misc_set_alignment (GTK_MISC (refreshing_label2), 7.45058e-09, 7.45058e-09);

  vbox109 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox109);
  gtk_box_pack_start (GTK_BOX (hbox59), vbox109, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox109), 5);

  refreshing_radiobutton1 = gtk_radio_button_new_with_mnemonic (refreshing_group, _("All Colors"));
  gtk_widget_show (refreshing_radiobutton1);
  gtk_box_pack_start (GTK_BOX (vbox109), refreshing_radiobutton1, FALSE, FALSE, 0);
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (refreshing_radiobutton1), TRUE);

  refreshing_radiobutton2 = gtk_radio_button_new_with_mnemonic (refreshing_group, _("Black"));
  gtk_widget_show (refreshing_radiobutton2);
  gtk_box_pack_start (GTK_BOX (vbox109), refreshing_radiobutton2, FALSE, FALSE, 0);

  refreshing_radiobutton3 = gtk_radio_button_new_with_mnemonic (refreshing_group, _("Color"));
  gtk_widget_show (refreshing_radiobutton3);
  gtk_box_pack_start (GTK_BOX (vbox109), refreshing_radiobutton3, FALSE, FALSE, 0);

  refreshing_label3 = gtk_label_new ("");
  gtk_widget_show (refreshing_label3);
  gtk_box_pack_start (GTK_BOX (vbox108), refreshing_label3, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (refreshing_label3), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (refreshing_label3), 0.05, 0.5);

  dialog_action_area9 = GTK_DIALOG (refreshing_dialog)->action_area;
  gtk_widget_show (dialog_action_area9);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area9), 10);

  hbuttonbox28 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox28);
  gtk_box_pack_start (GTK_BOX (dialog_action_area9), hbuttonbox28, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox28), GTK_BUTTONBOX_END);

  refreshing_execute_button = gtk_button_new_with_mnemonic (_("Execute"));
  gtk_widget_show (refreshing_execute_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox28), refreshing_execute_button);
  GTK_WIDGET_SET_FLAGS (refreshing_execute_button, GTK_CAN_DEFAULT);

  refreshing_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (refreshing_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox28), refreshing_cancel_button);
  GTK_WIDGET_SET_FLAGS (refreshing_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) refreshing_dialog, "delete_event",
                    G_CALLBACK (on_refreshing_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) refreshing_dialog, "destroy",
                    G_CALLBACK (on_refreshing_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) refreshing_radiobutton1, "toggled",
                    G_CALLBACK (on_refreshing_radiobutton_toggled),
                    NULL);
  g_signal_connect ((gpointer) refreshing_radiobutton2, "toggled",
                    G_CALLBACK (on_refreshing_radiobutton_toggled),
                    NULL);
  g_signal_connect ((gpointer) refreshing_radiobutton3, "toggled",
                    G_CALLBACK (on_refreshing_radiobutton_toggled),
                    NULL);
  g_signal_connect ((gpointer) refreshing_execute_button, "clicked",
                    G_CALLBACK (on_refreshing_execute_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) refreshing_cancel_button, "clicked",
                    G_CALLBACK (on_cleaning_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (refreshing_dialog, refreshing_dialog, "refreshing_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (refreshing_dialog, dialog_vbox9, "dialog_vbox9");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, vbox108, "vbox108");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_label1, "refreshing_label1");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, hbox59, "hbox59");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, vbox125, "vbox125");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_label2, "refreshing_label2");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, vbox109, "vbox109");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_radiobutton1, "refreshing_radiobutton1");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_radiobutton2, "refreshing_radiobutton2");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_radiobutton3, "refreshing_radiobutton3");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_label3, "refreshing_label3");
  GLADE_HOOKUP_OBJECT_NO_REF (refreshing_dialog, dialog_action_area9, "dialog_action_area9");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, hbuttonbox28, "hbuttonbox28");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_execute_button, "refreshing_execute_button");
  GLADE_HOOKUP_OBJECT (refreshing_dialog, refreshing_cancel_button, "refreshing_cancel_button");

  gtk_widget_grab_focus (refreshing_execute_button);
  gtk_widget_grab_default (refreshing_execute_button);
  return refreshing_dialog;
}

GtkWidget*
create_PX950Iregi_dialog (void)
{
  GtkWidget *PX950Iregi_dialog;
  GtkWidget *vbox114;
  GtkWidget *vbox115;
  GtkWidget *PX950Iregi_label1;
  GtkWidget *hbox55;
  GtkWidget *PX950Iregi_drawingarea;
  GtkWidget *vbox116;
  GtkWidget *PX950Iregi_table1;
  GtkObject *PX950Iregi_spinbutton1_adj;
  GtkWidget *PX950Iregi_spinbutton1;
  GtkObject *PX950Iregi_spinbutton2_adj;
  GtkWidget *PX950Iregi_spinbutton2;
  GtkObject *PX950Iregi_spinbutton3_adj;
  GtkWidget *PX950Iregi_spinbutton3;
  GtkObject *PX950Iregi_spinbutton4_adj;
  GtkWidget *PX950Iregi_spinbutton4;
  GtkObject *PX950Iregi_spinbutton5_adj;
  GtkWidget *PX950Iregi_spinbutton5;
  GtkWidget *PX950Iregi_label3;
  GtkWidget *PX950Iregi_label4;
  GtkWidget *PX950Iregi_label5;
  GtkWidget *PX950Iregi_label6;
  GtkWidget *PX950Iregi_label7;
  GtkWidget *PX950Iregi_label2;
  GtkWidget *hseparator35;
  GtkWidget *PX950Iregi_table2;
  GtkObject *PX950Iregi_spinbutton6_adj;
  GtkWidget *PX950Iregi_spinbutton6;
  GtkWidget *PX950Iregi_label8;
  GtkWidget *PX950Iregi_label9;
  GtkWidget *PX950Iregi_label10;
  GtkWidget *PX950Iregi_label11;
  GtkObject *PX950Iregi_spinbutton7_adj;
  GtkWidget *PX950Iregi_spinbutton7;
  GtkObject *PX950Iregi_spinbutton8_adj;
  GtkWidget *PX950Iregi_spinbutton8;
  GtkWidget *hbox54;
  GtkWidget *hbuttonbox29;
  GtkWidget *PX950Iregi_ok_button;

  PX950Iregi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX950Iregi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX950Iregi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX950Iregi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX950Iregi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox114 = GTK_DIALOG (PX950Iregi_dialog)->vbox;
  gtk_widget_show (vbox114);

  vbox115 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox115);
  gtk_box_pack_start (GTK_BOX (vbox114), vbox115, TRUE, TRUE, 0);

  PX950Iregi_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter the pattern number of the pattern with the least amount of streaking in the fields for columns A to H."));
  gtk_widget_show (PX950Iregi_label1);
  gtk_box_pack_start (GTK_BOX (vbox115), PX950Iregi_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX950Iregi_label1), 5, 5);

  hbox55 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox55);
  gtk_box_pack_start (GTK_BOX (vbox115), hbox55, TRUE, TRUE, 0);

  PX950Iregi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX950Iregi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox55), PX950Iregi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX950Iregi_drawingarea, 100, 144);
  gtk_widget_set_events (PX950Iregi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox116 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox116);
  gtk_box_pack_start (GTK_BOX (hbox55), vbox116, TRUE, TRUE, 0);

  PX950Iregi_table1 = gtk_table_new (6, 2, FALSE);
  gtk_widget_show (PX950Iregi_table1);
  gtk_box_pack_start (GTK_BOX (vbox116), PX950Iregi_table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (PX950Iregi_table1), 5);

  PX950Iregi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX950Iregi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton1);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (refreshing_radiobutton3), refreshing_group);
  refreshing_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (refreshing_radiobutton3));

  PX950Iregi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX950Iregi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton2);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX950Iregi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX950Iregi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton3_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton3);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX950Iregi_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX950Iregi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton4_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton4);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX950Iregi_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX950Iregi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton5_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton5);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX950Iregi_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (PX950Iregi_label3);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label3), 0, 0.5);

  PX950Iregi_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (PX950Iregi_label4);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label4), 0, 0.5);

  PX950Iregi_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (PX950Iregi_label5);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label5), 0, 0.5);

  PX950Iregi_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (PX950Iregi_label6);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label6), 0, 0.5);

  PX950Iregi_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (PX950Iregi_label7);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label7), 0, 0.5);

  PX950Iregi_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (PX950Iregi_label2);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table1), PX950Iregi_label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label2), 0, 0.5);


  hseparator35 = gtk_hseparator_new ();
  gtk_widget_show (hseparator35);
  gtk_box_pack_start (GTK_BOX (vbox116), hseparator35, TRUE, TRUE, 0);

  PX950Iregi_table2 = gtk_table_new (4, 2, FALSE);
  gtk_widget_show (PX950Iregi_table2);
  gtk_box_pack_start (GTK_BOX (vbox116), PX950Iregi_table2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (PX950Iregi_table2), 5);

  PX950Iregi_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX950Iregi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton6_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton6);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_spinbutton6, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX950Iregi_label8 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (PX950Iregi_label8);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_label8, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX950Iregi_label8), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label8), 0, 0.5);

  PX950Iregi_label9 = gtk_label_new (_("Column F:"));
  gtk_widget_show (PX950Iregi_label9);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_label9, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label9), 0, 0.5);

  PX950Iregi_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (PX950Iregi_label10);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_label10, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label10), 0, 0.5);

  PX950Iregi_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (PX950Iregi_label11);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_label11, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX950Iregi_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX950Iregi_label11), 0, 0.5);

  PX950Iregi_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX950Iregi_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton7_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton7);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_spinbutton7, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX950Iregi_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX950Iregi_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (PX950Iregi_spinbutton8_adj), 1, 0);
  gtk_widget_show (PX950Iregi_spinbutton8);
  gtk_table_attach (GTK_TABLE (PX950Iregi_table2), PX950Iregi_spinbutton8, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hbox54 = GTK_DIALOG (PX950Iregi_dialog)->action_area;
  gtk_widget_show (hbox54);
  gtk_container_set_border_width (GTK_CONTAINER (hbox54), 5);

  hbuttonbox29 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox29);
  gtk_box_pack_start (GTK_BOX (hbox54), hbuttonbox29, TRUE, FALSE, 0);

  PX950Iregi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX950Iregi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox29), PX950Iregi_ok_button);
  GTK_WIDGET_SET_FLAGS (PX950Iregi_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX950Iregi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) PX950Iregi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX950Iregi_dialog, PX950Iregi_dialog, "PX950Iregi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX950Iregi_dialog, vbox114, "vbox114");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, vbox115, "vbox115");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label1, "PX950Iregi_label1");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, hbox55, "hbox55");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_drawingarea, "PX950Iregi_drawingarea");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, vbox116, "vbox116");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_table1, "PX950Iregi_table1");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton1, "PX950Iregi_spinbutton1");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton2, "PX950Iregi_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton3, "PX950Iregi_spinbutton3");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton4, "PX950Iregi_spinbutton4");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton5, "PX950Iregi_spinbutton5");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label3, "PX950Iregi_label3");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label4, "PX950Iregi_label4");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label5, "PX950Iregi_label5");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label6, "PX950Iregi_label6");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label7, "PX950Iregi_label7");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label2, "PX950Iregi_label2");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, hseparator35, "hseparator35");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_table2, "PX950Iregi_table2");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton6, "PX950Iregi_spinbutton6");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label8, "PX950Iregi_label8");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label9, "PX950Iregi_label9");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label10, "PX950Iregi_label10");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_label11, "PX950Iregi_label11");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton7, "PX950Iregi_spinbutton7");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_spinbutton8, "PX950Iregi_spinbutton8");
  GLADE_HOOKUP_OBJECT_NO_REF (PX950Iregi_dialog, hbox54, "hbox54");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, hbuttonbox29, "hbuttonbox29");
  GLADE_HOOKUP_OBJECT (PX950Iregi_dialog, PX950Iregi_ok_button, "PX950Iregi_ok_button");

  gtk_widget_grab_focus (PX950Iregi_ok_button);
  gtk_widget_grab_default (PX950Iregi_ok_button);
  return PX950Iregi_dialog;
}

GtkWidget*
create_PX850Iregi1_dialog (void)
{
  GtkWidget *PX850Iregi1_dialog;
  GtkWidget *vbox117;
  GtkWidget *vbox118;
  GtkWidget *PX850Iregi1_label1;
  GtkWidget *hbox57;
  GtkWidget *PX850Iregi1_drawingarea;
  GtkWidget *vbox119;
  GtkWidget *table53;
  GtkObject *PX850Iregi1_spinbutton1_adj;
  GtkWidget *PX850Iregi1_spinbutton1;
  GtkObject *PX850Iregi1_spinbutton2_adj;
  GtkWidget *PX850Iregi1_spinbutton2;
  GtkObject *PX850Iregi1_spinbutton3_adj;
  GtkWidget *PX850Iregi1_spinbutton3;
  GtkObject *PX850Iregi1_spinbutton4_adj;
  GtkWidget *PX850Iregi1_spinbutton4;
  GtkObject *PX850Iregi1_spinbutton5_adj;
  GtkWidget *PX850Iregi1_spinbutton5;
  GtkWidget *PX850Iregi1_label3;
  GtkWidget *PX850Iregi1_label4;
  GtkWidget *PX850Iregi1_label5;
  GtkWidget *PX850Iregi1_label6;
  GtkWidget *PX850Iregi1_label7;
  GtkWidget *PX850Iregi1_label2;
  GtkWidget *hseparator36;
  GtkWidget *table54;
  GtkObject *PX850Iregi1_spinbutton6_adj;
  GtkWidget *PX850Iregi1_spinbutton6;
  GtkWidget *PX850Iregi1_label8;
  GtkWidget *PX850Iregi1_label9;
  GtkWidget *PX850Iregi1_label10;
  GtkWidget *PX850Iregi1_label11;
  GtkObject *PX850Iregi1_spinbutton7_adj;
  GtkWidget *PX850Iregi1_spinbutton7;
  GtkObject *PX850Iregi1_spinbutton8_adj;
  GtkWidget *PX850Iregi1_spinbutton8;
  GtkObject *PX850Iregi1_spinbutton9_adj;
  GtkWidget *PX850Iregi1_spinbutton9;
  GtkObject *PX850Iregi1_spinbutton10_adj;
  GtkWidget *PX850Iregi1_spinbutton10;
  GtkObject *PX850Iregi1_spinbutton11_adj;
  GtkWidget *PX850Iregi1_spinbutton11;
  GtkWidget *PX850Iregi1_label12;
  GtkWidget *PX850Iregi1_label13;
  GtkWidget *PX850Iregi1_label14;
  GtkWidget *hbox56;
  GtkWidget *hbuttonbox30;
  GtkWidget *PX850Iregi1_ok_button;
  GtkWidget *PX850Iregi1_cancel_button;

  PX850Iregi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX850Iregi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX850Iregi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX850Iregi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX850Iregi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox117 = GTK_DIALOG (PX850Iregi1_dialog)->vbox;
  gtk_widget_show (vbox117);

  vbox118 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox118);
  gtk_box_pack_start (GTK_BOX (vbox117), vbox118, TRUE, TRUE, 0);

  PX850Iregi1_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter the npattern number of the pattern with the least amount of streaking in the nfields for columns A to K."));
  gtk_widget_show (PX850Iregi1_label1);
  gtk_box_pack_start (GTK_BOX (vbox118), PX850Iregi1_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX850Iregi1_label1), 5, 5);

  hbox57 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox57);
  gtk_box_pack_start (GTK_BOX (vbox118), hbox57, TRUE, TRUE, 0);

  PX850Iregi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX850Iregi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox57), PX850Iregi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX850Iregi1_drawingarea, 128, 180);
  gtk_widget_set_events (PX850Iregi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox119 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox119);
  gtk_box_pack_start (GTK_BOX (hbox57), vbox119, TRUE, TRUE, 0);

  table53 = gtk_table_new (6, 2, FALSE);
  gtk_widget_show (table53);
  gtk_box_pack_start (GTK_BOX (vbox119), table53, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table53), 5);

  PX850Iregi1_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX850Iregi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton1);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX850Iregi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton2);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX850Iregi1_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton3_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton3);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX850Iregi1_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton4_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton4);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX850Iregi1_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton5_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton5);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (PX850Iregi1_label3);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label3), 0, 0.5);

  PX850Iregi1_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (PX850Iregi1_label4);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label4), 0, 0.5);

  PX850Iregi1_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (PX850Iregi1_label5);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label5), 0, 0.5);

  PX850Iregi1_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (PX850Iregi1_label6);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label6), 0, 0.5);

  PX850Iregi1_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (PX850Iregi1_label7);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label7), 0, 0.5);

  PX850Iregi1_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (PX850Iregi1_label2);
  gtk_table_attach (GTK_TABLE (table53), PX850Iregi1_label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label2), 0, 0.5);


  hseparator36 = gtk_hseparator_new ();
  gtk_widget_show (hseparator36);
  gtk_box_pack_start (GTK_BOX (vbox119), hseparator36, TRUE, TRUE, 0);

  table54 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table54);
  gtk_box_pack_start (GTK_BOX (vbox119), table54, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table54), 5);

  PX850Iregi1_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX850Iregi1_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton6_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton6);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_spinbutton6, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_label8 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (PX850Iregi1_label8);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label8, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi1_label8), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label8), 0, 0.5);

  PX850Iregi1_label9 = gtk_label_new (_("Column F:"));
  gtk_widget_show (PX850Iregi1_label9);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label9, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label9), 0, 0.5);

  PX850Iregi1_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (PX850Iregi1_label10);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label10, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label10), 0, 0.5);

  PX850Iregi1_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (PX850Iregi1_label11);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label11, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label11), 0, 0.5);

  PX850Iregi1_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX850Iregi1_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton7_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton7);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_spinbutton7, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX850Iregi1_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton8_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton8);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_spinbutton8, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton9_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX850Iregi1_spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton9_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton9);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_spinbutton9, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton10_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX850Iregi1_spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton10_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton10);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_spinbutton10, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_spinbutton11_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX850Iregi1_spinbutton11 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi1_spinbutton11_adj), 1, 0);
  gtk_widget_show (PX850Iregi1_spinbutton11);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_spinbutton11, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi1_label12 = gtk_label_new (_("Column I:"));
  gtk_widget_show (PX850Iregi1_label12);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label12, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label12), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label12), 0, 0.5);

  PX850Iregi1_label13 = gtk_label_new (_("Column J:"));
  gtk_widget_show (PX850Iregi1_label13);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label13, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label13), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label13), 0, 0.5);

  PX850Iregi1_label14 = gtk_label_new (_("Column K:"));
  gtk_widget_show (PX850Iregi1_label14);
  gtk_table_attach (GTK_TABLE (table54), PX850Iregi1_label14, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi1_label14), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi1_label14), 0, 0.5);

  hbox56 = GTK_DIALOG (PX850Iregi1_dialog)->action_area;
  gtk_widget_show (hbox56);
  gtk_container_set_border_width (GTK_CONTAINER (hbox56), 5);

  hbuttonbox30 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox30);
  gtk_box_pack_start (GTK_BOX (hbox56), hbuttonbox30, TRUE, FALSE, 0);

  PX850Iregi1_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX850Iregi1_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox30), PX850Iregi1_ok_button);
  GTK_WIDGET_SET_FLAGS (PX850Iregi1_ok_button, GTK_CAN_DEFAULT);

  PX850Iregi1_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (PX850Iregi1_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox30), PX850Iregi1_cancel_button);
  GTK_WIDGET_SET_FLAGS (PX850Iregi1_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX850Iregi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton9, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_08),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton9, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_08),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton10, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_09),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton10, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_09),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton11, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_10),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_spinbutton11, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_10),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi1_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX850Iregi1_dialog, PX850Iregi1_dialog, "PX850Iregi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX850Iregi1_dialog, vbox117, "vbox117");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, vbox118, "vbox118");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label1, "PX850Iregi1_label1");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, hbox57, "hbox57");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_drawingarea, "PX850Iregi1_drawingarea");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, vbox119, "vbox119");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, table53, "table53");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton1, "PX850Iregi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton2, "PX850Iregi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton3, "PX850Iregi1_spinbutton3");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton4, "PX850Iregi1_spinbutton4");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton5, "PX850Iregi1_spinbutton5");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label3, "PX850Iregi1_label3");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label4, "PX850Iregi1_label4");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label5, "PX850Iregi1_label5");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label6, "PX850Iregi1_label6");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label7, "PX850Iregi1_label7");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label2, "PX850Iregi1_label2");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, hseparator36, "hseparator36");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, table54, "table54");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton6, "PX850Iregi1_spinbutton6");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label8, "PX850Iregi1_label8");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label9, "PX850Iregi1_label9");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label10, "PX850Iregi1_label10");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label11, "PX850Iregi1_label11");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton7, "PX850Iregi1_spinbutton7");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton8, "PX850Iregi1_spinbutton8");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton9, "PX850Iregi1_spinbutton9");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton10, "PX850Iregi1_spinbutton10");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_spinbutton11, "PX850Iregi1_spinbutton11");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label12, "PX850Iregi1_label12");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label13, "PX850Iregi1_label13");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_label14, "PX850Iregi1_label14");
  GLADE_HOOKUP_OBJECT_NO_REF (PX850Iregi1_dialog, hbox56, "hbox56");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, hbuttonbox30, "hbuttonbox30");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_ok_button, "PX850Iregi1_ok_button");
  GLADE_HOOKUP_OBJECT (PX850Iregi1_dialog, PX850Iregi1_cancel_button, "PX850Iregi1_cancel_button");

  gtk_widget_grab_focus (PX850Iregi1_ok_button);
  gtk_widget_grab_default (PX850Iregi1_ok_button);
  return PX850Iregi1_dialog;
}

GtkWidget*
create_PX850Iregi2_dialog (void)
{
  GtkWidget *PX850Iregi2_dialog;
  GtkWidget *PX850Iregi2_vbox1;
  GtkWidget *PX850Iregi2_vbox2;
  GtkWidget *PX850Iregi2_label1;
  GtkWidget *PX850Iregi2_hbox1;
  GtkWidget *PX850Iregi2_drawingarea;
  GtkWidget *vbox122;
  GtkWidget *vbox123;
  GtkWidget *PX850Iregi2_label2;
  GtkWidget *table55;
  GtkWidget *PX850Iregi2_label3;
  GtkWidget *PX850Iregi2_label4;
  GtkObject *PX850Iregi2_spinbutton2_adj;
  GtkWidget *PX850Iregi2_spinbutton2;
  GtkObject *PX850Iregi2_spinbutton1_adj;
  GtkWidget *PX850Iregi2_spinbutton1;
  GtkWidget *hbox58;
  GtkWidget *hbuttonbox31;
  GtkWidget *PX850Iregi2_ok_button;

  PX850Iregi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX850Iregi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX850Iregi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX850Iregi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX850Iregi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  PX850Iregi2_vbox1 = GTK_DIALOG (PX850Iregi2_dialog)->vbox;
  gtk_widget_show (PX850Iregi2_vbox1);

  PX850Iregi2_vbox2 = gtk_vbox_new (FALSE, 10);
  gtk_widget_show (PX850Iregi2_vbox2);
  gtk_box_pack_start (GTK_BOX (PX850Iregi2_vbox1), PX850Iregi2_vbox2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (PX850Iregi2_vbox2), 5);

  PX850Iregi2_label1 = gtk_label_new (_("Examine the printed patterns, and fill in the fields for columns L and M nwith the number of the pattern that is smoothest and has no stripes in nareas indicated by arrows."));
  gtk_widget_show (PX850Iregi2_label1);
  gtk_box_pack_start (GTK_BOX (PX850Iregi2_vbox2), PX850Iregi2_label1, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi2_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX850Iregi2_label1), 5, 5);

  PX850Iregi2_hbox1 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (PX850Iregi2_hbox1);
  gtk_box_pack_start (GTK_BOX (PX850Iregi2_vbox2), PX850Iregi2_hbox1, TRUE, TRUE, 0);

  PX850Iregi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX850Iregi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (PX850Iregi2_hbox1), PX850Iregi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX850Iregi2_drawingarea, 128, 180);
  gtk_widget_set_events (PX850Iregi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox122 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox122);
  gtk_box_pack_start (GTK_BOX (PX850Iregi2_hbox1), vbox122, TRUE, TRUE, 0);

  vbox123 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox123);
  gtk_box_pack_start (GTK_BOX (vbox122), vbox123, TRUE, TRUE, 0);

  PX850Iregi2_label2 = gtk_label_new (_("Vertical Alignment (-3 to +3)"));
  gtk_widget_show (PX850Iregi2_label2);
  gtk_box_pack_start (GTK_BOX (vbox123), PX850Iregi2_label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX850Iregi2_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi2_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX850Iregi2_label2), 0, 0.5);

  table55 = gtk_table_new (2, 2, TRUE);
  gtk_widget_show (table55);
  gtk_box_pack_start (GTK_BOX (vbox123), table55, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table55), 5);

  PX850Iregi2_label3 = gtk_label_new (_("Column L:"));
  gtk_widget_show (PX850Iregi2_label3);
  gtk_table_attach (GTK_TABLE (table55), PX850Iregi2_label3, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi2_label3), TRUE);

  PX850Iregi2_label4 = gtk_label_new (_("Column M:"));
  gtk_widget_show (PX850Iregi2_label4);
  gtk_table_attach (GTK_TABLE (table55), PX850Iregi2_label4, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX850Iregi2_label4), TRUE);

  PX850Iregi2_spinbutton2_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  PX850Iregi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX850Iregi2_spinbutton2);
  gtk_table_attach (GTK_TABLE (table55), PX850Iregi2_spinbutton2, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  PX850Iregi2_spinbutton1_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  PX850Iregi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX850Iregi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX850Iregi2_spinbutton1);
  gtk_table_attach (GTK_TABLE (table55), PX850Iregi2_spinbutton1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  hbox58 = GTK_DIALOG (PX850Iregi2_dialog)->action_area;
  gtk_widget_show (hbox58);
  gtk_container_set_border_width (GTK_CONTAINER (hbox58), 5);

  hbuttonbox31 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox31);
  gtk_box_pack_start (GTK_BOX (hbox58), hbuttonbox31, TRUE, FALSE, 0);

  PX850Iregi2_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX850Iregi2_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox31), PX850Iregi2_ok_button);
  GTK_WIDGET_SET_FLAGS (PX850Iregi2_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX850Iregi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX850Iregi2_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX850Iregi2_dialog, PX850Iregi2_dialog, "PX850Iregi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX850Iregi2_dialog, PX850Iregi2_vbox1, "PX850Iregi2_vbox1");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_vbox2, "PX850Iregi2_vbox2");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_label1, "PX850Iregi2_label1");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_hbox1, "PX850Iregi2_hbox1");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_drawingarea, "PX850Iregi2_drawingarea");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, vbox122, "vbox122");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, vbox123, "vbox123");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_label2, "PX850Iregi2_label2");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, table55, "table55");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_label3, "PX850Iregi2_label3");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_label4, "PX850Iregi2_label4");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_spinbutton2, "PX850Iregi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_spinbutton1, "PX850Iregi2_spinbutton1");
  GLADE_HOOKUP_OBJECT_NO_REF (PX850Iregi2_dialog, hbox58, "hbox58");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, hbuttonbox31, "hbuttonbox31");
  GLADE_HOOKUP_OBJECT (PX850Iregi2_dialog, PX850Iregi2_ok_button, "PX850Iregi2_ok_button");

  gtk_widget_grab_focus (PX850Iregi2_ok_button);
  gtk_widget_grab_default (PX850Iregi2_ok_button);
  return PX850Iregi2_dialog;
}

GtkWidget*
create_PX990Iregi_dialog (void)
{
  GtkWidget *PX990Iregi_dialog;
  GtkWidget *vbox128;
  GtkWidget *vbox129;
  GtkWidget *PX990Iregi_label1;
  GtkWidget *hbox60;
  GtkWidget *PX990Iregi_drawingarea;
  GtkWidget *vbox130;
  GtkWidget *table59;
  GtkObject *PX990Iregi_spinbutton1_adj;
  GtkWidget *PX990Iregi_spinbutton1;
  GtkObject *PX990Iregi_spinbutton2_adj;
  GtkWidget *PX990Iregi_spinbutton2;
  GtkObject *PX990Iregi_spinbutton3_adj;
  GtkWidget *PX990Iregi_spinbutton3;
  GtkObject *PX990Iregi_spinbutton4_adj;
  GtkWidget *PX990Iregi_spinbutton4;
  GtkObject *PX990Iregi_spinbutton5_adj;
  GtkWidget *PX990Iregi_spinbutton5;
  GtkWidget *PX990Iregi_label3;
  GtkWidget *PX990Iregi_label4;
  GtkWidget *PX990Iregi_label15;
  GtkWidget *PX990Iregi_label6;
  GtkWidget *PX990Iregi_label7;
  GtkWidget *PX990Iregi_label2;
  GtkWidget *PX990Iregi_label8;
  GtkObject *PX990Iregi_spinbutton6_adj;
  GtkWidget *PX990Iregi_spinbutton6;
  GtkWidget *hseparator39;
  GtkWidget *table60;
  GtkWidget *PX990Iregi_label9;
  GtkWidget *PX990Iregi_label12;
  GtkWidget *PX990Iregi_label13;
  GtkObject *PX990Iregi_spinbutton8_adj;
  GtkWidget *PX990Iregi_spinbutton8;
  GtkObject *PX990Iregi_spinbutton9_adj;
  GtkWidget *PX990Iregi_spinbutton9;
  GtkWidget *PX990Iregi_label14;
  GtkObject *PX990Iregi_spinbutton10_adj;
  GtkWidget *PX990Iregi_spinbutton10;
  GtkWidget *PX990Iregi_label10;
  GtkObject *PX990Iregi_spinbutton7_adj;
  GtkWidget *PX990Iregi_spinbutton7;
  GtkWidget *hbox61;
  GtkWidget *hbuttonbox32;
  GtkWidget *PX990Iregi_ok_button;
  GtkWidget *PX990Iregi_cancel_button;

  PX990Iregi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX990Iregi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX990Iregi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX990Iregi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX990Iregi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox128 = GTK_DIALOG (PX990Iregi_dialog)->vbox;
  gtk_widget_show (vbox128);

  vbox129 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox129);
  gtk_box_pack_start (GTK_BOX (vbox128), vbox129, TRUE, TRUE, 0);

  PX990Iregi_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter the pattern number of the pattern with the least amount of streaking in the fields for columns A to J."));
  gtk_widget_show (PX990Iregi_label1);
  gtk_box_pack_start (GTK_BOX (vbox129), PX990Iregi_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX990Iregi_label1), 5, 5);

  hbox60 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox60);
  gtk_box_pack_start (GTK_BOX (vbox129), hbox60, TRUE, TRUE, 0);

  PX990Iregi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX990Iregi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox60), PX990Iregi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX990Iregi_drawingarea, 148, 198);
  gtk_widget_set_events (PX990Iregi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox130 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox130);
  gtk_box_pack_start (GTK_BOX (hbox60), vbox130, TRUE, TRUE, 0);

  table59 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table59);
  gtk_box_pack_start (GTK_BOX (vbox130), table59, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table59), 5);

  PX990Iregi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iregi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iregi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iregi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton3_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iregi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton4_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iregi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton5_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton5);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (PX990Iregi_label3);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label3), 0, 0.5);

  PX990Iregi_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (PX990Iregi_label4);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label4), 0, 0.5);

  PX990Iregi_label15 = gtk_label_new (_("Column C:"));
  gtk_widget_show (PX990Iregi_label15);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label15, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label15), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label15), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label15), 0, 0.5);

  PX990Iregi_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (PX990Iregi_label6);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label6), 0, 0.5);

  PX990Iregi_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (PX990Iregi_label7);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label7), 0, 0.5);

  PX990Iregi_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (PX990Iregi_label2);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label2), 0, 0.5);

  PX990Iregi_label8 = gtk_label_new (_("Column F:"));
  gtk_widget_show (PX990Iregi_label8);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_label8, 0, 1, 6, 7,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label8), 0, 0.5);

  PX990Iregi_spinbutton6_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iregi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton6_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton6);
  gtk_table_attach (GTK_TABLE (table59), PX990Iregi_spinbutton6, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator39 = gtk_hseparator_new ();
  gtk_widget_show (hseparator39);
  gtk_box_pack_start (GTK_BOX (vbox130), hseparator39, TRUE, TRUE, 0);

  table60 = gtk_table_new (5, 2, FALSE);
  gtk_widget_show (table60);
  gtk_box_pack_start (GTK_BOX (vbox130), table60, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table60), 5);

  PX990Iregi_label9 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (PX990Iregi_label9);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_label9, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iregi_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label9), 0, 0.5);

  PX990Iregi_label12 = gtk_label_new (_("Column H:"));
  gtk_widget_show (PX990Iregi_label12);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_label12, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label12), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label12), 0, 0.5);

  PX990Iregi_label13 = gtk_label_new (_("Column I:"));
  gtk_widget_show (PX990Iregi_label13);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_label13, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label13), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label13), 0, 0.5);

  PX990Iregi_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX990Iregi_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton8_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton8);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_spinbutton8, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_spinbutton9_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX990Iregi_spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton9_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton9);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_spinbutton9, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_label14 = gtk_label_new (_("Column J:"));
  gtk_widget_show (PX990Iregi_label14);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_label14, 0, 1, 4, 5,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label14), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label14), 0, 0.5);

  PX990Iregi_spinbutton10_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX990Iregi_spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton10_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton10);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_spinbutton10, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iregi_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (PX990Iregi_label10);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_label10, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iregi_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iregi_label10), 0, 0.5);

  PX990Iregi_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX990Iregi_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iregi_spinbutton7_adj), 1, 0);
  gtk_widget_show (PX990Iregi_spinbutton7);
  gtk_table_attach (GTK_TABLE (table60), PX990Iregi_spinbutton7, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hbox61 = GTK_DIALOG (PX990Iregi_dialog)->action_area;
  gtk_widget_show (hbox61);
  gtk_container_set_border_width (GTK_CONTAINER (hbox61), 5);

  hbuttonbox32 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox32);
  gtk_box_pack_start (GTK_BOX (hbox61), hbuttonbox32, TRUE, FALSE, 0);

  PX990Iregi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX990Iregi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox32), PX990Iregi_ok_button);
  GTK_WIDGET_SET_FLAGS (PX990Iregi_ok_button, GTK_CAN_DEFAULT);

  PX990Iregi_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (PX990Iregi_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox32), PX990Iregi_cancel_button);
  GTK_WIDGET_SET_FLAGS (PX990Iregi_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX990Iregi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton9, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_08),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton9, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_08),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton10, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_09),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton10, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_09),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) PX990Iregi_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX990Iregi_dialog, PX990Iregi_dialog, "PX990Iregi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX990Iregi_dialog, vbox128, "vbox128");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, vbox129, "vbox129");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label1, "PX990Iregi_label1");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, hbox60, "hbox60");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_drawingarea, "PX990Iregi_drawingarea");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, vbox130, "vbox130");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, table59, "table59");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton1, "PX990Iregi_spinbutton1");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton2, "PX990Iregi_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton3, "PX990Iregi_spinbutton3");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton4, "PX990Iregi_spinbutton4");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton5, "PX990Iregi_spinbutton5");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label3, "PX990Iregi_label3");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label4, "PX990Iregi_label4");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label15, "PX990Iregi_label15");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label6, "PX990Iregi_label6");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label7, "PX990Iregi_label7");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label2, "PX990Iregi_label2");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label8, "PX990Iregi_label8");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton6, "PX990Iregi_spinbutton6");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, hseparator39, "hseparator39");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, table60, "table60");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label9, "PX990Iregi_label9");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label12, "PX990Iregi_label12");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label13, "PX990Iregi_label13");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton8, "PX990Iregi_spinbutton8");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton9, "PX990Iregi_spinbutton9");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label14, "PX990Iregi_label14");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton10, "PX990Iregi_spinbutton10");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_label10, "PX990Iregi_label10");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_spinbutton7, "PX990Iregi_spinbutton7");
  GLADE_HOOKUP_OBJECT_NO_REF (PX990Iregi_dialog, hbox61, "hbox61");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, hbuttonbox32, "hbuttonbox32");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_ok_button, "PX990Iregi_ok_button");
  GLADE_HOOKUP_OBJECT (PX990Iregi_dialog, PX990Iregi_cancel_button, "PX990Iregi_cancel_button");

  return PX990Iregi_dialog;
}

GtkWidget*
create_PX990Iauto_regi_dialog (void)
{
  GtkWidget *PX990Iauto_regi_dialog;
  GtkWidget *vbox131;
  GtkWidget *vbox132;
  GtkWidget *PX990Iauto_regi_label1;
  GtkWidget *hbox62;
  GtkWidget *PX990Iauto_regi_drawingarea;
  GtkWidget *vbox133;
  GtkWidget *vbox134;
  GtkWidget *PX990Iauto_regi_label2;
  GtkWidget *table61;
  GtkWidget *PX990Iauto_regi_label5;
  GtkWidget *PX990Iauto_regi_label4;
  GtkWidget *PX990Iauto_regi_label3;
  GtkObject *PX990Iauto_regi_spinbutton1_adj;
  GtkWidget *PX990Iauto_regi_spinbutton1;
  GtkObject *PX990Iauto_regi_spinbutton2_adj;
  GtkWidget *PX990Iauto_regi_spinbutton2;
  GtkObject *PX990Iauto_regi_spinbutton3_adj;
  GtkWidget *PX990Iauto_regi_spinbutton3;
  GtkWidget *hseparator40;
  GtkWidget *vbox135;
  GtkWidget *PX990Iauto_regi_label6;
  GtkWidget *table62;
  GtkWidget *PX990Iauto_regi_label7;
  GtkObject *PX990Iauto_regi_spinbutton4_adj;
  GtkWidget *PX990Iauto_regi_spinbutton4;
  GtkWidget *hbox63;
  GtkWidget *hbuttonbox33;
  GtkWidget *PX990Iauto_regi_ok_button;

  PX990Iauto_regi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX990Iauto_regi_dialog), _("Simple Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX990Iauto_regi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX990Iauto_regi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX990Iauto_regi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox131 = GTK_DIALOG (PX990Iauto_regi_dialog)->vbox;
  gtk_widget_show (vbox131);

  vbox132 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox132);
  gtk_box_pack_start (GTK_BOX (vbox131), vbox132, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox132), 5);

  PX990Iauto_regi_label1 = gtk_label_new (_("First execute head alignment manually. Then examine the printed patterns, and enter the pattern number of the pattern with the least amount of streaking in each field."));
  gtk_widget_show (PX990Iauto_regi_label1);
  gtk_box_pack_start (GTK_BOX (vbox132), PX990Iauto_regi_label1, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iauto_regi_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX990Iauto_regi_label1), 5, 5);

  hbox62 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox62);
  gtk_box_pack_start (GTK_BOX (vbox132), hbox62, TRUE, TRUE, 0);

  PX990Iauto_regi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX990Iauto_regi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox62), PX990Iauto_regi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX990Iauto_regi_drawingarea, 148, 198);
  gtk_widget_set_events (PX990Iauto_regi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox133 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox133);
  gtk_box_pack_start (GTK_BOX (hbox62), vbox133, TRUE, TRUE, 0);

  vbox134 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox134);
  gtk_box_pack_start (GTK_BOX (vbox133), vbox134, TRUE, TRUE, 0);

  PX990Iauto_regi_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (PX990Iauto_regi_label2);
  gtk_box_pack_start (GTK_BOX (vbox134), PX990Iauto_regi_label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iauto_regi_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iauto_regi_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iauto_regi_label2), 0, 0.5);

  table61 = gtk_table_new (3, 2, TRUE);
  gtk_widget_show (table61);
  gtk_box_pack_start (GTK_BOX (vbox134), table61, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table61), 5);

  PX990Iauto_regi_label5 = gtk_label_new (_("Column F:"));
  gtk_widget_show (PX990Iauto_regi_label5);
  gtk_table_attach (GTK_TABLE (table61), PX990Iauto_regi_label5, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iauto_regi_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iauto_regi_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iauto_regi_label5), 0, 0.5);

  PX990Iauto_regi_label4 = gtk_label_new (_("Column E:"));
  gtk_widget_show (PX990Iauto_regi_label4);
  gtk_table_attach (GTK_TABLE (table61), PX990Iauto_regi_label4, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iauto_regi_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iauto_regi_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iauto_regi_label4), 0, 0.5);

  PX990Iauto_regi_label3 = gtk_label_new (_("Column C:"));
  gtk_widget_show (PX990Iauto_regi_label3);
  gtk_table_attach (GTK_TABLE (table61), PX990Iauto_regi_label3, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iauto_regi_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iauto_regi_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iauto_regi_label3), 0, 0.5);

  PX990Iauto_regi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 1, 1);
  PX990Iauto_regi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iauto_regi_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX990Iauto_regi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table61), PX990Iauto_regi_spinbutton1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iauto_regi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iauto_regi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iauto_regi_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX990Iauto_regi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table61), PX990Iauto_regi_spinbutton2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  PX990Iauto_regi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX990Iauto_regi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iauto_regi_spinbutton3_adj), 1, 0);
  gtk_widget_show (PX990Iauto_regi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table61), PX990Iauto_regi_spinbutton3, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator40 = gtk_hseparator_new ();
  gtk_widget_show (hseparator40);
  gtk_box_pack_start (GTK_BOX (vbox133), hseparator40, TRUE, TRUE, 0);

  vbox135 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox135);
  gtk_box_pack_start (GTK_BOX (vbox133), vbox135, TRUE, TRUE, 0);

  PX990Iauto_regi_label6 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (PX990Iauto_regi_label6);
  gtk_box_pack_start (GTK_BOX (vbox135), PX990Iauto_regi_label6, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX990Iauto_regi_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iauto_regi_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iauto_regi_label6), 0, 0.5);

  table62 = gtk_table_new (1, 2, TRUE);
  gtk_widget_show (table62);
  gtk_box_pack_start (GTK_BOX (vbox135), table62, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table62), 5);

  PX990Iauto_regi_label7 = gtk_label_new (_("Column I:"));
  gtk_widget_show (PX990Iauto_regi_label7);
  gtk_table_attach (GTK_TABLE (table62), PX990Iauto_regi_label7, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX990Iauto_regi_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX990Iauto_regi_label7), 0, 0.5);

  PX990Iauto_regi_spinbutton4_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX990Iauto_regi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (PX990Iauto_regi_spinbutton4_adj), 1, 0);
  gtk_widget_show (PX990Iauto_regi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table62), PX990Iauto_regi_spinbutton4, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  hbox63 = GTK_DIALOG (PX990Iauto_regi_dialog)->action_area;
  gtk_widget_show (hbox63);
  gtk_container_set_border_width (GTK_CONTAINER (hbox63), 5);

  hbuttonbox33 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox33);
  gtk_box_pack_start (GTK_BOX (hbox63), hbuttonbox33, TRUE, FALSE, 0);

  PX990Iauto_regi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX990Iauto_regi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox33), PX990Iauto_regi_ok_button);
  GTK_WIDGET_SET_FLAGS (PX990Iauto_regi_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX990Iauto_regi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) PX990Iauto_regi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX990Iauto_regi_dialog, PX990Iauto_regi_dialog, "PX990Iauto_regi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX990Iauto_regi_dialog, vbox131, "vbox131");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, vbox132, "vbox132");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label1, "PX990Iauto_regi_label1");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, hbox62, "hbox62");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_drawingarea, "PX990Iauto_regi_drawingarea");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, vbox133, "vbox133");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, vbox134, "vbox134");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label2, "PX990Iauto_regi_label2");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, table61, "table61");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label5, "PX990Iauto_regi_label5");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label4, "PX990Iauto_regi_label4");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label3, "PX990Iauto_regi_label3");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_spinbutton1, "PX990Iauto_regi_spinbutton1");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_spinbutton2, "PX990Iauto_regi_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_spinbutton3, "PX990Iauto_regi_spinbutton3");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, hseparator40, "hseparator40");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, vbox135, "vbox135");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label6, "PX990Iauto_regi_label6");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, table62, "table62");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_label7, "PX990Iauto_regi_label7");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_spinbutton4, "PX990Iauto_regi_spinbutton4");
  GLADE_HOOKUP_OBJECT_NO_REF (PX990Iauto_regi_dialog, hbox63, "hbox63");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, hbuttonbox33, "hbuttonbox33");
  GLADE_HOOKUP_OBJECT (PX990Iauto_regi_dialog, PX990Iauto_regi_ok_button, "PX990Iauto_regi_ok_button");

  gtk_widget_grab_focus (PX990Iauto_regi_ok_button);
  gtk_widget_grab_default (PX990Iauto_regi_ok_button);
  return PX990Iauto_regi_dialog;
}

GtkWidget*
create_PX860Iregi1_dialog (void)
{
  GtkWidget *PX860Iregi1_dialog;
  GtkWidget *vbox136;
  GtkWidget *vbox137;
  GtkWidget *PX860Iregi1_label1;
  GtkWidget *hbox64;
  GtkWidget *PX860Iregi1_drawingarea;
  GtkWidget *vbox138;
  GtkWidget *table65;
  GtkObject *PX860Iregi1_spinbutton1_adj;
  GtkWidget *PX860Iregi1_spinbutton1;
  GtkObject *PX860Iregi1_spinbutton2_adj;
  GtkWidget *PX860Iregi1_spinbutton2;
  GtkObject *PX860Iregi1_spinbutton3_adj;
  GtkWidget *PX860Iregi1_spinbutton3;
  GtkObject *PX860Iregi1_spinbutton4_adj;
  GtkWidget *PX860Iregi1_spinbutton4;
  GtkObject *PX860Iregi1_spinbutton5_adj;
  GtkWidget *PX860Iregi1_spinbutton5;
  GtkWidget *PX860Iregi1_label3;
  GtkWidget *PX860Iregi1_label4;
  GtkWidget *PX860Iregi1_label5;
  GtkWidget *PX860Iregi1_label6;
  GtkWidget *PX860Iregi1_label7;
  GtkWidget *PX860Iregi1_label2;
  GtkWidget *PX860Iregi1_label8;
  GtkObject *PX860Iregi1_spinbutton6_adj;
  GtkWidget *PX860Iregi1_spinbutton6;
  GtkWidget *hseparator41;
  GtkWidget *table64;
  GtkObject *PX860Iregi1_spinbutton7_adj;
  GtkWidget *PX860Iregi1_spinbutton7;
  GtkWidget *PX860Iregi_label9;
  GtkWidget *PX860Iregi_label10;
  GtkWidget *PX860Iregi_label11;
  GtkWidget *PX860Iregi_label12;
  GtkObject *PX860Iregi1_spinbutton8_adj;
  GtkWidget *PX860Iregi1_spinbutton8;
  GtkObject *PX860Iregi1_spinbutton9_adj;
  GtkWidget *PX860Iregi1_spinbutton9;
  GtkObject *PX860Iregi1_spinbutton10_adj;
  GtkWidget *PX860Iregi1_spinbutton10;
  GtkObject *PX860Iregi1_spinbutton11_adj;
  GtkWidget *PX860Iregi1_spinbutton11;
  GtkObject *PX860Iregi1_spinbutton12_adj;
  GtkWidget *PX860Iregi1_spinbutton12;
  GtkWidget *PX860regi_label13;
  GtkWidget *PX860regi_label14;
  GtkWidget *PX860Iregi_label15;
  GtkWidget *hbox65;
  GtkWidget *hbuttonbox34;
  GtkWidget *PX860button;
  GtkWidget *PX860Iregi2_cancel_button;

  PX860Iregi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX860Iregi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX860Iregi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX860Iregi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX860Iregi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox136 = GTK_DIALOG (PX860Iregi1_dialog)->vbox;
  gtk_widget_show (vbox136);

  vbox137 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox137);
  gtk_box_pack_start (GTK_BOX (vbox136), vbox137, TRUE, TRUE, 0);

  PX860Iregi1_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to L."));
  gtk_widget_show (PX860Iregi1_label1);
  gtk_box_pack_start (GTK_BOX (vbox137), PX860Iregi1_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX860Iregi1_label1), 5, 5);

  hbox64 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox64);
  gtk_box_pack_start (GTK_BOX (vbox137), hbox64, TRUE, TRUE, 0);

  PX860Iregi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX860Iregi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox64), PX860Iregi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX860Iregi1_drawingarea, 128, 180);
  gtk_widget_set_events (PX860Iregi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox138 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox138);
  gtk_box_pack_start (GTK_BOX (hbox64), vbox138, TRUE, TRUE, 0);

  table65 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table65);
  gtk_box_pack_start (GTK_BOX (vbox138), table65, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table65), 5);

  PX860Iregi1_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX860Iregi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton1);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX860Iregi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton2);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX860Iregi1_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton3_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton3);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX860Iregi1_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton4_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton4);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX860Iregi1_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton5_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton5);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (PX860Iregi1_label3);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label3), 0, 0.5);

  PX860Iregi1_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (PX860Iregi1_label4);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label4), 0, 0.5);

  PX860Iregi1_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (PX860Iregi1_label5);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label5), 0, 0.5);

  PX860Iregi1_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (PX860Iregi1_label6);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label6), 0, 0.5);

  PX860Iregi1_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (PX860Iregi1_label7);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label7), 0, 0.5);

  PX860Iregi1_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (PX860Iregi1_label2);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi1_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label2), 0, 0.5);

  PX860Iregi1_label8 = gtk_label_new (_("Column F:"));
  gtk_widget_show (PX860Iregi1_label8);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_label8, 0, 1, 6, 7,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi1_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi1_label8), 0, 0.5);

  PX860Iregi1_spinbutton6_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  PX860Iregi1_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton6_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton6);
  gtk_table_attach (GTK_TABLE (table65), PX860Iregi1_spinbutton6, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator41 = gtk_hseparator_new ();
  gtk_widget_show (hseparator41);
  gtk_box_pack_start (GTK_BOX (vbox138), hseparator41, TRUE, TRUE, 0);

  table64 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table64);
  gtk_box_pack_start (GTK_BOX (vbox138), table64, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table64), 5);

  PX860Iregi1_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX860Iregi1_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton7_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton7);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi1_spinbutton7, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi_label9 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (PX860Iregi_label9);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi_label9, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi_label9), 0, 0.5);

  PX860Iregi_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (PX860Iregi_label10);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi_label10, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi_label10), 0, 0.5);

  PX860Iregi_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (PX860Iregi_label11);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi_label11, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi_label11), 0, 0.5);

  PX860Iregi_label12 = gtk_label_new (_("Column I:"));
  gtk_widget_show (PX860Iregi_label12);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi_label12, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi_label12), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi_label12), 0, 0.5);

  PX860Iregi1_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX860Iregi1_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton8_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton8);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi1_spinbutton8, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton9_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX860Iregi1_spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton9_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton9);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi1_spinbutton9, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton10_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX860Iregi1_spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton10_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton10);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi1_spinbutton10, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton11_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX860Iregi1_spinbutton11 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton11_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton11);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi1_spinbutton11, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi1_spinbutton12_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  PX860Iregi1_spinbutton12 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi1_spinbutton12_adj), 1, 0);
  gtk_widget_show (PX860Iregi1_spinbutton12);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi1_spinbutton12, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  PX860regi_label13 = gtk_label_new (_("Column J:"));
  gtk_widget_show (PX860regi_label13);
  gtk_table_attach (GTK_TABLE (table64), PX860regi_label13, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860regi_label13), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860regi_label13), 0, 0.5);

  PX860regi_label14 = gtk_label_new (_("Column K:"));
  gtk_widget_show (PX860regi_label14);
  gtk_table_attach (GTK_TABLE (table64), PX860regi_label14, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860regi_label14), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860regi_label14), 0, 0.5);

  PX860Iregi_label15 = gtk_label_new (_("Column L:"));
  gtk_widget_show (PX860Iregi_label15);
  gtk_table_attach (GTK_TABLE (table64), PX860Iregi_label15, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi_label15), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PX860Iregi_label15), 0, 0.5);

  hbox65 = GTK_DIALOG (PX860Iregi1_dialog)->action_area;
  gtk_widget_show (hbox65);
  gtk_container_set_border_width (GTK_CONTAINER (hbox65), 5);

  hbuttonbox34 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox34);
  gtk_box_pack_start (GTK_BOX (hbox65), hbuttonbox34, TRUE, FALSE, 0);

  PX860button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX860button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox34), PX860button);
  GTK_WIDGET_SET_FLAGS (PX860button, GTK_CAN_DEFAULT);

  PX860Iregi2_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (PX860Iregi2_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox34), PX860Iregi2_cancel_button);
  GTK_WIDGET_SET_FLAGS (PX860Iregi2_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX860Iregi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton9, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_08),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton9, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_08),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton10, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_09),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton10, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_09),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton11, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_10),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton11, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_10),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton12, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_11),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi1_spinbutton12, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_11),
                    NULL);
  g_signal_connect ((gpointer) PX860button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX860Iregi1_dialog, PX860Iregi1_dialog, "PX860Iregi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX860Iregi1_dialog, vbox136, "vbox136");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, vbox137, "vbox137");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label1, "PX860Iregi1_label1");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, hbox64, "hbox64");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_drawingarea, "PX860Iregi1_drawingarea");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, vbox138, "vbox138");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, table65, "table65");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton1, "PX860Iregi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton2, "PX860Iregi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton3, "PX860Iregi1_spinbutton3");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton4, "PX860Iregi1_spinbutton4");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton5, "PX860Iregi1_spinbutton5");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label3, "PX860Iregi1_label3");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label4, "PX860Iregi1_label4");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label5, "PX860Iregi1_label5");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label6, "PX860Iregi1_label6");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label7, "PX860Iregi1_label7");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label2, "PX860Iregi1_label2");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_label8, "PX860Iregi1_label8");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton6, "PX860Iregi1_spinbutton6");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, hseparator41, "hseparator41");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, table64, "table64");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton7, "PX860Iregi1_spinbutton7");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi_label9, "PX860Iregi_label9");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi_label10, "PX860Iregi_label10");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi_label11, "PX860Iregi_label11");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi_label12, "PX860Iregi_label12");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton8, "PX860Iregi1_spinbutton8");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton9, "PX860Iregi1_spinbutton9");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton10, "PX860Iregi1_spinbutton10");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton11, "PX860Iregi1_spinbutton11");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi1_spinbutton12, "PX860Iregi1_spinbutton12");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860regi_label13, "PX860regi_label13");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860regi_label14, "PX860regi_label14");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi_label15, "PX860Iregi_label15");
  GLADE_HOOKUP_OBJECT_NO_REF (PX860Iregi1_dialog, hbox65, "hbox65");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, hbuttonbox34, "hbuttonbox34");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860button, "PX860button");
  GLADE_HOOKUP_OBJECT (PX860Iregi1_dialog, PX860Iregi2_cancel_button, "PX860Iregi2_cancel_button");

  gtk_widget_grab_focus (PX860button);
  gtk_widget_grab_default (PX860button);
  return PX860Iregi1_dialog;
}

GtkWidget*
create_PX860Iregi2_dialog (void)
{
  GtkWidget *PX860Iregi2_dialog;
  GtkWidget *vbox139;
  GtkWidget *vbox140;
  GtkWidget *PX860Iregi2_label1;
  GtkWidget *hbox66;
  GtkWidget *PX860Iregi2_drawingarea;
  GtkWidget *vbox141;
  GtkWidget *vbox142;
  GtkWidget *PXX860Iregi2_label2;
  GtkWidget *table66;
  GtkWidget *PX860Iregi2_label3;
  GtkWidget *PX860Iregi2_label4;
  GtkObject *PX860Iregi2_spinbutton2_adj;
  GtkWidget *PX860Iregi2_spinbutton2;
  GtkObject *PX860Iregi2_spinbutton1_adj;
  GtkWidget *PX860Iregi2_spinbutton1;
  GtkWidget *hbox67;
  GtkWidget *hbuttonbox35;
  GtkWidget *PX860Iregi_ok_button;

  PX860Iregi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (PX860Iregi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (PX860Iregi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (PX860Iregi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (PX860Iregi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox139 = GTK_DIALOG (PX860Iregi2_dialog)->vbox;
  gtk_widget_show (vbox139);

  vbox140 = gtk_vbox_new (FALSE, 10);
  gtk_widget_show (vbox140);
  gtk_box_pack_start (GTK_BOX (vbox139), vbox140, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox140), 5);

  PX860Iregi2_label1 = gtk_label_new (_("Examine the printed patterns, and fill in the fields for columns M and N nwith the number of the pattern that is smoothest and has no stripes in nareas indicated by arrows."));
  gtk_widget_show (PX860Iregi2_label1);
  gtk_box_pack_start (GTK_BOX (vbox140), PX860Iregi2_label1, TRUE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (PX860Iregi2_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (PX860Iregi2_label1), 5, 5);

  hbox66 = gtk_hbox_new (FALSE, 8);
  gtk_widget_show (hbox66);
  gtk_box_pack_start (GTK_BOX (vbox140), hbox66, TRUE, TRUE, 0);

  PX860Iregi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (PX860Iregi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox66), PX860Iregi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (PX860Iregi2_drawingarea, 128, 180);
  gtk_widget_set_events (PX860Iregi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox141 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox141);
  gtk_box_pack_start (GTK_BOX (hbox66), vbox141, TRUE, TRUE, 0);

  vbox142 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox142);
  gtk_box_pack_start (GTK_BOX (vbox141), vbox142, TRUE, TRUE, 0);

  PXX860Iregi2_label2 = gtk_label_new (_("Vertical Alignment (-3 to +3)"));
  gtk_widget_show (PXX860Iregi2_label2);
  gtk_box_pack_start (GTK_BOX (vbox142), PXX860Iregi2_label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (PXX860Iregi2_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (PXX860Iregi2_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (PXX860Iregi2_label2), 0, 0.5);

  table66 = gtk_table_new (2, 2, TRUE);
  gtk_widget_show (table66);
  gtk_box_pack_start (GTK_BOX (vbox142), table66, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table66), 5);

  PX860Iregi2_label3 = gtk_label_new (_("Column M:"));
  gtk_widget_show (PX860Iregi2_label3);
  gtk_table_attach (GTK_TABLE (table66), PX860Iregi2_label3, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi2_label3), TRUE);

  PX860Iregi2_label4 = gtk_label_new (_("Column N:"));
  gtk_widget_show (PX860Iregi2_label4);
  gtk_table_attach (GTK_TABLE (table66), PX860Iregi2_label4, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (PX860Iregi2_label4), TRUE);

  PX860Iregi2_spinbutton2_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  PX860Iregi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (PX860Iregi2_spinbutton2);
  gtk_table_attach (GTK_TABLE (table66), PX860Iregi2_spinbutton2, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  PX860Iregi2_spinbutton1_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  PX860Iregi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (PX860Iregi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (PX860Iregi2_spinbutton1);
  gtk_table_attach (GTK_TABLE (table66), PX860Iregi2_spinbutton1, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND),
                    (GtkAttachOptions) (0), 0, 0);

  hbox67 = GTK_DIALOG (PX860Iregi2_dialog)->action_area;
  gtk_widget_show (hbox67);
  gtk_container_set_border_width (GTK_CONTAINER (hbox67), 5);

  hbuttonbox35 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox35);
  gtk_box_pack_start (GTK_BOX (hbox67), hbuttonbox35, TRUE, FALSE, 0);

  PX860Iregi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (PX860Iregi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox35), PX860Iregi_ok_button);
  GTK_WIDGET_SET_FLAGS (PX860Iregi_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) PX860Iregi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) PX860Iregi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (PX860Iregi2_dialog, PX860Iregi2_dialog, "PX860Iregi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (PX860Iregi2_dialog, vbox139, "vbox139");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, vbox140, "vbox140");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi2_label1, "PX860Iregi2_label1");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, hbox66, "hbox66");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi2_drawingarea, "PX860Iregi2_drawingarea");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, vbox141, "vbox141");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, vbox142, "vbox142");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PXX860Iregi2_label2, "PXX860Iregi2_label2");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, table66, "table66");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi2_label3, "PX860Iregi2_label3");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi2_label4, "PX860Iregi2_label4");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi2_spinbutton2, "PX860Iregi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi2_spinbutton1, "PX860Iregi2_spinbutton1");
  GLADE_HOOKUP_OBJECT_NO_REF (PX860Iregi2_dialog, hbox67, "hbox67");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, hbuttonbox35, "hbuttonbox35");
  GLADE_HOOKUP_OBJECT (PX860Iregi2_dialog, PX860Iregi_ok_button, "PX860Iregi_ok_button");

  gtk_widget_grab_focus (PX860Iregi_ok_button);
  gtk_widget_grab_default (PX860Iregi_ok_button);
  return PX860Iregi2_dialog;
}

GtkWidget*
create_pattern_check_dialog (void)
{
  GtkWidget *pattern_check_dialog;
  GtkWidget *vbox150;
  GtkWidget *vbox151;
  GtkWidget *hbox73;
  GtkWidget *pattern_chek_label1;
  GtkWidget *table69;
  GtkWidget *hbox82;
  GtkWidget *pattern_check_frame1;
  GtkWidget *hbox83;
  GtkWidget *pattern_check_frame2;
  GtkWidget *frame3;
  GtkWidget *pattern_check_label2;
  GtkWidget *frame4;
  GtkWidget *pattern_check_label3;
  GtkWidget *hbox70;
  GtkWidget *hbuttonbox38;
  GtkWidget *pattern_check_exit_button;
  GtkWidget *pattern_check_cleaning_button;

  pattern_check_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (pattern_check_dialog), _("Pattern Check"));
  gtk_window_set_modal (GTK_WINDOW (pattern_check_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (pattern_check_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (pattern_check_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox150 = GTK_DIALOG (pattern_check_dialog)->vbox;
  gtk_widget_show (vbox150);

  vbox151 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox151);
  gtk_box_pack_start (GTK_BOX (vbox150), vbox151, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox151), 3);

  hbox73 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox73);
  gtk_box_pack_start (GTK_BOX (vbox151), hbox73, FALSE, TRUE, 0);

  pattern_chek_label1 = gtk_label_new (_("Which of the following patterns does the printed pattern most closely resemble?"));
  gtk_widget_show (pattern_chek_label1);
  gtk_box_pack_start (GTK_BOX (hbox73), pattern_chek_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (pattern_chek_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (pattern_chek_label1), 5, 5);

  table69 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table69);
  gtk_box_pack_start (GTK_BOX (vbox151), table69, FALSE, FALSE, 0);

  hbox82 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox82);
  gtk_table_attach (GTK_TABLE (table69), hbox82, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  pattern_check_frame1 = gtk_frame_new (NULL);
  gtk_widget_show (pattern_check_frame1);
  gtk_box_pack_start (GTK_BOX (hbox82), pattern_check_frame1, FALSE, TRUE, 0);
  gtk_widget_set_size_request (pattern_check_frame1, 285, 185);

  hbox83 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox83);
  gtk_table_attach (GTK_TABLE (table69), hbox83, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  pattern_check_frame2 = gtk_frame_new (NULL);
  gtk_widget_show (pattern_check_frame2);
  gtk_box_pack_start (GTK_BOX (hbox83), pattern_check_frame2, FALSE, TRUE, 0);
  gtk_widget_set_size_request (pattern_check_frame2, 285, 185);

  frame3 = gtk_frame_new (NULL);
  gtk_widget_show (frame3);
  gtk_table_attach (GTK_TABLE (table69), frame3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame3), 5);

  pattern_check_label2 = gtk_label_new (_("The print head nozzles are not clogged.nIf the printed pattern resembles this pattern, you can nuse the printer immediately.nClick Exit.n"));
  gtk_widget_show (pattern_check_label2);
  gtk_container_add (GTK_CONTAINER (frame3), pattern_check_label2);
  gtk_label_set_justify (GTK_LABEL (pattern_check_label2), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (pattern_check_label2), 0.5, 0.1);
  gtk_misc_set_padding (GTK_MISC (pattern_check_label2), 0, 3);

  frame4 = gtk_frame_new (NULL);
  gtk_widget_show (frame4);
  gtk_table_attach (GTK_TABLE (table69), frame4, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame4), 5);

  pattern_check_label3 = gtk_label_new (_("If the printed pattern resembles this pattern, the nprint head nozzles may be clogged.nClick Cleaning.nnIf the printed pattern does not improve even nafter Cleaning is executed two to three times, nexecute Deep Cleaning."));
  gtk_widget_show (pattern_check_label3);
  gtk_container_add (GTK_CONTAINER (frame4), pattern_check_label3);
  gtk_label_set_justify (GTK_LABEL (pattern_check_label3), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (pattern_check_label3), 0.5, 0.1);
  gtk_misc_set_padding (GTK_MISC (pattern_check_label3), 0, 3);

  hbox70 = GTK_DIALOG (pattern_check_dialog)->action_area;
  gtk_widget_show (hbox70);
  gtk_container_set_border_width (GTK_CONTAINER (hbox70), 10);

  hbuttonbox38 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox38);
  gtk_box_pack_start (GTK_BOX (hbox70), hbuttonbox38, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox38), GTK_BUTTONBOX_END);

  pattern_check_exit_button = gtk_button_new_with_mnemonic (_("Exit"));
  gtk_widget_show (pattern_check_exit_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox38), pattern_check_exit_button);
  GTK_WIDGET_SET_FLAGS (pattern_check_exit_button, GTK_CAN_DEFAULT);

  pattern_check_cleaning_button = gtk_button_new_with_mnemonic (_("Cleaning"));
  gtk_widget_show (pattern_check_cleaning_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox38), pattern_check_cleaning_button);
  GTK_WIDGET_SET_FLAGS (pattern_check_cleaning_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) pattern_check_dialog, "destroy",
                    G_CALLBACK (on_pattern_check_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) pattern_check_dialog, "delete_event",
                    G_CALLBACK (on_pattern_check_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) pattern_check_exit_button, "clicked",
                    G_CALLBACK (on_pattern_check_exit_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) pattern_check_cleaning_button, "clicked",
                    G_CALLBACK (on_pattern_check_cleaning_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (pattern_check_dialog, pattern_check_dialog, "pattern_check_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (pattern_check_dialog, vbox150, "vbox150");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, vbox151, "vbox151");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, hbox73, "hbox73");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_chek_label1, "pattern_chek_label1");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, table69, "table69");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, hbox82, "hbox82");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_check_frame1, "pattern_check_frame1");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, hbox83, "hbox83");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_check_frame2, "pattern_check_frame2");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, frame3, "frame3");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_check_label2, "pattern_check_label2");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, frame4, "frame4");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_check_label3, "pattern_check_label3");
  GLADE_HOOKUP_OBJECT_NO_REF (pattern_check_dialog, hbox70, "hbox70");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, hbuttonbox38, "hbuttonbox38");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_check_exit_button, "pattern_check_exit_button");
  GLADE_HOOKUP_OBJECT (pattern_check_dialog, pattern_check_cleaning_button, "pattern_check_cleaning_button");

  gtk_widget_grab_focus (pattern_check_exit_button);
  gtk_widget_grab_default (pattern_check_exit_button);
  return pattern_check_dialog;
}

GtkWidget*
create_nozzle_check_dialog (void)
{
  GtkWidget *nozzle_check_dialog;
  GtkWidget *vbox154;
  GtkWidget *vbox155;
  GtkWidget *nozzle_check_label1;
  GtkWidget *hbox74;
  GtkWidget *hbuttonbox39;
  GtkWidget *nozzle_check_execute_button;
  GtkWidget *nozzle_check_cancel_button;

  nozzle_check_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (nozzle_check_dialog), _("Nozzle Check"));
  gtk_window_set_modal (GTK_WINDOW (nozzle_check_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (nozzle_check_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (nozzle_check_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox154 = GTK_DIALOG (nozzle_check_dialog)->vbox;
  gtk_widget_show (vbox154);

  vbox155 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox155);
  gtk_box_pack_start (GTK_BOX (vbox154), vbox155, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox155), 3);

  nozzle_check_label1 = gtk_label_new (_("Prints pattern that lets you check whether print head nozzles are clogged.nnLoad a sheet of A4 or letter size plain paper in the paper source selected nby the Paper Feed Switch, and click the Print Check Pattern."));
  gtk_widget_show (nozzle_check_label1);
  gtk_box_pack_start (GTK_BOX (vbox155), nozzle_check_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (nozzle_check_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (nozzle_check_label1), 5, 5);

  hbox74 = GTK_DIALOG (nozzle_check_dialog)->action_area;
  gtk_widget_show (hbox74);
  gtk_container_set_border_width (GTK_CONTAINER (hbox74), 10);

  hbuttonbox39 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox39);
  gtk_box_pack_start (GTK_BOX (hbox74), hbuttonbox39, FALSE, FALSE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox39), GTK_BUTTONBOX_SPREAD);

  nozzle_check_execute_button = gtk_button_new_with_mnemonic (_("Print Check Pattern"));
  gtk_widget_show (nozzle_check_execute_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox39), nozzle_check_execute_button);
  GTK_WIDGET_SET_FLAGS (nozzle_check_execute_button, GTK_CAN_DEFAULT);

  nozzle_check_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (nozzle_check_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox39), nozzle_check_cancel_button);
  GTK_WIDGET_SET_FLAGS (nozzle_check_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) nozzle_check_dialog, "destroy",
                    G_CALLBACK (on_nozzle_check_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) nozzle_check_dialog, "delete_event",
                    G_CALLBACK (on_nozzle_check_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) nozzle_check_execute_button, "clicked",
                    G_CALLBACK (on_nozzle_check_execute_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) nozzle_check_cancel_button, "clicked",
                    G_CALLBACK (on_nozzle_check_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (nozzle_check_dialog, nozzle_check_dialog, "nozzle_check_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (nozzle_check_dialog, vbox154, "vbox154");
  GLADE_HOOKUP_OBJECT (nozzle_check_dialog, vbox155, "vbox155");
  GLADE_HOOKUP_OBJECT (nozzle_check_dialog, nozzle_check_label1, "nozzle_check_label1");
  GLADE_HOOKUP_OBJECT_NO_REF (nozzle_check_dialog, hbox74, "hbox74");
  GLADE_HOOKUP_OBJECT (nozzle_check_dialog, hbuttonbox39, "hbuttonbox39");
  GLADE_HOOKUP_OBJECT (nozzle_check_dialog, nozzle_check_execute_button, "nozzle_check_execute_button");
  GLADE_HOOKUP_OBJECT (nozzle_check_dialog, nozzle_check_cancel_button, "nozzle_check_cancel_button");

  gtk_widget_grab_focus (nozzle_check_execute_button);
  gtk_widget_grab_default (nozzle_check_execute_button);
  return nozzle_check_dialog;
}

GtkWidget*
create_head_alignment_dialog (void)
{
  GtkWidget *head_alignment_dialog;
  GtkWidget *vbox156;
  GtkWidget *vbox157;
  GtkWidget *head_alignment_label1;
  GtkWidget *hbox75;
  GtkWidget *hbuttonbox40;
  GtkWidget *head_alignment_execute_button;
  GtkWidget *head_alignment_check_setting_button;
  GtkWidget *head_alignment_cancel_button;

  head_alignment_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (head_alignment_dialog), _("Start Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (head_alignment_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (head_alignment_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (head_alignment_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox156 = GTK_DIALOG (head_alignment_dialog)->vbox;
  gtk_widget_show (vbox156);

  vbox157 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox157);
  gtk_box_pack_start (GTK_BOX (vbox156), vbox157, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox157), 3);

  head_alignment_label1 = gtk_label_new (_("Starting automatic head alignment.nnSince the alignment involves printing, ready the printer (connect the cable and turn the npower on), load one sheet of A4 or letter size plain paper in the sheet feeder and click nPrint Head Alignment.nnTo carry out manual head alignment, click Cancel.nNext, click Custom Settings on the Maintenance tab of the printer driver, check Align nheads manually, and click Send. Then try again.nnTo print and check the current setting, click Check Setting.n"));
  gtk_widget_show (head_alignment_label1);
  gtk_box_pack_start (GTK_BOX (vbox157), head_alignment_label1, FALSE, TRUE, 0);
  gtk_label_set_justify (GTK_LABEL (head_alignment_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (head_alignment_label1), 0.05, 0.5);
  gtk_misc_set_padding (GTK_MISC (head_alignment_label1), 5, 5);

  hbox75 = GTK_DIALOG (head_alignment_dialog)->action_area;
  gtk_widget_show (hbox75);
  gtk_container_set_border_width (GTK_CONTAINER (hbox75), 10);

  hbuttonbox40 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox40);
  gtk_box_pack_start (GTK_BOX (hbox75), hbuttonbox40, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox40), GTK_BUTTONBOX_END);

  head_alignment_execute_button = gtk_button_new_with_mnemonic (_("Print Head Alignment"));
  gtk_widget_show (head_alignment_execute_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox40), head_alignment_execute_button);
  GTK_WIDGET_SET_FLAGS (head_alignment_execute_button, GTK_CAN_DEFAULT);

  head_alignment_check_setting_button = gtk_button_new_with_mnemonic (_("Check Setting"));
  gtk_widget_show (head_alignment_check_setting_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox40), head_alignment_check_setting_button);
  GTK_WIDGET_SET_FLAGS (head_alignment_check_setting_button, GTK_CAN_DEFAULT);

  head_alignment_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (head_alignment_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox40), head_alignment_cancel_button);
  GTK_WIDGET_SET_FLAGS (head_alignment_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) head_alignment_dialog, "destroy",
                    G_CALLBACK (on_head_alignment_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) head_alignment_dialog, "delete_event",
                    G_CALLBACK (on_head_alignment_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) head_alignment_execute_button, "clicked",
                    G_CALLBACK (on_head_alignment_execute_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) head_alignment_check_setting_button, "clicked",
                    G_CALLBACK (on_head_alignment_check_setting_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) head_alignment_cancel_button, "clicked",
                    G_CALLBACK (on_head_alignment_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (head_alignment_dialog, head_alignment_dialog, "head_alignment_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (head_alignment_dialog, vbox156, "vbox156");
  GLADE_HOOKUP_OBJECT (head_alignment_dialog, vbox157, "vbox157");
  GLADE_HOOKUP_OBJECT (head_alignment_dialog, head_alignment_label1, "head_alignment_label1");
  GLADE_HOOKUP_OBJECT_NO_REF (head_alignment_dialog, hbox75, "hbox75");
  GLADE_HOOKUP_OBJECT (head_alignment_dialog, hbuttonbox40, "hbuttonbox40");
  GLADE_HOOKUP_OBJECT (head_alignment_dialog, head_alignment_execute_button, "head_alignment_execute_button");
  GLADE_HOOKUP_OBJECT (head_alignment_dialog, head_alignment_check_setting_button, "head_alignment_check_setting_button");
  GLADE_HOOKUP_OBJECT (head_alignment_dialog, head_alignment_cancel_button, "head_alignment_cancel_button");

  gtk_widget_grab_focus (head_alignment_execute_button);
  gtk_widget_grab_default (head_alignment_execute_button);
  return head_alignment_dialog;
}

GtkWidget*
create_plate_cleaning_dialog (void)
{
  GtkWidget *plate_cleaning_dialog;
  GtkWidget *vbox158;
  GtkWidget *vbox159;
  GtkWidget *plate_cleaning_label;
  GtkWidget *hbox76;
  GtkWidget *hbuttonbox41;
  GtkWidget *plate_cleaning_execute_button;
  GtkWidget *plate_cleaning_cancel_button;

  plate_cleaning_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (plate_cleaning_dialog), _("Bottom Plate Cleaning"));
  gtk_window_set_modal (GTK_WINDOW (plate_cleaning_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (plate_cleaning_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (plate_cleaning_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox158 = GTK_DIALOG (plate_cleaning_dialog)->vbox;
  gtk_widget_show (vbox158);

  vbox159 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox159);
  gtk_box_pack_start (GTK_BOX (vbox158), vbox159, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox159), 3);

  plate_cleaning_label = gtk_label_new (_("Executes Bottom Plate Cleaning.nn1. Remove the paper from the sheet feeder.n2. Fold A4 or letter size plain paper in half. Unfold the paper, and load the paper nin the sheet feeder with the ridge of the crease facing down. Then click Execute.n"));
  gtk_widget_show (plate_cleaning_label);
  gtk_box_pack_start (GTK_BOX (vbox159), plate_cleaning_label, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (plate_cleaning_label), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (plate_cleaning_label), 0.05, 0.5);
  gtk_misc_set_padding (GTK_MISC (plate_cleaning_label), 5, 5);

  hbox76 = GTK_DIALOG (plate_cleaning_dialog)->action_area;
  gtk_widget_show (hbox76);
  gtk_container_set_border_width (GTK_CONTAINER (hbox76), 10);

  hbuttonbox41 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox41);
  gtk_box_pack_start (GTK_BOX (hbox76), hbuttonbox41, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox41), GTK_BUTTONBOX_END);

  plate_cleaning_execute_button = gtk_button_new_with_mnemonic (_("Execute"));
  gtk_widget_show (plate_cleaning_execute_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox41), plate_cleaning_execute_button);
  GTK_WIDGET_SET_FLAGS (plate_cleaning_execute_button, GTK_CAN_DEFAULT);

  plate_cleaning_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (plate_cleaning_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox41), plate_cleaning_cancel_button);
  GTK_WIDGET_SET_FLAGS (plate_cleaning_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) plate_cleaning_dialog, "destroy",
                    G_CALLBACK (on_plate_cleaning_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) plate_cleaning_dialog, "delete_event",
                    G_CALLBACK (on_plate_cleaning_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) plate_cleaning_execute_button, "clicked",
                    G_CALLBACK (on_plate_cleaning_execute_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) plate_cleaning_cancel_button, "clicked",
                    G_CALLBACK (on_plate_cleaning_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (plate_cleaning_dialog, plate_cleaning_dialog, "plate_cleaning_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (plate_cleaning_dialog, vbox158, "vbox158");
  GLADE_HOOKUP_OBJECT (plate_cleaning_dialog, vbox159, "vbox159");
  GLADE_HOOKUP_OBJECT (plate_cleaning_dialog, plate_cleaning_label, "plate_cleaning_label");
  GLADE_HOOKUP_OBJECT_NO_REF (plate_cleaning_dialog, hbox76, "hbox76");
  GLADE_HOOKUP_OBJECT (plate_cleaning_dialog, hbuttonbox41, "hbuttonbox41");
  GLADE_HOOKUP_OBJECT (plate_cleaning_dialog, plate_cleaning_execute_button, "plate_cleaning_execute_button");
  GLADE_HOOKUP_OBJECT (plate_cleaning_dialog, plate_cleaning_cancel_button, "plate_cleaning_cancel_button");

  gtk_widget_grab_focus (plate_cleaning_execute_button);
  gtk_widget_grab_default (plate_cleaning_execute_button);
  return plate_cleaning_dialog;
}

GtkWidget*
create_ip8600regi_dialog (void)
{
  GtkWidget *ip8600regi_dialog;
  GtkWidget *vbox160;
  GtkWidget *vbox161;
  GtkWidget *ip8600regi_label1;
  GtkWidget *hbox78;
  GtkWidget *ip8600regi_drawingarea;
  GtkWidget *vbox162;
  GtkWidget *table67;
  GtkObject *ip8600regi_spinbutton1_adj;
  GtkWidget *ip8600regi_spinbutton1;
  GtkObject *ip8600regi_spinbutton2_adj;
  GtkWidget *ip8600regi_spinbutton2;
  GtkObject *ip8600regi_spinbutton3_adj;
  GtkWidget *ip8600regi_spinbutton3;
  GtkObject *ip8600regi_spinbutton4_adj;
  GtkWidget *ip8600regi_spinbutton4;
  GtkObject *ip8600regi_spinbutton5_adj;
  GtkWidget *ip8600regi_spinbutton5;
  GtkWidget *ip8600regi_label3;
  GtkWidget *ip8600regi_label4;
  GtkWidget *ip8600regi_label5;
  GtkWidget *ip8600regi_label6;
  GtkWidget *ip8600regi_label7;
  GtkWidget *ip8600regi_label2;
  GtkWidget *ip8600regi_label8;
  GtkObject *ip8600regi_spinbutton6_adj;
  GtkWidget *ip8600regi_spinbutton6;
  GtkWidget *ip8600regi_label9;
  GtkObject *ip8600regi_spinbutton7_adj;
  GtkWidget *ip8600regi_spinbutton7;
  GtkWidget *hseparator42;
  GtkWidget *table68;
  GtkWidget *ip8600regi_label10;
  GtkWidget *ip8600regi_label12;
  GtkWidget *ip8600regi_label13;
  GtkObject *ip8600regi_spinbutton9_adj;
  GtkWidget *ip8600regi_spinbutton9;
  GtkObject *ip8600regi_spinbutton10_adj;
  GtkWidget *ip8600regi_spinbutton10;
  GtkObject *ip8600regi_spinbutton11_adj;
  GtkWidget *ip8600regi_spinbutton11;
  GtkWidget *ip8600regi_label14;
  GtkObject *ip8600regi_spinbutton8_adj;
  GtkWidget *ip8600regi_spinbutton8;
  GtkWidget *ip8600regi_label11;
  GtkWidget *hbox77;
  GtkWidget *hbuttonbox42;
  GtkWidget *ip8600regi_ok_button;
  GtkWidget *ip8600regi_cancel_button;

  ip8600regi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (ip8600regi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (ip8600regi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (ip8600regi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (ip8600regi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox160 = GTK_DIALOG (ip8600regi_dialog)->vbox;
  gtk_widget_show (vbox160);

  vbox161 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox161);
  gtk_box_pack_start (GTK_BOX (vbox160), vbox161, TRUE, TRUE, 0);

  ip8600regi_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter the npattern number of the pattern with the least amount of streaking in the nfields for columns A to K."));
  gtk_widget_show (ip8600regi_label1);
  gtk_box_pack_start (GTK_BOX (vbox161), ip8600regi_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (ip8600regi_label1), 5, 5);

  hbox78 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox78);
  gtk_box_pack_start (GTK_BOX (vbox161), hbox78, TRUE, TRUE, 0);

  ip8600regi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (ip8600regi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox78), ip8600regi_drawingarea, TRUE, TRUE, 10);
  gtk_widget_set_size_request (ip8600regi_drawingarea, 128, 180);
  gtk_widget_set_events (ip8600regi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox162 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox162);
  gtk_box_pack_start (GTK_BOX (hbox78), vbox162, TRUE, TRUE, 0);

  table67 = gtk_table_new (8, 2, FALSE);
  gtk_widget_show (table67);
  gtk_box_pack_start (GTK_BOX (vbox162), table67, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table67), 5);

  ip8600regi_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton1_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton2_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton3_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton4_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton5_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton5);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (ip8600regi_label3);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label3), 0, 0.5);

  ip8600regi_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (ip8600regi_label4);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label4), 0, 0.5);

  ip8600regi_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (ip8600regi_label5);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label5), 0, 0.5);

  ip8600regi_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (ip8600regi_label6);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label6), 0, 0.5);

  ip8600regi_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (ip8600regi_label7);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label7), 0, 0.5);

  ip8600regi_label2 = gtk_label_new (_("Horizontal Alignment (-3 to +7)     "));
  gtk_widget_show (ip8600regi_label2);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label2), 0, 0.5);

  ip8600regi_label8 = gtk_label_new (_("Column F:"));
  gtk_widget_show (ip8600regi_label8);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label8, 0, 1, 6, 7,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label8), 0, 0.5);

  ip8600regi_spinbutton6_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton6_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton6);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton6, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_label9 = gtk_label_new (_("Column G:"));
  gtk_widget_show (ip8600regi_label9);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_label9, 0, 1, 7, 8,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label9), 0, 0.5);

  ip8600regi_spinbutton7_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  ip8600regi_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton7_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton7);
  gtk_table_attach (GTK_TABLE (table67), ip8600regi_spinbutton7, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator42 = gtk_hseparator_new ();
  gtk_widget_show (hseparator42);
  gtk_box_pack_start (GTK_BOX (vbox162), hseparator42, TRUE, TRUE, 0);

  table68 = gtk_table_new (5, 2, FALSE);
  gtk_widget_show (table68);
  gtk_box_pack_start (GTK_BOX (vbox162), table68, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table68), 5);

  ip8600regi_label10 = gtk_label_new (_("Bi-directional Alignment (-5 to +5)"));
  gtk_widget_show (ip8600regi_label10);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_label10, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ip8600regi_label10), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label10), 0, 0.5);

  ip8600regi_label12 = gtk_label_new (_("Column I:"));
  gtk_widget_show (ip8600regi_label12);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_label12, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label12), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label12), 0, 0.5);

  ip8600regi_label13 = gtk_label_new (_("Column J:"));
  gtk_widget_show (ip8600regi_label13);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_label13, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label13), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label13), 0, 0.5);

  ip8600regi_spinbutton9_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  ip8600regi_spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton9_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton9);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_spinbutton9, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_spinbutton10_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  ip8600regi_spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton10_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton10);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_spinbutton10, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_spinbutton11_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  ip8600regi_spinbutton11 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton11_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton11);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_spinbutton11, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_label14 = gtk_label_new (_("Column K:"));
  gtk_widget_show (ip8600regi_label14);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_label14, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label14), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label14), 0, 0.5);

  ip8600regi_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  ip8600regi_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (ip8600regi_spinbutton8_adj), 1, 0);
  gtk_widget_show (ip8600regi_spinbutton8);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_spinbutton8, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  ip8600regi_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (ip8600regi_label11);
  gtk_table_attach (GTK_TABLE (table68), ip8600regi_label11, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (ip8600regi_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (ip8600regi_label11), 0, 0.5);

  hbox77 = GTK_DIALOG (ip8600regi_dialog)->action_area;
  gtk_widget_show (hbox77);
  gtk_container_set_border_width (GTK_CONTAINER (hbox77), 5);

  hbuttonbox42 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox42);
  gtk_box_pack_start (GTK_BOX (hbox77), hbuttonbox42, TRUE, FALSE, 0);

  ip8600regi_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (ip8600regi_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox42), ip8600regi_ok_button);
  GTK_WIDGET_SET_FLAGS (ip8600regi_ok_button, GTK_CAN_DEFAULT);

  ip8600regi_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (ip8600regi_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox42), ip8600regi_cancel_button);
  GTK_WIDGET_SET_FLAGS (ip8600regi_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) ip8600regi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton9, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_08),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton9, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_08),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton10, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_09),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton10, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_09),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton11, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_10),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton11, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_10),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ip8600regi_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ip8600regi_dialog, ip8600regi_dialog, "ip8600regi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (ip8600regi_dialog, vbox160, "vbox160");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, vbox161, "vbox161");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label1, "ip8600regi_label1");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, hbox78, "hbox78");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_drawingarea, "ip8600regi_drawingarea");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, vbox162, "vbox162");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, table67, "table67");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton1, "ip8600regi_spinbutton1");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton2, "ip8600regi_spinbutton2");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton3, "ip8600regi_spinbutton3");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton4, "ip8600regi_spinbutton4");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton5, "ip8600regi_spinbutton5");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label3, "ip8600regi_label3");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label4, "ip8600regi_label4");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label5, "ip8600regi_label5");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label6, "ip8600regi_label6");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label7, "ip8600regi_label7");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label2, "ip8600regi_label2");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label8, "ip8600regi_label8");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton6, "ip8600regi_spinbutton6");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label9, "ip8600regi_label9");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton7, "ip8600regi_spinbutton7");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, hseparator42, "hseparator42");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, table68, "table68");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label10, "ip8600regi_label10");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label12, "ip8600regi_label12");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label13, "ip8600regi_label13");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton9, "ip8600regi_spinbutton9");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton10, "ip8600regi_spinbutton10");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton11, "ip8600regi_spinbutton11");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label14, "ip8600regi_label14");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_spinbutton8, "ip8600regi_spinbutton8");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_label11, "ip8600regi_label11");
  GLADE_HOOKUP_OBJECT_NO_REF (ip8600regi_dialog, hbox77, "hbox77");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, hbuttonbox42, "hbuttonbox42");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_ok_button, "ip8600regi_ok_button");
  GLADE_HOOKUP_OBJECT (ip8600regi_dialog, ip8600regi_cancel_button, "ip8600regi_cancel_button");

  gtk_widget_grab_focus (ip8600regi_ok_button);
  gtk_widget_grab_default (ip8600regi_ok_button);
  return ip8600regi_dialog;
}

GtkWidget*
create_deep_cleaning_dialog (void)
{
  GtkWidget *deep_cleaning_dialog;
  GtkWidget *vbox163;
  GtkWidget *vbox164;
  GtkWidget *deep_cleaning_label1;
  GtkWidget *hbox84;
  GtkWidget *hbuttonbox43;
  GtkWidget *deep_cleaning_execute_button;
  GtkWidget *deep_cleaning_cancel_button;

  deep_cleaning_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (deep_cleaning_dialog), _("Deep Cleaning"));
  gtk_window_set_modal (GTK_WINDOW (deep_cleaning_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (deep_cleaning_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (deep_cleaning_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox163 = GTK_DIALOG (deep_cleaning_dialog)->vbox;
  gtk_widget_show (vbox163);

  vbox164 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox164);
  gtk_box_pack_start (GTK_BOX (vbox163), vbox164, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox164), 3);

  deep_cleaning_label1 = gtk_label_new (_("Unclogs nozzles that cannot be cleared by regular cleaning.nnDeep cleaning consumes much more ink than regular cleaning. Execute Deep nCleaning only if the nozzle condition does not improve after regular cleaning.nnAfter the deep cleaning ends, execute Nozzle Check and check whether the nprint head nozzles have been unclogged."));
  gtk_widget_show (deep_cleaning_label1);
  gtk_box_pack_start (GTK_BOX (vbox164), deep_cleaning_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (deep_cleaning_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (deep_cleaning_label1), 0.05, 0.5);
  gtk_misc_set_padding (GTK_MISC (deep_cleaning_label1), 5, 5);

  hbox84 = GTK_DIALOG (deep_cleaning_dialog)->action_area;
  gtk_widget_show (hbox84);
  gtk_container_set_border_width (GTK_CONTAINER (hbox84), 10);

  hbuttonbox43 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox43);
  gtk_box_pack_start (GTK_BOX (hbox84), hbuttonbox43, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox43), GTK_BUTTONBOX_END);

  deep_cleaning_execute_button = gtk_button_new_with_mnemonic (_("Execute"));
  gtk_widget_show (deep_cleaning_execute_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox43), deep_cleaning_execute_button);
  GTK_WIDGET_SET_FLAGS (deep_cleaning_execute_button, GTK_CAN_DEFAULT);

  deep_cleaning_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (deep_cleaning_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox43), deep_cleaning_cancel_button);
  GTK_WIDGET_SET_FLAGS (deep_cleaning_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) deep_cleaning_dialog, "destroy",
                    G_CALLBACK (on_plate_deep_cleaning_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) deep_cleaning_dialog, "delete_event",
                    G_CALLBACK (on_deep_cleaning_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) deep_cleaning_execute_button, "clicked",
                    G_CALLBACK (on_deep_cleaning_execute_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) deep_cleaning_cancel_button, "clicked",
                    G_CALLBACK (on_deep_cleaning_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (deep_cleaning_dialog, deep_cleaning_dialog, "deep_cleaning_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (deep_cleaning_dialog, vbox163, "vbox163");
  GLADE_HOOKUP_OBJECT (deep_cleaning_dialog, vbox164, "vbox164");
  GLADE_HOOKUP_OBJECT (deep_cleaning_dialog, deep_cleaning_label1, "deep_cleaning_label1");
  GLADE_HOOKUP_OBJECT_NO_REF (deep_cleaning_dialog, hbox84, "hbox84");
  GLADE_HOOKUP_OBJECT (deep_cleaning_dialog, hbuttonbox43, "hbuttonbox43");
  GLADE_HOOKUP_OBJECT (deep_cleaning_dialog, deep_cleaning_execute_button, "deep_cleaning_execute_button");
  GLADE_HOOKUP_OBJECT (deep_cleaning_dialog, deep_cleaning_cancel_button, "deep_cleaning_cancel_button");

  gtk_widget_grab_focus (deep_cleaning_execute_button);
  gtk_widget_grab_default (deep_cleaning_execute_button);
  return deep_cleaning_dialog;
}

GtkWidget*
create_pagesize_dialog (void)
{
  GtkWidget *pagesize_dialog;
  GtkWidget *vbox165;
  GtkWidget *vbox166;
  GtkWidget *label126;
  GtkWidget *hbox85;
  GtkWidget *hbuttonbox44;
  GtkWidget *pagesize_dialog_ok_button;
  GtkWidget *pagesize_dialog_cancel_button;

  pagesize_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (pagesize_dialog), _("Changing the Paper Source"));
  gtk_window_set_modal (GTK_WINDOW (pagesize_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (pagesize_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (pagesize_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox165 = GTK_DIALOG (pagesize_dialog)->vbox;
  gtk_widget_show (vbox165);

  vbox166 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (vbox166);
  gtk_box_pack_start (GTK_BOX (vbox165), vbox166, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox166), 16);

  label126 = gtk_label_new (_("The selected paper size cannot be used in the current Paper Source setting.nPaper Source setting is changed to the Auto Sheet Feeder."));
  gtk_widget_show (label126);
  gtk_box_pack_start (GTK_BOX (vbox166), label126, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label126), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label126), 7.45058e-09, 0.5);

  hbox85 = GTK_DIALOG (pagesize_dialog)->action_area;
  gtk_widget_show (hbox85);
  gtk_container_set_border_width (GTK_CONTAINER (hbox85), 5);

  hbuttonbox44 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox44);
  gtk_box_pack_start (GTK_BOX (hbox85), hbuttonbox44, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox44), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox44), 0);

  pagesize_dialog_ok_button = gtk_button_new_with_mnemonic (_("Change"));
  gtk_widget_show (pagesize_dialog_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox44), pagesize_dialog_ok_button);
  GTK_WIDGET_SET_FLAGS (pagesize_dialog_ok_button, GTK_CAN_DEFAULT);

  pagesize_dialog_cancel_button = gtk_button_new_with_mnemonic (_("Back to Setup"));
  gtk_widget_show (pagesize_dialog_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox44), pagesize_dialog_cancel_button);
  GTK_WIDGET_SET_FLAGS (pagesize_dialog_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) pagesize_dialog, "delete_event",
                    G_CALLBACK (on_pagesize_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) pagesize_dialog_ok_button, "clicked",
                    G_CALLBACK (on_pagesize_dialog_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) pagesize_dialog_cancel_button, "clicked",
                    G_CALLBACK (on_pagesize_dialog_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (pagesize_dialog, pagesize_dialog, "pagesize_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (pagesize_dialog, vbox165, "vbox165");
  GLADE_HOOKUP_OBJECT (pagesize_dialog, vbox166, "vbox166");
  GLADE_HOOKUP_OBJECT (pagesize_dialog, label126, "label126");
  GLADE_HOOKUP_OBJECT_NO_REF (pagesize_dialog, hbox85, "hbox85");
  GLADE_HOOKUP_OBJECT (pagesize_dialog, hbuttonbox44, "hbuttonbox44");
  GLADE_HOOKUP_OBJECT (pagesize_dialog, pagesize_dialog_ok_button, "pagesize_dialog_ok_button");
  GLADE_HOOKUP_OBJECT (pagesize_dialog, pagesize_dialog_cancel_button, "pagesize_dialog_cancel_button");

  gtk_widget_grab_focus (pagesize_dialog_ok_button);
  gtk_widget_grab_default (pagesize_dialog_ok_button);
  return pagesize_dialog;
}

GtkWidget*
create_IP4200regi1_dialog (void)
{
  GtkWidget *IP4200regi1_dialog;
  GtkWidget *vbox167;
  GtkWidget *vbox168;
  GtkWidget *IP4200reg1_label1;
  GtkWidget *hbox87;
  GtkWidget *IP4200regi1_drawingarea;
  GtkWidget *vbox169;
  GtkWidget *table70;
  GtkObject *IP4200regi1_spinbutton1_adj;
  GtkWidget *IP4200regi1_spinbutton1;
  GtkObject *IP4200regi1_spinbutton2_adj;
  GtkWidget *IP4200regi1_spinbutton2;
  GtkObject *IP4200regi1_spinbutton3_adj;
  GtkWidget *IP4200regi1_spinbutton3;
  GtkObject *IP4200regi1_spinbutton4_adj;
  GtkWidget *IP4200regi1_spinbutton4;
  GtkObject *IP4200regi1_spinbutton5_adj;
  GtkWidget *IP4200regi1_spinbutton5;
  GtkObject *IP4200regi1_spinbutton6_adj;
  GtkWidget *IP4200regi1_spinbutton6;
  GtkWidget *IP4200reg1_label10;
  GtkWidget *IP4200reg1_label11;
  GtkWidget *IP4200reg1_label12;
  GtkWidget *IP4200reg1_label13;
  GtkObject *IP4200regi1_spinbutton7_adj;
  GtkWidget *IP4200regi1_spinbutton7;
  GtkObject *IP4200regi1_spinbutton8_adj;
  GtkWidget *IP4200regi1_spinbutton8;
  GtkObject *IP4200regi1_spinbutton9_adj;
  GtkWidget *IP4200regi1_spinbutton9;
  GtkObject *IP4200regi1_spinbutton10_adj;
  GtkWidget *IP4200regi1_spinbutton10;
  GtkWidget *IP4200reg1_label2;
  GtkWidget *IP4200Ireg1_label9;
  GtkWidget *IP4200reg1_label3;
  GtkWidget *IP4200reg1_label4;
  GtkWidget *IP4200reg1_label5;
  GtkWidget *IP4200reg1_label6;
  GtkWidget *IP4200reg1_label7;
  GtkWidget *IP4200reg1_label8;
  GtkWidget *hseparator43;
  GtkWidget *hbox86;
  GtkWidget *hbuttonbox45;
  GtkWidget *IP4200reg1_ok_button;
  GtkWidget *IP4200reg1_cancel_button;

  IP4200regi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP4200regi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP4200regi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP4200regi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP4200regi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox167 = GTK_DIALOG (IP4200regi1_dialog)->vbox;
  gtk_widget_show (vbox167);

  vbox168 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox168);
  gtk_box_pack_start (GTK_BOX (vbox167), vbox168, TRUE, TRUE, 0);

  IP4200reg1_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to J."));
  gtk_widget_show (IP4200reg1_label1);
  gtk_box_pack_start (GTK_BOX (vbox168), IP4200reg1_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label1), 5, 5);

  hbox87 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox87);
  gtk_box_pack_start (GTK_BOX (vbox168), hbox87, TRUE, TRUE, 0);

  IP4200regi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP4200regi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox87), IP4200regi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP4200regi1_drawingarea, 128, 180);
  gtk_widget_set_events (IP4200regi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox169 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox169);
  gtk_box_pack_start (GTK_BOX (hbox87), vbox169, TRUE, TRUE, 0);

  table70 = gtk_table_new (13, 2, FALSE);
  gtk_widget_show (table70);
  gtk_box_pack_start (GTK_BOX (vbox169), table70, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table70), 5);

  IP4200regi1_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP4200regi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton1);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP4200regi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton2);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP4200regi1_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton3);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP4200regi1_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton4_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton4);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP4200regi1_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton5_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton5);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton6_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP4200regi1_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton6_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton6);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton6, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200reg1_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (IP4200reg1_label10);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label10, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label10), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label10), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label10), 60, 0);

  IP4200reg1_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (IP4200reg1_label11);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label11, 0, 1, 10, 11,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label11), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label11), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label11), 60, 0);

  IP4200reg1_label12 = gtk_label_new (_("Column I:"));
  gtk_widget_show (IP4200reg1_label12);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label12, 0, 1, 11, 12,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label12), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label12), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label12), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label12), 60, 0);

  IP4200reg1_label13 = gtk_label_new (_("Column J:"));
  gtk_widget_show (IP4200reg1_label13);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label13, 0, 1, 12, 13,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label13), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label13), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label13), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label13), 60, 0);

  IP4200regi1_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi1_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton7_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton7);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton7, 1, 2, 9, 10,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi1_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton8_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton8);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton8, 1, 2, 10, 11,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton9_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi1_spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton9_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton9);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton9, 1, 2, 11, 12,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi1_spinbutton10_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi1_spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi1_spinbutton10_adj), 1, 0);
  gtk_widget_show (IP4200regi1_spinbutton10);
  gtk_table_attach (GTK_TABLE (table70), IP4200regi1_spinbutton10, 1, 2, 12, 13,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200reg1_label2 = gtk_label_new (_("Adjustment in Columns A to F (-3 to +7)"));
  gtk_widget_show (IP4200reg1_label2);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label2), 0, 0.5);

  IP4200Ireg1_label9 = gtk_label_new (_("Adjustment in Columns G to J (-5 to +5)"));
  gtk_widget_show (IP4200Ireg1_label9);
  gtk_table_attach (GTK_TABLE (table70), IP4200Ireg1_label9, 0, 2, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP4200Ireg1_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200Ireg1_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200Ireg1_label9), 0, 0.5);

  IP4200reg1_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (IP4200reg1_label3);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label3), 60, 0);

  IP4200reg1_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (IP4200reg1_label4);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label4), 60, 0);

  IP4200reg1_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (IP4200reg1_label5);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label5), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label5), 60, 0);

  IP4200reg1_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (IP4200reg1_label6);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label6), 60, 0);

  IP4200reg1_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (IP4200reg1_label7);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200reg1_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label7), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label7), 60, 0);

  IP4200reg1_label8 = gtk_label_new (_("Column F:"));
  gtk_widget_show (IP4200reg1_label8);
  gtk_table_attach (GTK_TABLE (table70), IP4200reg1_label8, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200reg1_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200reg1_label8), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200reg1_label8), 60, 0);


  hseparator43 = gtk_hseparator_new ();
  gtk_widget_show (hseparator43);
  gtk_table_attach (GTK_TABLE (table70), hseparator43, 0, 2, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  hbox86 = GTK_DIALOG (IP4200regi1_dialog)->action_area;
  gtk_widget_show (hbox86);
  gtk_container_set_border_width (GTK_CONTAINER (hbox86), 5);

  hbuttonbox45 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox45);
  gtk_box_pack_start (GTK_BOX (hbox86), hbuttonbox45, TRUE, FALSE, 0);

  IP4200reg1_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP4200reg1_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox45), IP4200reg1_ok_button);
  GTK_WIDGET_SET_FLAGS (IP4200reg1_ok_button, GTK_CAN_DEFAULT);

  IP4200reg1_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (IP4200reg1_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox45), IP4200reg1_cancel_button);
  GTK_WIDGET_SET_FLAGS (IP4200reg1_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP4200regi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton9, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_08),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton9, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_08),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton10, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_09),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi1_spinbutton10, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_09),
                    NULL);
  g_signal_connect ((gpointer) IP4200reg1_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) IP4200reg1_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP4200regi1_dialog, IP4200regi1_dialog, "IP4200regi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP4200regi1_dialog, vbox167, "vbox167");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, vbox168, "vbox168");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label1, "IP4200reg1_label1");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, hbox87, "hbox87");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_drawingarea, "IP4200regi1_drawingarea");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, vbox169, "vbox169");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, table70, "table70");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton1, "IP4200regi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton2, "IP4200regi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton3, "IP4200regi1_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton4, "IP4200regi1_spinbutton4");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton5, "IP4200regi1_spinbutton5");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton6, "IP4200regi1_spinbutton6");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label10, "IP4200reg1_label10");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label11, "IP4200reg1_label11");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label12, "IP4200reg1_label12");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label13, "IP4200reg1_label13");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton7, "IP4200regi1_spinbutton7");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton8, "IP4200regi1_spinbutton8");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton9, "IP4200regi1_spinbutton9");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200regi1_spinbutton10, "IP4200regi1_spinbutton10");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label2, "IP4200reg1_label2");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200Ireg1_label9, "IP4200Ireg1_label9");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label3, "IP4200reg1_label3");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label4, "IP4200reg1_label4");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label5, "IP4200reg1_label5");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label6, "IP4200reg1_label6");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label7, "IP4200reg1_label7");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_label8, "IP4200reg1_label8");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, hseparator43, "hseparator43");
  GLADE_HOOKUP_OBJECT_NO_REF (IP4200regi1_dialog, hbox86, "hbox86");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, hbuttonbox45, "hbuttonbox45");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_ok_button, "IP4200reg1_ok_button");
  GLADE_HOOKUP_OBJECT (IP4200regi1_dialog, IP4200reg1_cancel_button, "IP4200reg1_cancel_button");

  gtk_widget_grab_focus (IP4200reg1_ok_button);
  gtk_widget_grab_default (IP4200reg1_ok_button);
  return IP4200regi1_dialog;
}

GtkWidget*
create_IP4200regi2_dialog (void)
{
  GtkWidget *IP4200regi2_dialog;
  GtkWidget *vbox170;
  GtkWidget *vbox171;
  GtkWidget *IP4200regi2_label1;
  GtkWidget *hbox89;
  GtkWidget *IP4200regi2_drawingarea;
  GtkWidget *vbox172;
  GtkWidget *table72;
  GtkObject *IP4200regi2_spinbutton1_adj;
  GtkWidget *IP4200regi2_spinbutton1;
  GtkObject *IP4200regi2_spinbutton2_adj;
  GtkWidget *IP4200regi2_spinbutton2;
  GtkObject *IP4200regi2_spinbutton3_adj;
  GtkWidget *IP4200regi2_spinbutton3;
  GtkObject *IP4200regi2_spinbutton4_adj;
  GtkWidget *IP4200regi2_spinbutton4;
  GtkWidget *IP4200regi2_label8;
  GtkObject *IP4200regi2_spinbutton5_adj;
  GtkWidget *IP4200regi2_spinbutton5;
  GtkWidget *IP4200regi2_label9;
  GtkWidget *IP4200regi2_label3;
  GtkWidget *hseparator44;
  GtkObject *IP4200regi2_spinbutton6_adj;
  GtkWidget *IP4200regi2_spinbutton6;
  GtkWidget *IP4200regi2_label2;
  GtkWidget *IP4200regi2_label4;
  GtkWidget *IP4200regi2_label5;
  GtkWidget *IP4200regi2_label6;
  GtkWidget *IP4200Iregi2_label7;
  GtkWidget *hbox88;
  GtkWidget *hbuttonbox46;
  GtkWidget *IP4200reg2_ok_button;

  IP4200regi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP4200regi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP4200regi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP4200regi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP4200regi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox170 = GTK_DIALOG (IP4200regi2_dialog)->vbox;
  gtk_widget_show (vbox170);

  vbox171 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox171);
  gtk_box_pack_start (GTK_BOX (vbox170), vbox171, TRUE, TRUE, 0);

  IP4200regi2_label1 = gtk_label_new (_("Examine the printed patterns, and enter the pattern number of the pattern nwith the least amount of streaking in the fields for columns K to P."));
  gtk_widget_show (IP4200regi2_label1);
  gtk_box_pack_start (GTK_BOX (vbox171), IP4200regi2_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label1), 5, 5);

  hbox89 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox89);
  gtk_box_pack_start (GTK_BOX (vbox171), hbox89, TRUE, TRUE, 0);

  IP4200regi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP4200regi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox89), IP4200regi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP4200regi2_drawingarea, 128, 180);
  gtk_widget_set_events (IP4200regi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox172 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox172);
  gtk_box_pack_start (GTK_BOX (hbox89), vbox172, TRUE, TRUE, 0);

  table72 = gtk_table_new (9, 2, FALSE);
  gtk_widget_show (table72);
  gtk_box_pack_start (GTK_BOX (vbox172), table72, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table72), 5);

  IP4200regi2_spinbutton1_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP4200regi2_spinbutton1);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi2_spinbutton2_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP4200regi2_spinbutton2);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi2_spinbutton3_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi2_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi2_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP4200regi2_spinbutton3);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi2_spinbutton4_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP4200regi2_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi2_spinbutton4_adj), 1, 0);
  gtk_widget_show (IP4200regi2_spinbutton4);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi2_label8 = gtk_label_new (_("Column O:"));
  gtk_widget_show (IP4200regi2_label8);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label8, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label8), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label8), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label8), 60, 0);

  IP4200regi2_spinbutton5_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  IP4200regi2_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi2_spinbutton5_adj), 1, 0);
  gtk_widget_show (IP4200regi2_spinbutton5);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_spinbutton5, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi2_label9 = gtk_label_new (_("Column P:"));
  gtk_widget_show (IP4200regi2_label9);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label9, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label9), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label9), 60, 0);

  IP4200regi2_label3 = gtk_label_new (_("Column K:"));
  gtk_widget_show (IP4200regi2_label3);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label3), 60, 0);


  hseparator44 = gtk_hseparator_new ();
  gtk_widget_show (hseparator44);
  gtk_table_attach (GTK_TABLE (table72), hseparator44, 0, 2, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  IP4200regi2_spinbutton6_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  IP4200regi2_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (IP4200regi2_spinbutton6_adj), 1, 0);
  gtk_widget_show (IP4200regi2_spinbutton6);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_spinbutton6, 1, 2, 8, 9,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP4200regi2_label2 = gtk_label_new (_("Adjustment in Columns K to N (-5 to +5)"));
  gtk_widget_show (IP4200regi2_label2);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label2), 0, 0.5);

  IP4200regi2_label4 = gtk_label_new (_("Column L:"));
  gtk_widget_show (IP4200regi2_label4);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label4), 60, 0);

  IP4200regi2_label5 = gtk_label_new (_("Column M:"));
  gtk_widget_show (IP4200regi2_label5);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label5), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label5), 60, 0);

  IP4200regi2_label6 = gtk_label_new (_("Column N:"));
  gtk_widget_show (IP4200regi2_label6);
  gtk_table_attach (GTK_TABLE (table72), IP4200regi2_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP4200regi2_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200regi2_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200regi2_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP4200regi2_label6), 60, 0);

  IP4200Iregi2_label7 = gtk_label_new (_("Adjustment in Columns O and P (-3 to +3)"));
  gtk_widget_show (IP4200Iregi2_label7);
  gtk_table_attach (GTK_TABLE (table72), IP4200Iregi2_label7, 0, 2, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP4200Iregi2_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP4200Iregi2_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP4200Iregi2_label7), 0, 0.5);

  hbox88 = GTK_DIALOG (IP4200regi2_dialog)->action_area;
  gtk_widget_show (hbox88);
  gtk_container_set_border_width (GTK_CONTAINER (hbox88), 5);

  hbuttonbox46 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox46);
  gtk_box_pack_start (GTK_BOX (hbox88), hbuttonbox46, TRUE, FALSE, 0);

  IP4200reg2_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP4200reg2_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox46), IP4200reg2_ok_button);
  GTK_WIDGET_SET_FLAGS (IP4200reg2_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP4200regi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) IP4200regi2_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) IP4200reg2_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP4200regi2_dialog, IP4200regi2_dialog, "IP4200regi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP4200regi2_dialog, vbox170, "vbox170");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, vbox171, "vbox171");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label1, "IP4200regi2_label1");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, hbox89, "hbox89");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_drawingarea, "IP4200regi2_drawingarea");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, vbox172, "vbox172");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, table72, "table72");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_spinbutton1, "IP4200regi2_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_spinbutton2, "IP4200regi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_spinbutton3, "IP4200regi2_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_spinbutton4, "IP4200regi2_spinbutton4");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label8, "IP4200regi2_label8");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_spinbutton5, "IP4200regi2_spinbutton5");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label9, "IP4200regi2_label9");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label3, "IP4200regi2_label3");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, hseparator44, "hseparator44");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_spinbutton6, "IP4200regi2_spinbutton6");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label2, "IP4200regi2_label2");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label4, "IP4200regi2_label4");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label5, "IP4200regi2_label5");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200regi2_label6, "IP4200regi2_label6");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200Iregi2_label7, "IP4200Iregi2_label7");
  GLADE_HOOKUP_OBJECT_NO_REF (IP4200regi2_dialog, hbox88, "hbox88");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, hbuttonbox46, "hbuttonbox46");
  GLADE_HOOKUP_OBJECT (IP4200regi2_dialog, IP4200reg2_ok_button, "IP4200reg2_ok_button");

  gtk_widget_grab_focus (IP4200reg2_ok_button);
  gtk_widget_grab_default (IP4200reg2_ok_button);
  return IP4200regi2_dialog;
}

GtkWidget*
create_IP6600Dregi1_dialog (void)
{
  GtkWidget *IP6600Dregi1_dialog;
  GtkWidget *vbox173;
  GtkWidget *vbox174;
  GtkWidget *IP6600Dreg1_label1;
  GtkWidget *hbox91;
  GtkWidget *IP6600Dregi1_drawingarea;
  GtkWidget *vbox175;
  GtkWidget *table74;
  GtkObject *IP6600Dregi1_spinbutton1_adj;
  GtkWidget *IP6600Dregi1_spinbutton1;
  GtkObject *IP6600Dregi1_spinbutton2_adj;
  GtkWidget *IP6600Dregi1_spinbutton2;
  GtkObject *IP6600Dregi1_spinbutton3_adj;
  GtkWidget *IP6600Dregi1_spinbutton3;
  GtkObject *IP6600Dregi1_spinbutton4_adj;
  GtkWidget *IP6600Dregi1_spinbutton4;
  GtkObject *IP6600Dregi1_spinbutton5_adj;
  GtkWidget *IP6600Dregi1_spinbutton5;
  GtkWidget *IP6600Dreg1_label9;
  GtkWidget *IP6600Dreg1_label10;
  GtkObject *IP6600Dregi1_spinbutton6_adj;
  GtkWidget *IP6600Dregi1_spinbutton6;
  GtkObject *IP6600Dregi1_spinbutton7_adj;
  GtkWidget *IP6600Dregi1_spinbutton7;
  GtkWidget *IP6600Dreg1_label2;
  GtkWidget *IP6600Dreg1_label3;
  GtkWidget *IP6600Dreg1_label4;
  GtkWidget *IP6600Dreg1_label5;
  GtkWidget *IP6600Dreg1_label6;
  GtkWidget *IP6600Dreg1_label7;
  GtkWidget *hseparator45;
  GtkWidget *IP6600Dreg1_label8;
  GtkWidget *hbox90;
  GtkWidget *hbuttonbox47;
  GtkWidget *IP6600Dreg1_ok_button;
  GtkWidget *IP6600Dreg1_cancel_button;

  IP6600Dregi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP6600Dregi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP6600Dregi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP6600Dregi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP6600Dregi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox173 = GTK_DIALOG (IP6600Dregi1_dialog)->vbox;
  gtk_widget_show (vbox173);

  vbox174 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox174);
  gtk_box_pack_start (GTK_BOX (vbox173), vbox174, TRUE, TRUE, 0);

  IP6600Dreg1_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to G."));
  gtk_widget_show (IP6600Dreg1_label1);
  gtk_box_pack_start (GTK_BOX (vbox174), IP6600Dreg1_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label1), 5, 5);

  hbox91 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox91);
  gtk_box_pack_start (GTK_BOX (vbox174), hbox91, TRUE, TRUE, 0);

  IP6600Dregi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP6600Dregi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox91), IP6600Dregi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP6600Dregi1_drawingarea, 128, 180);
  gtk_widget_set_events (IP6600Dregi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox175 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox175);
  gtk_box_pack_start (GTK_BOX (hbox91), vbox175, TRUE, TRUE, 0);

  table74 = gtk_table_new (10, 2, FALSE);
  gtk_widget_show (table74);
  gtk_box_pack_start (GTK_BOX (vbox175), table74, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table74), 5);

  IP6600Dregi1_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP6600Dregi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton1);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi1_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP6600Dregi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton2);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi1_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP6600Dregi1_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton3);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi1_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP6600Dregi1_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton4_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton4);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi1_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP6600Dregi1_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton5_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton5);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dreg1_label9 = gtk_label_new (_("Column F:"));
  gtk_widget_show (IP6600Dreg1_label9);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label9, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label9), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label9), 60, 0);

  IP6600Dreg1_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (IP6600Dreg1_label10);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label10, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label10), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label10), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label10), 60, 0);

  IP6600Dregi1_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP6600Dregi1_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton6_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton6);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton6, 1, 2, 8, 9,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi1_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP6600Dregi1_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi1_spinbutton7_adj), 1, 0);
  gtk_widget_show (IP6600Dregi1_spinbutton7);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dregi1_spinbutton7, 1, 2, 9, 10,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dreg1_label2 = gtk_label_new (_("Adjustment in Columns A to E (-3 to +7)"));
  gtk_widget_show (IP6600Dreg1_label2);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label2), 0, 0.5);

  IP6600Dreg1_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (IP6600Dreg1_label3);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label3), 60, 0);

  IP6600Dreg1_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (IP6600Dreg1_label4);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label4), 60, 0);

  IP6600Dreg1_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (IP6600Dreg1_label5);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label5), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label5), 60, 0);

  IP6600Dreg1_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (IP6600Dreg1_label6);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label6), 60, 0);

  IP6600Dreg1_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (IP6600Dreg1_label7);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label7), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dreg1_label7), 60, 0);


  hseparator45 = gtk_hseparator_new ();
  gtk_widget_show (hseparator45);
  gtk_table_attach (GTK_TABLE (table74), hseparator45, 0, 2, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  IP6600Dreg1_label8 = gtk_label_new (_("Adjustment in Columns F and G (-5 to +5)"));
  gtk_widget_show (IP6600Dreg1_label8);
  gtk_table_attach (GTK_TABLE (table74), IP6600Dreg1_label8, 0, 2, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP6600Dreg1_label8), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dreg1_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dreg1_label8), 0, 0.5);

  hbox90 = GTK_DIALOG (IP6600Dregi1_dialog)->action_area;
  gtk_widget_show (hbox90);
  gtk_container_set_border_width (GTK_CONTAINER (hbox90), 5);

  hbuttonbox47 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox47);
  gtk_box_pack_start (GTK_BOX (hbox90), hbuttonbox47, TRUE, FALSE, 0);

  IP6600Dreg1_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP6600Dreg1_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox47), IP6600Dreg1_ok_button);
  GTK_WIDGET_SET_FLAGS (IP6600Dreg1_ok_button, GTK_CAN_DEFAULT);

  IP6600Dreg1_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (IP6600Dreg1_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox47), IP6600Dreg1_cancel_button);
  GTK_WIDGET_SET_FLAGS (IP6600Dreg1_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP6600Dregi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi1_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dreg1_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dreg1_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP6600Dregi1_dialog, IP6600Dregi1_dialog, "IP6600Dregi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP6600Dregi1_dialog, vbox173, "vbox173");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, vbox174, "vbox174");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label1, "IP6600Dreg1_label1");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, hbox91, "hbox91");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_drawingarea, "IP6600Dregi1_drawingarea");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, vbox175, "vbox175");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, table74, "table74");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton1, "IP6600Dregi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton2, "IP6600Dregi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton3, "IP6600Dregi1_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton4, "IP6600Dregi1_spinbutton4");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton5, "IP6600Dregi1_spinbutton5");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label9, "IP6600Dreg1_label9");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label10, "IP6600Dreg1_label10");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton6, "IP6600Dregi1_spinbutton6");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dregi1_spinbutton7, "IP6600Dregi1_spinbutton7");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label2, "IP6600Dreg1_label2");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label3, "IP6600Dreg1_label3");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label4, "IP6600Dreg1_label4");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label5, "IP6600Dreg1_label5");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label6, "IP6600Dreg1_label6");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label7, "IP6600Dreg1_label7");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, hseparator45, "hseparator45");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_label8, "IP6600Dreg1_label8");
  GLADE_HOOKUP_OBJECT_NO_REF (IP6600Dregi1_dialog, hbox90, "hbox90");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, hbuttonbox47, "hbuttonbox47");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_ok_button, "IP6600Dreg1_ok_button");
  GLADE_HOOKUP_OBJECT (IP6600Dregi1_dialog, IP6600Dreg1_cancel_button, "IP6600Dreg1_cancel_button");

  gtk_widget_grab_focus (IP6600Dreg1_ok_button);
  gtk_widget_grab_default (IP6600Dreg1_ok_button);
  return IP6600Dregi1_dialog;
}

GtkWidget*
create_IP6600Dregi2_dialog (void)
{
  GtkWidget *IP6600Dregi2_dialog;
  GtkWidget *vbox176;
  GtkWidget *vbox177;
  GtkWidget *IP6600Dregi2_label1;
  GtkWidget *hbox93;
  GtkWidget *IP6600Dregi2_drawingarea;
  GtkWidget *vbox178;
  GtkWidget *table76;
  GtkWidget *IP6600Dregi2_label6;
  GtkObject *IP6600Dregi2_spinbutton3_adj;
  GtkWidget *IP6600Dregi2_spinbutton3;
  GtkWidget *IP6600Dregi2_label2;
  GtkWidget *IP6600Dregi2_label3;
  GtkWidget *IP6600Dregi2_label4;
  GtkObject *IP6600Dregi2_spinbutton1_adj;
  GtkWidget *IP6600Dregi2_spinbutton1;
  GtkObject *IP6600Dregi2_spinbutton2_adj;
  GtkWidget *IP6600Dregi2_spinbutton2;
  GtkWidget *hseparator46;
  GtkWidget *IP6600Dregi2_label5;
  GtkWidget *hbox92;
  GtkWidget *hbuttonbox48;
  GtkWidget *IP6600Dreg2_ok_button;

  IP6600Dregi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP6600Dregi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP6600Dregi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP6600Dregi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP6600Dregi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox176 = GTK_DIALOG (IP6600Dregi2_dialog)->vbox;
  gtk_widget_show (vbox176);

  vbox177 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox177);
  gtk_box_pack_start (GTK_BOX (vbox176), vbox177, TRUE, TRUE, 0);

  IP6600Dregi2_label1 = gtk_label_new (_("Examine the printed patterns, and enter the pattern number of the pattern nwith the least amount of streaking in the fields for columns H to J."));
  gtk_widget_show (IP6600Dregi2_label1);
  gtk_box_pack_start (GTK_BOX (vbox177), IP6600Dregi2_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dregi2_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP6600Dregi2_label1), 5, 5);

  hbox93 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox93);
  gtk_box_pack_start (GTK_BOX (vbox177), hbox93, TRUE, TRUE, 0);

  IP6600Dregi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP6600Dregi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox93), IP6600Dregi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP6600Dregi2_drawingarea, 128, 180);
  gtk_widget_set_events (IP6600Dregi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox178 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox178);
  gtk_box_pack_start (GTK_BOX (hbox93), vbox178, TRUE, TRUE, 0);

  table76 = gtk_table_new (6, 2, FALSE);
  gtk_widget_show (table76);
  gtk_box_pack_start (GTK_BOX (vbox178), table76, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table76), 5);

  IP6600Dregi2_label6 = gtk_label_new (_("Column J:"));
  gtk_widget_show (IP6600Dregi2_label6);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_label6, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dregi2_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dregi2_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dregi2_label6), 60, 0);

  IP6600Dregi2_spinbutton3_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  IP6600Dregi2_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi2_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP6600Dregi2_spinbutton3);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_spinbutton3, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi2_label2 = gtk_label_new (_("Adjustment in Columns H and I (-5 to +5)"));
  gtk_widget_show (IP6600Dregi2_label2);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP6600Dregi2_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dregi2_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dregi2_label2), 0, 0.5);

  IP6600Dregi2_label3 = gtk_label_new (_("Column H:"));
  gtk_widget_show (IP6600Dregi2_label3);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dregi2_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dregi2_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dregi2_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dregi2_label3), 60, 0);

  IP6600Dregi2_label4 = gtk_label_new (_("Column I:"));
  gtk_widget_show (IP6600Dregi2_label4);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP6600Dregi2_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dregi2_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dregi2_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP6600Dregi2_label4), 60, 0);

  IP6600Dregi2_spinbutton1_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP6600Dregi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP6600Dregi2_spinbutton1);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP6600Dregi2_spinbutton2_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP6600Dregi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP6600Dregi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP6600Dregi2_spinbutton2);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator46 = gtk_hseparator_new ();
  gtk_widget_show (hseparator46);
  gtk_table_attach (GTK_TABLE (table76), hseparator46, 0, 2, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  IP6600Dregi2_label5 = gtk_label_new (_("Adjustment in Column J (-3 to +3)"));
  gtk_widget_show (IP6600Dregi2_label5);
  gtk_table_attach (GTK_TABLE (table76), IP6600Dregi2_label5, 0, 2, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_widget_set_size_request (IP6600Dregi2_label5, 244, -2);
  gtk_label_set_justify (GTK_LABEL (IP6600Dregi2_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP6600Dregi2_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP6600Dregi2_label5), 0, 0.5);

  hbox92 = GTK_DIALOG (IP6600Dregi2_dialog)->action_area;
  gtk_widget_show (hbox92);
  gtk_container_set_border_width (GTK_CONTAINER (hbox92), 5);

  hbuttonbox48 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox48);
  gtk_box_pack_start (GTK_BOX (hbox92), hbuttonbox48, TRUE, FALSE, 0);

  IP6600Dreg2_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP6600Dreg2_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox48), IP6600Dreg2_ok_button);
  GTK_WIDGET_SET_FLAGS (IP6600Dreg2_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP6600Dregi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dregi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP6600Dreg2_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP6600Dregi2_dialog, IP6600Dregi2_dialog, "IP6600Dregi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP6600Dregi2_dialog, vbox176, "vbox176");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, vbox177, "vbox177");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_label1, "IP6600Dregi2_label1");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, hbox93, "hbox93");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_drawingarea, "IP6600Dregi2_drawingarea");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, vbox178, "vbox178");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, table76, "table76");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_label6, "IP6600Dregi2_label6");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_spinbutton3, "IP6600Dregi2_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_label2, "IP6600Dregi2_label2");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_label3, "IP6600Dregi2_label3");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_label4, "IP6600Dregi2_label4");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_spinbutton1, "IP6600Dregi2_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_spinbutton2, "IP6600Dregi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, hseparator46, "hseparator46");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dregi2_label5, "IP6600Dregi2_label5");
  GLADE_HOOKUP_OBJECT_NO_REF (IP6600Dregi2_dialog, hbox92, "hbox92");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, hbuttonbox48, "hbuttonbox48");
  GLADE_HOOKUP_OBJECT (IP6600Dregi2_dialog, IP6600Dreg2_ok_button, "IP6600Dreg2_ok_button");

  gtk_widget_grab_focus (IP6600Dreg2_ok_button);
  gtk_widget_grab_default (IP6600Dreg2_ok_button);
  return IP6600Dregi2_dialog;
}

GtkWidget*
create_IP7500regi1_dialog (void)
{
  GtkWidget *IP7500regi1_dialog;
  GtkWidget *vbox184;
  GtkWidget *vbox185;
  GtkWidget *IP7500reg1_label1;
  GtkWidget *hbox97;
  GtkWidget *IP7500regi1_drawingarea;
  GtkWidget *vbox186;
  GtkWidget *table81;
  GtkObject *IP7500regi1_spinbutton1_adj;
  GtkWidget *IP7500regi1_spinbutton1;
  GtkObject *IP7500regi1_spinbutton2_adj;
  GtkWidget *IP7500regi1_spinbutton2;
  GtkObject *IP7500regi1_spinbutton3_adj;
  GtkWidget *IP7500regi1_spinbutton3;
  GtkObject *IP7500regi1_spinbutton4_adj;
  GtkWidget *IP7500regi1_spinbutton4;
  GtkObject *IP7500regi1_spinbutton5_adj;
  GtkWidget *IP7500regi1_spinbutton5;
  GtkObject *IP7500regi1_spinbutton6_adj;
  GtkWidget *IP7500regi1_spinbutton6;
  GtkWidget *IP7500reg1_label10;
  GtkWidget *IP7500reg1_label11;
  GtkObject *IP7500regi1_spinbutton7_adj;
  GtkWidget *IP7500regi1_spinbutton7;
  GtkObject *IP7500regi1_spinbutton8_adj;
  GtkWidget *IP7500regi1_spinbutton8;
  GtkWidget *IP7500reg1_label2;
  GtkWidget *IP7500reg1_label3;
  GtkWidget *IP7500reg1_label4;
  GtkWidget *IP7500reg1_label5;
  GtkWidget *IP7500reg1_label6;
  GtkWidget *IP7500reg1_label7;
  GtkWidget *IP7500reg1_label8;
  GtkWidget *hseparator48;
  GtkWidget *IP7500reg1_label9;
  GtkWidget *hbox96;
  GtkWidget *hbuttonbox50;
  GtkWidget *IP7500reg1_ok_button;
  GtkWidget *IP7500reg1_cancel_button;

  IP7500regi1_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP7500regi1_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP7500regi1_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP7500regi1_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP7500regi1_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox184 = GTK_DIALOG (IP7500regi1_dialog)->vbox;
  gtk_widget_show (vbox184);

  vbox185 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox185);
  gtk_box_pack_start (GTK_BOX (vbox184), vbox185, TRUE, TRUE, 0);

  IP7500reg1_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to H."));
  gtk_widget_show (IP7500reg1_label1);
  gtk_box_pack_start (GTK_BOX (vbox185), IP7500reg1_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label1), 5, 5);

  hbox97 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox97);
  gtk_box_pack_start (GTK_BOX (vbox185), hbox97, TRUE, TRUE, 0);

  IP7500regi1_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP7500regi1_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox97), IP7500regi1_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP7500regi1_drawingarea, 128, 180);
  gtk_widget_set_events (IP7500regi1_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox186 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox186);
  gtk_box_pack_start (GTK_BOX (hbox97), vbox186, TRUE, TRUE, 0);

  table81 = gtk_table_new (11, 2, FALSE);
  gtk_widget_show (table81);
  gtk_box_pack_start (GTK_BOX (vbox186), table81, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table81), 5);

  IP7500regi1_spinbutton1_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP7500regi1_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton1);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi1_spinbutton2_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP7500regi1_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton2);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi1_spinbutton3_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP7500regi1_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton3);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi1_spinbutton4_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP7500regi1_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton4_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton4);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi1_spinbutton5_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP7500regi1_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton5_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton5);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi1_spinbutton6_adj = gtk_adjustment_new (0, -3, 7, 1, 10, 10);
  IP7500regi1_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton6_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton6);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton6, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500reg1_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (IP7500reg1_label10);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label10, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label10), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label10), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label10), 60, 0);

  IP7500reg1_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (IP7500reg1_label11);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label11, 0, 1, 10, 11,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label11), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label11), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label11), 60, 0);

  IP7500regi1_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP7500regi1_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton7_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton7);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton7, 1, 2, 9, 10,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi1_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP7500regi1_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi1_spinbutton8_adj), 1, 0);
  gtk_widget_show (IP7500regi1_spinbutton8);
  gtk_table_attach (GTK_TABLE (table81), IP7500regi1_spinbutton8, 1, 2, 10, 11,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500reg1_label2 = gtk_label_new (_("Adjustment in Columns A to F (-3 to +7)"));
  gtk_widget_show (IP7500reg1_label2);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_SHRINK | GTK_FILL), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label2), 0, 0.5);

  IP7500reg1_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (IP7500reg1_label3);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label3), 60, 0);

  IP7500reg1_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (IP7500reg1_label4);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label4), 60, 0);

  IP7500reg1_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (IP7500reg1_label5);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label5), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label5), 60, 0);

  IP7500reg1_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (IP7500reg1_label6);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label6), 60, 0);

  IP7500reg1_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (IP7500reg1_label7);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label7), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label7), 60, 0);

  IP7500reg1_label8 = gtk_label_new (_("Column F:"));
  gtk_widget_show (IP7500reg1_label8);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label8, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label8), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500reg1_label8), 60, 0);


  hseparator48 = gtk_hseparator_new ();
  gtk_widget_show (hseparator48);
  gtk_table_attach (GTK_TABLE (table81), hseparator48, 0, 2, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  IP7500reg1_label9 = gtk_label_new (_("Adjustment in Columns G and H (-5 to +5)"));
  gtk_widget_show (IP7500reg1_label9);
  gtk_table_attach (GTK_TABLE (table81), IP7500reg1_label9, 0, 2, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP7500reg1_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500reg1_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500reg1_label9), 0, 0.5);

  hbox96 = GTK_DIALOG (IP7500regi1_dialog)->action_area;
  gtk_widget_show (hbox96);
  gtk_container_set_border_width (GTK_CONTAINER (hbox96), 5);

  hbuttonbox50 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox50);
  gtk_box_pack_start (GTK_BOX (hbox96), hbuttonbox50, TRUE, FALSE, 0);

  IP7500reg1_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP7500reg1_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox50), IP7500reg1_ok_button);
  GTK_WIDGET_SET_FLAGS (IP7500reg1_ok_button, GTK_CAN_DEFAULT);

  IP7500reg1_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (IP7500reg1_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox50), IP7500reg1_cancel_button);
  GTK_WIDGET_SET_FLAGS (IP7500reg1_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP7500regi1_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi1_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) IP7500reg1_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) IP7500reg1_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP7500regi1_dialog, IP7500regi1_dialog, "IP7500regi1_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP7500regi1_dialog, vbox184, "vbox184");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, vbox185, "vbox185");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label1, "IP7500reg1_label1");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, hbox97, "hbox97");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_drawingarea, "IP7500regi1_drawingarea");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, vbox186, "vbox186");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, table81, "table81");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton1, "IP7500regi1_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton2, "IP7500regi1_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton3, "IP7500regi1_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton4, "IP7500regi1_spinbutton4");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton5, "IP7500regi1_spinbutton5");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton6, "IP7500regi1_spinbutton6");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label10, "IP7500reg1_label10");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label11, "IP7500reg1_label11");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton7, "IP7500regi1_spinbutton7");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500regi1_spinbutton8, "IP7500regi1_spinbutton8");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label2, "IP7500reg1_label2");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label3, "IP7500reg1_label3");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label4, "IP7500reg1_label4");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label5, "IP7500reg1_label5");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label6, "IP7500reg1_label6");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label7, "IP7500reg1_label7");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label8, "IP7500reg1_label8");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, hseparator48, "hseparator48");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_label9, "IP7500reg1_label9");
  GLADE_HOOKUP_OBJECT_NO_REF (IP7500regi1_dialog, hbox96, "hbox96");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, hbuttonbox50, "hbuttonbox50");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_ok_button, "IP7500reg1_ok_button");
  GLADE_HOOKUP_OBJECT (IP7500regi1_dialog, IP7500reg1_cancel_button, "IP7500reg1_cancel_button");

  gtk_widget_grab_focus (IP7500reg1_ok_button);
  gtk_widget_grab_default (IP7500reg1_ok_button);
  return IP7500regi1_dialog;
}

GtkWidget*
create_IP7500regi2_dialog (void)
{
  GtkWidget *IP7500regi2_dialog;
  GtkWidget *vbox187;
  GtkWidget *vbox188;
  GtkWidget *IP7500regi2_label1;
  GtkWidget *hbox99;
  GtkWidget *IP7500regi2_drawingarea;
  GtkWidget *vbox189;
  GtkWidget *table83;
  GtkObject *IP7500regi2_spinbutton1_adj;
  GtkWidget *IP7500regi2_spinbutton1;
  GtkObject *IP7500regi2_spinbutton2_adj;
  GtkWidget *IP7500regi2_spinbutton2;
  GtkObject *IP7500regi2_spinbutton3_adj;
  GtkWidget *IP7500regi2_spinbutton3;
  GtkObject *IP7500regi2_spinbutton4_adj;
  GtkWidget *IP7500regi2_spinbutton4;
  GtkWidget *IP7500regi2_label8;
  GtkObject *IP7500regi2_spinbutton5_adj;
  GtkWidget *IP7500regi2_spinbutton5;
  GtkWidget *IP7500regi2_label2;
  GtkWidget *IP7500regi2_label3;
  GtkWidget *IP7500regi2_label4;
  GtkWidget *IP7500regi2_label5;
  GtkWidget *IP7500regi2_label6;
  GtkWidget *hseparator49;
  GtkWidget *IP7500regi2_label7;
  GtkWidget *hbox98;
  GtkWidget *hbuttonbox51;
  GtkWidget *IP7500reg2_ok_button;

  IP7500regi2_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP7500regi2_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP7500regi2_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP7500regi2_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP7500regi2_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox187 = GTK_DIALOG (IP7500regi2_dialog)->vbox;
  gtk_widget_show (vbox187);

  vbox188 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox188);
  gtk_box_pack_start (GTK_BOX (vbox187), vbox188, TRUE, TRUE, 0);

  IP7500regi2_label1 = gtk_label_new (_("Examine the printed patterns, and enter the pattern number of the pattern nwith the least amount of streaking in the fields for columns I to M."));
  gtk_widget_show (IP7500regi2_label1);
  gtk_box_pack_start (GTK_BOX (vbox188), IP7500regi2_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP7500regi2_label1), 5, 5);

  hbox99 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox99);
  gtk_box_pack_start (GTK_BOX (vbox188), hbox99, TRUE, TRUE, 0);

  IP7500regi2_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP7500regi2_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox99), IP7500regi2_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP7500regi2_drawingarea, 128, 180);
  gtk_widget_set_events (IP7500regi2_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox189 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox189);
  gtk_box_pack_start (GTK_BOX (hbox99), vbox189, TRUE, TRUE, 0);

  table83 = gtk_table_new (8, 2, FALSE);
  gtk_widget_show (table83);
  gtk_box_pack_start (GTK_BOX (vbox189), table83, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table83), 5);

  IP7500regi2_spinbutton1_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP7500regi2_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi2_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP7500regi2_spinbutton1);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi2_spinbutton2_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP7500regi2_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi2_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP7500regi2_spinbutton2);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi2_spinbutton3_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP7500regi2_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi2_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP7500regi2_spinbutton3);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi2_spinbutton4_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP7500regi2_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi2_spinbutton4_adj), 1, 0);
  gtk_widget_show (IP7500regi2_spinbutton4);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi2_label8 = gtk_label_new (_("Column M:"));
  gtk_widget_show (IP7500regi2_label8);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label8, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label8), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label8), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500regi2_label8), 60, 0);

  IP7500regi2_spinbutton5_adj = gtk_adjustment_new (0, -3, 3, 1, 10, 10);
  IP7500regi2_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (IP7500regi2_spinbutton5_adj), 1, 0);
  gtk_widget_show (IP7500regi2_spinbutton5);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_spinbutton5, 1, 2, 7, 8,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP7500regi2_label2 = gtk_label_new (_("Adjustment in Columns I to L (-5 to +5)"));
  gtk_widget_show (IP7500regi2_label2);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label2), 0, 0.5);

  IP7500regi2_label3 = gtk_label_new (_("Column I:"));
  gtk_widget_show (IP7500regi2_label3);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500regi2_label3), 60, 0);

  IP7500regi2_label4 = gtk_label_new (_("Column J:"));
  gtk_widget_show (IP7500regi2_label4);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500regi2_label4), 60, 0);

  IP7500regi2_label5 = gtk_label_new (_("Column K:"));
  gtk_widget_show (IP7500regi2_label5);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label5), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500regi2_label5), 60, 0);

  IP7500regi2_label6 = gtk_label_new (_("Column L:"));
  gtk_widget_show (IP7500regi2_label6);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP7500regi2_label6), 60, 0);


  hseparator49 = gtk_hseparator_new ();
  gtk_widget_show (hseparator49);
  gtk_table_attach (GTK_TABLE (table83), hseparator49, 0, 2, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  IP7500regi2_label7 = gtk_label_new (_("Adjustment in Column M (-3 to +3)"));
  gtk_widget_show (IP7500regi2_label7);
  gtk_table_attach (GTK_TABLE (table83), IP7500regi2_label7, 0, 2, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP7500regi2_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP7500regi2_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP7500regi2_label7), 0, 0.5);

  hbox98 = GTK_DIALOG (IP7500regi2_dialog)->action_area;
  gtk_widget_show (hbox98);
  gtk_container_set_border_width (GTK_CONTAINER (hbox98), 5);

  hbuttonbox51 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox51);
  gtk_box_pack_start (GTK_BOX (hbox98), hbuttonbox51, TRUE, FALSE, 0);

  IP7500reg2_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP7500reg2_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox51), IP7500reg2_ok_button);
  GTK_WIDGET_SET_FLAGS (IP7500reg2_ok_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP7500regi2_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) IP7500regi2_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) IP7500reg2_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP7500regi2_dialog, IP7500regi2_dialog, "IP7500regi2_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP7500regi2_dialog, vbox187, "vbox187");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, vbox188, "vbox188");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label1, "IP7500regi2_label1");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, hbox99, "hbox99");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_drawingarea, "IP7500regi2_drawingarea");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, vbox189, "vbox189");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, table83, "table83");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_spinbutton1, "IP7500regi2_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_spinbutton2, "IP7500regi2_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_spinbutton3, "IP7500regi2_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_spinbutton4, "IP7500regi2_spinbutton4");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label8, "IP7500regi2_label8");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_spinbutton5, "IP7500regi2_spinbutton5");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label2, "IP7500regi2_label2");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label3, "IP7500regi2_label3");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label4, "IP7500regi2_label4");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label5, "IP7500regi2_label5");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label6, "IP7500regi2_label6");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, hseparator49, "hseparator49");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500regi2_label7, "IP7500regi2_label7");
  GLADE_HOOKUP_OBJECT_NO_REF (IP7500regi2_dialog, hbox98, "hbox98");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, hbuttonbox51, "hbuttonbox51");
  GLADE_HOOKUP_OBJECT (IP7500regi2_dialog, IP7500reg2_ok_button, "IP7500reg2_ok_button");

  gtk_widget_grab_focus (IP7500reg2_ok_button);
  gtk_widget_grab_default (IP7500reg2_ok_button);
  return IP7500regi2_dialog;
}

GtkWidget*
create_IP2200regi_dialog (void)
{
  GtkWidget *IP2200regi_dialog;
  GtkWidget *vbox190;
  GtkWidget *vbox191;
  GtkWidget *IP2200reg_label1;
  GtkWidget *hbox101;
  GtkWidget *IP2200regi_drawingarea;
  GtkWidget *vbox192;
  GtkWidget *table85;
  GtkWidget *IP2200reg_label10;
  GtkWidget *IP2200reg_label11;
  GtkWidget *IP2200reg_label12;
  GtkWidget *IP2200reg_label13;
  GtkWidget *IP2200reg_label14;
  GtkWidget *IP2200reg_label15;
  GtkObject *IP2200regi_spinbutton12_adj;
  GtkWidget *IP2200regi_spinbutton12;
  GtkObject *IP2200regi_spinbutton11_adj;
  GtkWidget *IP2200regi_spinbutton11;
  GtkObject *IP2200regi_spinbutton10_adj;
  GtkWidget *IP2200regi_spinbutton10;
  GtkObject *IP2200regi_spinbutton9_adj;
  GtkWidget *IP2200regi_spinbutton9;
  GtkObject *IP2200regi_spinbutton8_adj;
  GtkWidget *IP2200regi_spinbutton8;
  GtkObject *IP2200regi_spinbutton7_adj;
  GtkWidget *IP2200regi_spinbutton7;
  GtkWidget *IP2200reg_label2;
  GtkWidget *IP2200reg_label3;
  GtkWidget *IP2200reg_label4;
  GtkWidget *IP2200reg_label5;
  GtkWidget *IP2200reg_label6;
  GtkWidget *IP2200reg_label7;
  GtkWidget *IP2200reg_label8;
  GtkObject *IP2200regi_spinbutton1_adj;
  GtkWidget *IP2200regi_spinbutton1;
  GtkObject *IP2200regi_spinbutton2_adj;
  GtkWidget *IP2200regi_spinbutton2;
  GtkObject *IP2200regi_spinbutton3_adj;
  GtkWidget *IP2200regi_spinbutton3;
  GtkObject *IP2200regi_spinbutton4_adj;
  GtkWidget *IP2200regi_spinbutton4;
  GtkObject *IP2200regi_spinbutton5_adj;
  GtkWidget *IP2200regi_spinbutton5;
  GtkObject *IP2200regi_spinbutton6_adj;
  GtkWidget *IP2200regi_spinbutton6;
  GtkWidget *hseparator50;
  GtkWidget *IP2200reg_label9;
  GtkWidget *hbox100;
  GtkWidget *hbuttonbox52;
  GtkWidget *IP2200reg_ok_button;
  GtkWidget *IP200reg_cancel_button;

  IP2200regi_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (IP2200regi_dialog), _("Print Head Alignment"));
  gtk_window_set_modal (GTK_WINDOW (IP2200regi_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (IP2200regi_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (IP2200regi_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox190 = GTK_DIALOG (IP2200regi_dialog)->vbox;
  gtk_widget_show (vbox190);

  vbox191 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox191);
  gtk_box_pack_start (GTK_BOX (vbox190), vbox191, TRUE, TRUE, 0);

  IP2200reg_label1 = gtk_label_new (_("Execute head alignment. Examine the printed patterns, and enter nthe pattern number of the pattern with the least amount of streaking in the nfields for columns A to L."));
  gtk_widget_show (IP2200reg_label1);
  gtk_box_pack_start (GTK_BOX (vbox191), IP2200reg_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label1), 5, 5);

  hbox101 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox101);
  gtk_box_pack_start (GTK_BOX (vbox191), hbox101, TRUE, TRUE, 0);

  IP2200regi_drawingarea = gtk_drawing_area_new ();
  gtk_widget_show (IP2200regi_drawingarea);
  gtk_box_pack_start (GTK_BOX (hbox101), IP2200regi_drawingarea, TRUE, TRUE, 0);
  gtk_widget_set_size_request (IP2200regi_drawingarea, 128, 180);
  gtk_widget_set_events (IP2200regi_drawingarea, GDK_EXPOSURE_MASK | GDK_BUTTON_PRESS_MASK);

  vbox192 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox192);
  gtk_box_pack_start (GTK_BOX (hbox101), vbox192, TRUE, TRUE, 0);

  table85 = gtk_table_new (15, 2, FALSE);
  gtk_widget_show (table85);
  gtk_box_pack_start (GTK_BOX (vbox192), table85, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table85), 5);

  IP2200reg_label10 = gtk_label_new (_("Column G:"));
  gtk_widget_show (IP2200reg_label10);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label10, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label10), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label10), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label10), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label10), 60, 0);

  IP2200reg_label11 = gtk_label_new (_("Column H:"));
  gtk_widget_show (IP2200reg_label11);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label11, 0, 1, 10, 11,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label11), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label11), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label11), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label11), 60, 0);

  IP2200reg_label12 = gtk_label_new (_("Column I:"));
  gtk_widget_show (IP2200reg_label12);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label12, 0, 1, 11, 12,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label12), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label12), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label12), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label12), 60, 0);

  IP2200reg_label13 = gtk_label_new (_("Column J:"));
  gtk_widget_show (IP2200reg_label13);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label13, 0, 1, 12, 13,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label13), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label13), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label13), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label13), 60, 0);

  IP2200reg_label14 = gtk_label_new (_("Column K:"));
  gtk_widget_show (IP2200reg_label14);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label14, 0, 1, 13, 14,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label14), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label14), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label14), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label14), 60, 0);

  IP2200reg_label15 = gtk_label_new (_("Column L:"));
  gtk_widget_show (IP2200reg_label15);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label15, 0, 1, 14, 15,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label15), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label15), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label15), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label15), 60, 0);

  IP2200regi_spinbutton12_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton12 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton12_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton12);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton12, 1, 2, 14, 15,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton11_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton11 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton11_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton11);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton11, 1, 2, 13, 14,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton10_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton10 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton10_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton10);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton10, 1, 2, 12, 13,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton9_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton9 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton9_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton9);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton9, 1, 2, 11, 12,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton8_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton8 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton8_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton8);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton8, 1, 2, 10, 11,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton7_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton7 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton7_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton7);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton7, 1, 2, 9, 10,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200reg_label2 = gtk_label_new (_("Adjustment in Columns A to F (-5 to +5)"));
  gtk_widget_show (IP2200reg_label2);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label2, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label2), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label2), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label2), 0, 0.5);

  IP2200reg_label3 = gtk_label_new (_("Column A:"));
  gtk_widget_show (IP2200reg_label3);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label3), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label3), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label3), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label3), 60, 0);

  IP2200reg_label4 = gtk_label_new (_("Column B:"));
  gtk_widget_show (IP2200reg_label4);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label4, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label4), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label4), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label4), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label4), 60, 0);

  IP2200reg_label5 = gtk_label_new (_("Column C:"));
  gtk_widget_show (IP2200reg_label5);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label5, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label5), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label5), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label5), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label5), 60, 0);

  IP2200reg_label6 = gtk_label_new (_("Column D:"));
  gtk_widget_show (IP2200reg_label6);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label6, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label6), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label6), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label6), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label6), 60, 0);

  IP2200reg_label7 = gtk_label_new (_("Column E:"));
  gtk_widget_show (IP2200reg_label7);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label7, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label7), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label7), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label7), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label7), 60, 0);

  IP2200reg_label8 = gtk_label_new (_("Column F:"));
  gtk_widget_show (IP2200reg_label8);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label8, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label8), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label8), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (IP2200reg_label8), 60, 0);

  IP2200regi_spinbutton1_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton1_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton1);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton1, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton2_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton2_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton2);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton2, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton3_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton3_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton3);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton3, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton4_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton4_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton4);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton4, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton5_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton5_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton5);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton5, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  IP2200regi_spinbutton6_adj = gtk_adjustment_new (0, -5, 5, 1, 10, 10);
  IP2200regi_spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (IP2200regi_spinbutton6_adj), 1, 0);
  gtk_widget_show (IP2200regi_spinbutton6);
  gtk_table_attach (GTK_TABLE (table85), IP2200regi_spinbutton6, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);


  hseparator50 = gtk_hseparator_new ();
  gtk_widget_show (hseparator50);
  gtk_table_attach (GTK_TABLE (table85), hseparator50, 0, 2, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 4);

  IP2200reg_label9 = gtk_label_new (_("Adjustment in Columns G to L (-5 to +5)"));
  gtk_widget_show (IP2200reg_label9);
  gtk_table_attach (GTK_TABLE (table85), IP2200reg_label9, 0, 2, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 4);
  gtk_label_set_justify (GTK_LABEL (IP2200reg_label9), GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap (GTK_LABEL (IP2200reg_label9), TRUE);
  gtk_misc_set_alignment (GTK_MISC (IP2200reg_label9), 0, 0.5);

  hbox100 = GTK_DIALOG (IP2200regi_dialog)->action_area;
  gtk_widget_show (hbox100);
  gtk_container_set_border_width (GTK_CONTAINER (hbox100), 5);

  hbuttonbox52 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox52);
  gtk_box_pack_start (GTK_BOX (hbox100), hbuttonbox52, TRUE, FALSE, 0);

  IP2200reg_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (IP2200reg_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox52), IP2200reg_ok_button);
  GTK_WIDGET_SET_FLAGS (IP2200reg_ok_button, GTK_CAN_DEFAULT);

  IP200reg_cancel_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (IP200reg_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox52), IP200reg_cancel_button);
  GTK_WIDGET_SET_FLAGS (IP200reg_cancel_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) IP2200regi_dialog, "delete_event",
                    G_CALLBACK (on_regi_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_dialog, "destroy",
                    G_CALLBACK (on_regi_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_drawingarea, "expose_event",
                    G_CALLBACK (on_regi_drawingarea_expose_event),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_drawingarea, "button_press_event",
                    G_CALLBACK (on_regi_drawingarea_button_press_event),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton12, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_11),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton12, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_11),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton11, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_10),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton11, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_10),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton10, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_09),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton10, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_09),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton9, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_08),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton9, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_08),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton8, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_07),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton8, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_07),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton7, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_06),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton7, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_06),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton1, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_00),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton1, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_00),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton2, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_01),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton2, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_01),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton3, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_02),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton3, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_02),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton4, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_03),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton4, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_03),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton5, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_04),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton5, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_04),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton6, "value_changed",
                    G_CALLBACK (on_regi_spinbutton_changed_05),
                    NULL);
  g_signal_connect ((gpointer) IP2200regi_spinbutton6, "focus_in_event",
                    G_CALLBACK (on_regi_spinbutton_focus_in_event_05),
                    NULL);
  g_signal_connect ((gpointer) IP2200reg_ok_button, "clicked",
                    G_CALLBACK (on_regi_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) IP200reg_cancel_button, "clicked",
                    G_CALLBACK (on_regi_cancel_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (IP2200regi_dialog, IP2200regi_dialog, "IP2200regi_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (IP2200regi_dialog, vbox190, "vbox190");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, vbox191, "vbox191");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label1, "IP2200reg_label1");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, hbox101, "hbox101");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_drawingarea, "IP2200regi_drawingarea");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, vbox192, "vbox192");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, table85, "table85");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label10, "IP2200reg_label10");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label11, "IP2200reg_label11");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label12, "IP2200reg_label12");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label13, "IP2200reg_label13");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label14, "IP2200reg_label14");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label15, "IP2200reg_label15");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton12, "IP2200regi_spinbutton12");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton11, "IP2200regi_spinbutton11");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton10, "IP2200regi_spinbutton10");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton9, "IP2200regi_spinbutton9");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton8, "IP2200regi_spinbutton8");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton7, "IP2200regi_spinbutton7");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label2, "IP2200reg_label2");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label3, "IP2200reg_label3");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label4, "IP2200reg_label4");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label5, "IP2200reg_label5");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label6, "IP2200reg_label6");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label7, "IP2200reg_label7");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label8, "IP2200reg_label8");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton1, "IP2200regi_spinbutton1");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton2, "IP2200regi_spinbutton2");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton3, "IP2200regi_spinbutton3");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton4, "IP2200regi_spinbutton4");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton5, "IP2200regi_spinbutton5");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200regi_spinbutton6, "IP2200regi_spinbutton6");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, hseparator50, "hseparator50");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_label9, "IP2200reg_label9");
  GLADE_HOOKUP_OBJECT_NO_REF (IP2200regi_dialog, hbox100, "hbox100");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, hbuttonbox52, "hbuttonbox52");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP2200reg_ok_button, "IP2200reg_ok_button");
  GLADE_HOOKUP_OBJECT (IP2200regi_dialog, IP200reg_cancel_button, "IP200reg_cancel_button");

  gtk_widget_grab_focus (IP2200reg_ok_button);
  gtk_widget_grab_default (IP2200reg_ok_button);
  return IP2200regi_dialog;
}

GtkWidget*
create_mediasize_illegal_select_dialog (void)
{
  GtkWidget *mediasize_illegal_select_dialog;
  GtkWidget *vbox194;
  GtkWidget *vbox195;
  GtkWidget *label139;
  GtkWidget *table88;
  GtkWidget *mediasize_illegal_select_current_media_label;
  GtkWidget *mediasize_illegal_select_current_size_label;
  GtkWidget *label142;
  GtkWidget *label143;
  GtkWidget *mediasize_illegal_select_message_label;
  GtkWidget *vbox196;
  GtkWidget *mediasize_illegal_select_radio_button1;
  GSList *mediasize_illegal_select_radio_button1_group = NULL;
  GtkWidget *mediasize_illegal_select_radio_button2;
  GtkWidget *mediasize_illegal_select_radio_button3;
  GtkWidget *mediasize_illegal_select_radio_button4;
  GtkWidget *hbox102;
  GtkWidget *hbuttonbox53;
  GtkWidget *mediasize_illegal_select_apply_button;
  GtkWidget *mediasize_illegal_select_cancel_button;

  mediasize_illegal_select_dialog = gtk_dialog_new ();
  /* LUM_LID_CHANGE_COMBINATION */
  gtk_window_set_title (GTK_WINDOW (mediasize_illegal_select_dialog), _("Change Combination"));
  gtk_window_set_modal (GTK_WINDOW (mediasize_illegal_select_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (mediasize_illegal_select_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (mediasize_illegal_select_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  vbox194 = GTK_DIALOG (mediasize_illegal_select_dialog)->vbox;
  gtk_widget_show (vbox194);

  vbox195 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (vbox195);
  gtk_box_pack_start (GTK_BOX (vbox194), vbox195, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox195), 16);

  /* LUM_IDD_SA_INVALIDCOMBINATION_IDC_STT_SA_TITLE */
  label139 = gtk_label_new (_("You cannot print with the following combination:"));
  gtk_widget_show (label139);
  gtk_box_pack_start (GTK_BOX (vbox195), label139, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (label139), 7.45058e-09, 0.5);

  table88 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table88);
  gtk_box_pack_start (GTK_BOX (vbox195), table88, FALSE, FALSE, 0);

  mediasize_illegal_select_current_media_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_select_current_media_label);
  gtk_table_attach (GTK_TABLE (table88), mediasize_illegal_select_current_media_label, 1, 2, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (mediasize_illegal_select_current_media_label), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_select_current_media_label), 7.45058e-09, 0.5);

  mediasize_illegal_select_current_size_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_select_current_size_label);
  gtk_table_attach (GTK_TABLE (table88), mediasize_illegal_select_current_size_label, 1, 2, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_select_current_size_label), 7.45058e-09, 0.5);

  /* LUM_IDD_PAG_PAGESET_XP_IDC_STT_PAGESIZE */
  label142 = gtk_label_new (_("Page Size:"));
  gtk_widget_show (label142);
  gtk_table_attach (GTK_TABLE (table88), label142, 0, 1, 1, 2,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label142), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label142), 20, 0);

  /* LUM_IDD_PAG_MAIN_IDC_STT_MEDIATYPE */
  label143 = gtk_label_new (_("Media Type:"));
  gtk_widget_show (label143);
  gtk_table_attach (GTK_TABLE (table88), label143, 0, 1, 0, 1,
  (GtkAttachOptions) (GTK_FILL),
  (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label143), GTK_JUSTIFY_CENTER);
  gtk_misc_set_alignment (GTK_MISC (label143), 7.45058e-09, 0.5);
  gtk_misc_set_padding (GTK_MISC (label143), 20, 0);

  mediasize_illegal_select_message_label = gtk_label_new (_("*"));
  gtk_widget_show (mediasize_illegal_select_message_label);
  gtk_box_pack_start (GTK_BOX (vbox195), mediasize_illegal_select_message_label, FALSE, FALSE, 0);
  gtk_misc_set_alignment (GTK_MISC (mediasize_illegal_select_message_label), 7.45058e-09, 0.5);

  vbox196 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox196);
  gtk_box_pack_start (GTK_BOX (vbox195), vbox196, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vbox196), 10);

  mediasize_illegal_select_radio_button1 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_illegal_select_radio_button1);
  gtk_box_pack_start (GTK_BOX (vbox196), mediasize_illegal_select_radio_button1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button1), mediasize_illegal_select_radio_button1_group);
  mediasize_illegal_select_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button1));

  mediasize_illegal_select_radio_button2 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_illegal_select_radio_button2);
  gtk_box_pack_start (GTK_BOX (vbox196), mediasize_illegal_select_radio_button2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button2), mediasize_illegal_select_radio_button1_group);
  mediasize_illegal_select_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button2));

  mediasize_illegal_select_radio_button3 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_illegal_select_radio_button3);
  gtk_box_pack_start (GTK_BOX (vbox196), mediasize_illegal_select_radio_button3, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button3), mediasize_illegal_select_radio_button1_group);
  mediasize_illegal_select_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button3));

  mediasize_illegal_select_radio_button4 = gtk_radio_button_new_with_mnemonic (NULL, _("*"));
  gtk_widget_show (mediasize_illegal_select_radio_button4);
  gtk_box_pack_start (GTK_BOX (vbox196), mediasize_illegal_select_radio_button4, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button4), mediasize_illegal_select_radio_button1_group);
  mediasize_illegal_select_radio_button1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (mediasize_illegal_select_radio_button4));

  hbox102 = GTK_DIALOG (mediasize_illegal_select_dialog)->action_area;
  gtk_widget_show (hbox102);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbox102), GTK_BUTTONBOX_END);

  hbuttonbox53 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox53);
  gtk_container_add (GTK_CONTAINER (hbox102), hbuttonbox53);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox53), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox53), 8);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDOK */
  mediasize_illegal_select_apply_button = gtk_button_new_with_mnemonic (_("Change"));
  gtk_widget_show (mediasize_illegal_select_apply_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox53), mediasize_illegal_select_apply_button);
  GTK_WIDGET_SET_FLAGS (mediasize_illegal_select_apply_button, GTK_CAN_DEFAULT);

  /* LUM_IDD_SA_INVALIDCOMBINATIONONE_IDCANCEL */
  mediasize_illegal_select_cancel_button = gtk_button_new_with_mnemonic (_("Back to Setup"));
  gtk_widget_show (mediasize_illegal_select_cancel_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox53), mediasize_illegal_select_cancel_button);
  GTK_WIDGET_SET_FLAGS (mediasize_illegal_select_cancel_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) mediasize_illegal_select_dialog, "delete_event",
  G_CALLBACK (on_mediasize_illegal_select_dialog_delete_event),
  NULL);
  g_signal_connect ((gpointer) mediasize_illegal_select_apply_button, "clicked",
  G_CALLBACK (on_mediasize_illegal_select_apply_button_clicked),
  NULL);
  g_signal_connect ((gpointer) mediasize_illegal_select_cancel_button, "clicked",
  G_CALLBACK (on_mediasize_illegal_select_cancel_button_clicked),
  NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_illegal_select_dialog, mediasize_illegal_select_dialog, "mediasize_illegal_select_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_illegal_select_dialog, vbox194, "vbox194");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, vbox195, "vbox195");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, label139, "label139");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, table88, "table88");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_current_media_label, "mediasize_illegal_select_current_media_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_current_size_label, "mediasize_illegal_select_current_size_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, label142, "label142");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, label143, "label143");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_message_label, "mediasize_illegal_select_message_label");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, vbox196, "vbox196");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_radio_button1, "mediasize_illegal_select_radio_button1");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_radio_button2, "mediasize_illegal_select_radio_button2");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_radio_button3, "mediasize_illegal_select_radio_button3");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_radio_button4, "mediasize_illegal_select_radio_button4");
  GLADE_HOOKUP_OBJECT_NO_REF (mediasize_illegal_select_dialog, hbox102, "hbox102");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, hbuttonbox53, "hbuttonbox53");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_apply_button, "mediasize_illegal_select_apply_button");
  GLADE_HOOKUP_OBJECT (mediasize_illegal_select_dialog, mediasize_illegal_select_cancel_button, "mediasize_illegal_select_cancel_button");

  gtk_widget_grab_focus (mediasize_illegal_select_apply_button);
  gtk_widget_grab_default (mediasize_illegal_select_apply_button);
  return mediasize_illegal_select_dialog;
}

GtkWidget*
create_ink_cartridge_dialog (void)
{
  GtkWidget *ink_cartridge_dialog;
  GtkWidget *ink_cartridge_dialog_vbox1;
  GtkWidget *ink_cartridge_dialog_vbox2;
  GtkWidget *ink_cartridge_dialog_label1;
  GtkWidget *ink_cartridge_dialog_label2;
  GtkWidget *ink_cartridge_dialog_combo;
  GtkWidget *ink_cartridge_dialog_label3;
  GtkWidget *hbox103;
  GtkWidget *hbuttonbox54;
  GtkWidget *ink_cartridge_dialog_ok_button;
  GtkWidget *ink_cartridge_dialog_ng_button;
  GtkWidget *ink_cartridge_dialog_defaults_button;

  ink_cartridge_dialog = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (ink_cartridge_dialog), _("Ink Cartridge Settings"));
  gtk_window_set_modal (GTK_WINDOW (ink_cartridge_dialog), TRUE);
  gtk_window_set_resizable (GTK_WINDOW (ink_cartridge_dialog), FALSE);
  gtk_window_set_type_hint (GTK_WINDOW (ink_cartridge_dialog), GDK_WINDOW_TYPE_HINT_DIALOG);

  ink_cartridge_dialog_vbox1 = GTK_DIALOG (ink_cartridge_dialog)->vbox;
  gtk_widget_show (ink_cartridge_dialog_vbox1);

  ink_cartridge_dialog_vbox2 = gtk_vbox_new (FALSE, 6);
  gtk_widget_show (ink_cartridge_dialog_vbox2);
  gtk_box_pack_start (GTK_BOX (ink_cartridge_dialog_vbox1), ink_cartridge_dialog_vbox2, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (ink_cartridge_dialog_vbox2), 16);

  ink_cartridge_dialog_label1 = gtk_label_new (_("Select the ink cartridge for printing."));
  gtk_widget_show (ink_cartridge_dialog_label1);
  gtk_box_pack_start (GTK_BOX (ink_cartridge_dialog_vbox2), ink_cartridge_dialog_label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ink_cartridge_dialog_label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (ink_cartridge_dialog_label1), 7.45058e-09, 0.5);

  ink_cartridge_dialog_label2 = gtk_label_new (_("Ink Cartridge:"));
  gtk_widget_show (ink_cartridge_dialog_label2);
  gtk_box_pack_start (GTK_BOX (ink_cartridge_dialog_vbox2), ink_cartridge_dialog_label2, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ink_cartridge_dialog_label2), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (ink_cartridge_dialog_label2), 7.45058e-09, 0.5);

  ink_cartridge_dialog_combo = gtk_combo_box_new_text ();
  gtk_widget_show (ink_cartridge_dialog_combo);
  gtk_box_pack_start (GTK_BOX (ink_cartridge_dialog_vbox2), ink_cartridge_dialog_combo, FALSE, FALSE, 0);

  ink_cartridge_dialog_label3 = gtk_label_new (_("*"));
  gtk_widget_show (ink_cartridge_dialog_label3);
  gtk_box_pack_start (GTK_BOX (ink_cartridge_dialog_vbox2), ink_cartridge_dialog_label3, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (ink_cartridge_dialog_label3), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (ink_cartridge_dialog_label3), 7.45058e-09, 0.5);

  hbox103 = GTK_DIALOG (ink_cartridge_dialog)->action_area;
  gtk_widget_show (hbox103);
  gtk_container_set_border_width (GTK_CONTAINER (hbox103), 5);

  hbuttonbox54 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox54);
  gtk_box_pack_start (GTK_BOX (hbox103), hbuttonbox54, TRUE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox54), GTK_BUTTONBOX_END);
  gtk_box_set_spacing (GTK_BOX (hbuttonbox54), 0);

  ink_cartridge_dialog_ok_button = gtk_button_new_with_mnemonic (_("OK"));
  gtk_widget_show (ink_cartridge_dialog_ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox54), ink_cartridge_dialog_ok_button);
  GTK_WIDGET_SET_FLAGS (ink_cartridge_dialog_ok_button, GTK_CAN_DEFAULT);

  ink_cartridge_dialog_ng_button = gtk_button_new_with_mnemonic (_("Cancel"));
  gtk_widget_show (ink_cartridge_dialog_ng_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox54), ink_cartridge_dialog_ng_button);
  GTK_WIDGET_SET_FLAGS (ink_cartridge_dialog_ng_button, GTK_CAN_DEFAULT);

  ink_cartridge_dialog_defaults_button = gtk_button_new_with_mnemonic (_("Defaults"));
  gtk_widget_show (ink_cartridge_dialog_defaults_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox54), ink_cartridge_dialog_defaults_button);
  GTK_WIDGET_SET_FLAGS (ink_cartridge_dialog_defaults_button, GTK_CAN_DEFAULT);
  g_signal_connect ((gpointer) ink_cartridge_dialog, "delete_event",
                    G_CALLBACK (on_ink_cartridge_dialog_delete_event),
                    NULL);
  g_signal_connect ((gpointer) ink_cartridge_dialog, "destroy",
                    G_CALLBACK (on_ink_cartridge_dialog_destroy),
                    NULL);
  g_signal_connect ((gpointer) ink_cartridge_dialog_combo, "changed",
                    G_CALLBACK (on_ink_cartridge_dialog_combo_changed),
                    NULL);
  g_signal_connect ((gpointer) ink_cartridge_dialog_ok_button, "clicked",
                    G_CALLBACK (on_ink_cartridge_dialog_ok_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ink_cartridge_dialog_ng_button, "clicked",
                    G_CALLBACK (on_ink_cartridge_dialog_cancel_button_clicked),
                    NULL);
  g_signal_connect ((gpointer) ink_cartridge_dialog_defaults_button, "clicked",
                    G_CALLBACK (on_ink_cartridge_dialog_defaults_button_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ink_cartridge_dialog, ink_cartridge_dialog, "ink_cartridge_dialog");
  GLADE_HOOKUP_OBJECT_NO_REF (ink_cartridge_dialog, ink_cartridge_dialog_vbox1, "ink_cartridge_dialog_vbox1");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_vbox2, "ink_cartridge_dialog_vbox2");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_label1, "ink_cartridge_dialog_label1");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_label2, "ink_cartridge_dialog_label2");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_combo, "ink_cartridge_dialog_combo");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_label3, "ink_cartridge_dialog_label3");
  GLADE_HOOKUP_OBJECT_NO_REF (ink_cartridge_dialog, hbox103, "hbox103");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, hbuttonbox54, "hbuttonbox54");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_ok_button, "ink_cartridge_dialog_ok_button");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_ng_button, "ink_cartridge_dialog_ng_button");
  GLADE_HOOKUP_OBJECT (ink_cartridge_dialog, ink_cartridge_dialog_defaults_button, "ink_cartridge_dialog_defaults_button");

  return ink_cartridge_dialog;
}
