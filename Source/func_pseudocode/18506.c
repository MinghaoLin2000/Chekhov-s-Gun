_$s19ControlCenterHelper04WiFiC0Cfd
__int64 WiFiHelper.deinit()
{
  __int64 v0; // x20

  objc_release(*(id *)(v0 + 16));
  sub_100019710(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_authorization);
  objc_release(*(id *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_wifiUIClient));
  sub_100007F5C(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_currentAction);
  objc_release(*(id *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_currentDialog));
  objc_release(*(id *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_configuration));
  objc_release(*(id *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_wifiClient));
  objc_release(*(id *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper_wifiClientDelegate));
  swift_release(*(_QWORD *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper__monitoringAssertions));
  swift_release(*(_QWORD *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper__scanningAssertions));
  swift_release(*(_QWORD *)(v0 + OBJC_IVAR____TtC19ControlCenterHelper10WiFiHelper___lock));
  return v0;
}