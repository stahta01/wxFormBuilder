# TODO: Since media is currently a required component always enable the control
wxfb_add_plugin(additional
  DEFINITIONS
    USE_MEDIACTRL
  COMPONENTS
    additional
    data
    ribbon
  ICONS
    bitmap_toggle_button.xpm
    calendar.xpm
    calendar16x16.xpm
    checklistbox.xpm
    colourPickerIcon.xpm
    combo_box.xpm
    customcode.xpm
    custom_control.xpm
    dataviewlist_column.xpm
    dataviewlist_ctrl.xpm
    dataviewtree_ctrl.xpm
    dataview_ctrl.xpm
    datepicker.xpm
    dirPicker.xpm
    filePicker.xpm
    fontPicker.xpm
    genericdir_ctrl.xpm
    grid.xpm
    htmlwin.xpm
    hyperlink_ctrl.xpm
    list_box.xpm
    media_ctrl.xpm
    propgrid.xpm
    propgriditem.xpm
    propgridman.xpm
    propgridpage.xpm
    ribbon_bar.xpm
    ribbon_button.xpm
    ribbon_buttonbar.xpm
    ribbon_button_dropdown.xpm
    ribbon_button_hybrid.xpm
    ribbon_button_toggle.xpm
    ribbon_gallery.xpm
    ribbon_page.xpm
    ribbon_panel.xpm
    richtextctrl.xpm
    scintilla.xpm
    scrollbar.xpm
    search.xpm
    spinbtn.xpm
    spin_ctrl.xpm
    spin_ctrl_double.xpm
    timepicker.xpm
    timer.xpm
    toggle_button.xpm
    treelistctrl.xpm
    treelistctrlcolumn.xpm
    tree_ctrl.xpm
)

wxfb_add_plugin(common
  COMPONENTS
    common
    menutoolbar
  ICONS
    animation.xpm
    auitoolbar.xpm
    bitmap_button.xpm
    button.xpm
    button16x16.xpm
    checkbox.xpm
    choice.xpm
    combo_box.xpm
    gauge.xpm
    infobar.xpm
    list_box.xpm
    list_ctrl.xpm
    menu.xpm
    menubar.xpm
    menuitem.xpm
    radio_box.xpm
    radio_button.xpm
    separator.xpm
    slider.xpm
    static_bitmap.xpm
    static_line.xpm
    static_text.xpm
    statusbar.xpm
    submenu.xpm
    text_ctrl.xpm
    tool.xpm
    toolbar.xpm
    toolSeparator.xpm
)

wxfb_add_plugin(containers
  SOURCES
    bookutils.h
  ICONS
    auinotebook.xpm
    choicebook.xpm
    collpane.xpm
    listbook.xpm
    notebook.xpm
    panel.xpm
    scrollwin.xpm
    splitter_window.xpm
)

wxfb_add_plugin(forms
  ICONS
    dialog.xpm
    document.xpm
    doc_mdi_parent_frame.xpm
    doc_parent_frame.xpm
    frame.xpm
    frame16x16.png
    menubar.xpm
    panel.xpm
    toolbar.xpm
    wizard.xpm
    wizpage.xpm
)

wxfb_add_plugin(layout
  ICONS
    flex_grid_sizer.xpm
    grid_bag_sizer.xpm
    grid_sizer.xpm
    sizer.xpm
    sizer16x16.xpm
    spacer.xpm
    staticbox_sizer.xpm
    stddialogbuttonsizer.xpm
    wrap_sizer.xpm
)
