_$s19ControlCenterHelperAAC23createDiagnosticsReportyyF
Swift::Void __swiftcall ControlCenterHelper.createDiagnosticsReport()()
{
  if ( qword_1000939E0 != -1 )
    swift_once(&qword_1000939E0, sub_100016030);
  WiFiHelper.createDiagnosticsReport()();
}