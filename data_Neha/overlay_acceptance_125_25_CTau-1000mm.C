#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_acceptance_125_25_CTau-1000mm()
{
//=========Macro generated from canvas: c/
//=========  (Wed Dec 17 14:42:13 2025) by ROOT version 6.26/11
   TCanvas *c = new TCanvas("c", "",1,1,800,776);
   gStyle->SetOptStat(0);
   c->Range(-100,-0.1625,900,1.4625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *frame__2 = new TH1D("frame__2","",100,0,1000);
   frame__2->SetMinimum(0);
   frame__2->SetMaximum(1.3);
   frame__2->SetDirectory(0);
   frame__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame__2->SetLineColor(ci);
   frame__2->GetXaxis()->SetTitle("LLP decay R [cm]");
   frame__2->GetXaxis()->SetRange(1,80);
   frame__2->GetXaxis()->SetLabelFont(42);
   frame__2->GetXaxis()->SetTitleOffset(1);
   frame__2->GetXaxis()->SetTitleFont(42);
   frame__2->GetYaxis()->SetTitle("L1T+HLT acceptance");
   frame__2->GetYaxis()->SetLabelFont(42);
   frame__2->GetYaxis()->SetTitleFont(42);
   frame__2->GetZaxis()->SetLabelFont(42);
   frame__2->GetZaxis()->SetTitleOffset(1);
   frame__2->GetZaxis()->SetTitleFont(42);
   frame__2->Draw("");
   TBox *box = new TBox(0,0,110,1);

   ci = 1179;
   color = new TColor(ci, 0.4, 1, 1, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
   TLatex *   tex = new TLatex(100,0.75,"Tracker");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#33cccc");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(128,0,147,1);

   ci = 1180;
   color = new TColor(ci, 1, 0, 0, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
      tex = new TLatex(137.5,0.75,"ECAL");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#ff0000");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(177,0,287.7,1);

   ci = 1181;
   color = new TColor(ci, 0, 0, 1, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
      tex = new TLatex(277,0.75,"HCAL");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#0000ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   box = new TBox(400,0,720,1);

   ci = 1182;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.15);
   box->SetFillColor(ci);
   box->SetLineWidth(0);
   box->Draw();
      tex = new TLatex(410,0.75,"Muon DTs");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#009900");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.025);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t _fx3006[13] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   110,
   130,
   150};
   Double_t _fy3006[13] = {
   0.002633541,
   0.004364799,
   0.00164247,
   0.004128874,
   0.003337942,
   0.0006651665,
   0.004370106,
   0.005129459,
   0.002096383,
   0.005008257,
   0.003438245,
   0.01076585,
   0};
   Double_t _felx3006[13] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10};
   Double_t _fely3006[13] = {
   0.0009939804,
   0.001384597,
   0.0008314834,
   0.001407387,
   0.001281421,
   0.0005325545,
   0.001592892,
   0.001746693,
   0.001140822,
   0.001898826,
   0.001150452,
   0.002164782,
   0};
   Double_t _fehx3006[13] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10};
   Double_t _fehy3006[13] = {
   0.001463354,
   0.001909702,
   0.00141732,
   0.001990599,
   0.00189915,
   0.001399265,
   0.002310468,
   0.002468489,
   0.002035128,
   0.002797232,
   0.001616884,
   0.002643885,
   0.001537493};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph30013006 = new TH1F("Graph_Graph_Graph30013006","",100,0,176);
   Graph_Graph_Graph30013006->SetMinimum(0);
   Graph_Graph_Graph30013006->SetMaximum(0.0147507);
   Graph_Graph_Graph30013006->SetDirectory(0);
   Graph_Graph_Graph30013006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30013006->SetLineColor(ci);
   Graph_Graph_Graph30013006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30013006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30013006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30013006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30013006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30013006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30013006);
   
   grae->Draw("pe ");
   
   Double_t _fx3007[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290};
   Double_t _fy3007[20] = {
   0.008177541,
   0.002888589,
   0.001706857,
   0.004014034,
   0.004274155,
   0.002272969,
   0.002348736,
   0.004708899,
   0.01073294,
   0.004846783,
   0.009409544,
   0.0109577,
   0.01224255,
   0.006655743,
   0.008777256,
   0.05626803,
   0.06954314,
   0.06958171,
   0.04940463,
   0.01527263};
   Double_t _felx3007[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fely3007[20] = {
   0.001927729,
   0.001205404,
   0.0009064939,
   0.001496443,
   0.001565685,
   0.001183429,
   0.001222081,
   0.001789711,
   0.002892552,
   0.002013629,
   0.002072306,
   0.002350805,
   0.002634048,
   0.00201375,
   0.002429855,
   0.006407592,
   0.007565148,
   0.008069168,
   0.00718629,
   0.004079505};
   Double_t _fehx3007[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t _fehy3007[20] = {
   0.002440251,
   0.001853824,
   0.001591933,
   0.002190509,
   0.002275565,
   0.002051288,
   0.002117294,
   0.002639565,
   0.00378724,
   0.003086958,
   0.002581337,
   0.002910193,
   0.003261776,
   0.00273252,
   0.003207716,
   0.00712853,
   0.008361349,
   0.008977327,
   0.008244941,
   0.005319992};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph30023007 = new TH1F("Graph_Graph_Graph30023007","",100,0,330);
   Graph_Graph_Graph30023007->SetMinimum(0.0007203265);
   Graph_Graph_Graph30023007->SetMaximum(0.0863349);
   Graph_Graph_Graph30023007->SetDirectory(0);
   Graph_Graph_Graph30023007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30023007->SetLineColor(ci);
   Graph_Graph_Graph30023007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30023007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30023007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30023007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30023007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30023007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30023007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30023007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30023007);
   
   grae->Draw("pe ");
   
   Double_t _fx3008[25] = {
   210,
   230,
   250,
   270,
   290,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5,
   612.5,
   637.5,
   662.5,
   687.5,
   712.5,
   737.5,
   762.5,
   787.5};
   Double_t _fy3008[25] = {
   0.01546245,
   0.02641296,
   0.02088444,
   0.02807923,
   0.02409642,
   0.05272368,
   0.0693425,
   0.08703528,
   0.09429566,
   0.1066462,
   0.1160747,
   0.1275389,
   0.130831,
   0.1280087,
   0.1309214,
   0.1277818,
   0.189875,
   0.1482652,
   0.187272,
   0.1429021,
   0.1606897,
   0.1487099,
   0.06964431,
   0.01339844,
   0.02482964};
   Double_t _felx3008[25] = {
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3008[25] = {
   0.002912525,
   0.00408711,
   0.003929488,
   0.004896758,
   0.004672855,
   0.006744173,
   0.008314598,
   0.009715894,
   0.01115064,
   0.0124846,
   0.01394047,
   0.01505283,
   0.01750171,
   0.01797697,
   0.01936108,
   0.02134286,
   0.02566227,
   0.02418935,
   0.02980124,
   0.02772517,
   0.0314176,
   0.03288665,
   0.02399049,
   0.009906557,
   0.01467543};
   Double_t _fehx3008[25] = {
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3008[25] = {
   0.003508132,
   0.004751251,
   0.004726221,
   0.005801064,
   0.005648234,
   0.007606434,
   0.009284204,
   0.01073968,
   0.0123847,
   0.01382496,
   0.01545367,
   0.01662586,
   0.01957368,
   0.02022788,
   0.021907,
   0.0245532,
   0.02838543,
   0.02760155,
   0.03356855,
   0.03247613,
   0.03664877,
   0.03929597,
   0.0330066,
   0.02289664,
   0.02717602};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph30033008 = new TH1F("Graph_Graph_Graph30033008","",100,140,860);
   Graph_Graph_Graph30033008->SetMinimum(0.003142697);
   Graph_Graph_Graph30033008->SetMaximum(0.2425754);
   Graph_Graph_Graph30033008->SetDirectory(0);
   Graph_Graph_Graph30033008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30033008->SetLineColor(ci);
   Graph_Graph_Graph30033008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30033008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30033008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30033008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30033008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30033008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30033008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30033008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30033008);
   
   grae->Draw("pe ");
   
   Double_t _fx3009[29] = {
   75,
   85,
   95,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5,
   612.5,
   637.5,
   662.5,
   687.5};
   Double_t _fy3009[29] = {
   0,
   0.0189937,
   0,
   0.02835551,
   0.01705618,
   0.08809817,
   0.1684363,
   0.2112186,
   0.171504,
   0.1721927,
   0.189793,
   0.1950399,
   0.1510013,
   0.1103212,
   0.2134702,
   0.2489981,
   0.2777232,
   0.2968725,
   0.2984143,
   0.4135802,
   0.5223079,
   0.5635885,
   0.5891306,
   0.5452474,
   0.5065295,
   0.3764011,
   0.2085046,
   0.05750261,
   0.0282553};
   Double_t _felx3009[29] = {
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3009[29] = {
   0,
   0.01388406,
   0,
   0.008168863,
   0.005461896,
   0.01150339,
   0.01541733,
   0.01610557,
   0.01509749,
   0.01562766,
   0.01636033,
   0.01725488,
   0.01648265,
   0.01387448,
   0.01932746,
   0.02118541,
   0.02327695,
   0.02432011,
   0.02589679,
   0.03143923,
   0.03868363,
   0.04054583,
   0.04082987,
   0.0502844,
   0.05229978,
   0.05122195,
   0.04663791,
   0.02895204,
   0.02245841};
   Double_t _fehx3009[29] = {
   5,
   5,
   5,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3009[29] = {
   0.08575405,
   0.03142128,
   0.01492703,
   0.01082994,
   0.007516741,
   0.01293009,
   0.01656534,
   0.01701293,
   0.01617109,
   0.01677253,
   0.01745621,
   0.01842796,
   0.01800428,
   0.01547029,
   0.02061617,
   0.02239343,
   0.02447323,
   0.02546199,
   0.02717704,
   0.03211782,
   0.0384352,
   0.03976931,
   0.03971887,
   0.04945078,
   0.05216921,
   0.05387027,
   0.05462691,
   0.04710465,
   0.05586687};
   grae = new TGraphAsymmErrors(29,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph30043009 = new TH1F("Graph_Graph_Graph30043009","",100,7,763);
   Graph_Graph_Graph30043009->SetMinimum(0);
   Graph_Graph_Graph30043009->SetMaximum(0.6917344);
   Graph_Graph_Graph30043009->SetDirectory(0);
   Graph_Graph_Graph30043009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30043009->SetLineColor(ci);
   Graph_Graph_Graph30043009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30043009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30043009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30043009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30043009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30043009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30043009);
   
   grae->Draw("pe ");
   
   Double_t _fx3010[15] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   110,
   130,
   150,
   175,
   250};
   Double_t _fy3010[15] = {
   0.005227612,
   0.02806155,
   0.002676127,
   0.03614067,
   0.03974603,
   0.04447697,
   0.04549285,
   0.03197925,
   0.01602658,
   0.1417418,
   0.1820368,
   0.05786989,
   0.01977051,
   0.3281877,
   0.2900027};
   Double_t _felx3010[15] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   25,
   50};
   Double_t _fely3010[15] = {
   0.0005063016,
   0.001545219,
   0.0006002357,
   0.002879782,
   0.003480498,
   0.005014324,
   0.005665218,
   0.006045912,
   0.005144788,
   0.01603003,
   0.0163667,
   0.01285473,
   0.01153708,
   0.03027446,
   0.03757927};
   Double_t _fehx3010[15] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   10,
   10,
   10,
   25,
   50};
   Double_t _fehy3010[15] = {
   0.000557553,
   0.001629979,
   0.0007521501,
   0.003108841,
   0.003784507,
   0.005581582,
   0.006376236,
   0.007259488,
   0.007089225,
   0.01759201,
   0.01753027,
   0.01582398,
   0.0212691,
   0.03167876,
   0.04043861};
   grae = new TGraphAsymmErrors(15,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#33cccc");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#33cccc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(2.2);
   
   TH1F *Graph_Graph_Graph30053010 = new TH1F("Graph_Graph_Graph30053010","",100,0,330);
   Graph_Graph_Graph30053010->SetMinimum(0.001868302);
   Graph_Graph_Graph30053010->SetMaximum(0.3956455);
   Graph_Graph_Graph30053010->SetDirectory(0);
   Graph_Graph_Graph30053010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30053010->SetLineColor(ci);
   Graph_Graph_Graph30053010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph30053010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30053010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph30053010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph30053010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph30053010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30053010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph30053010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30053010);
   
   grae->Draw("pe ");
      tex = new TLatex(0.11,0.91,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.91,"#bf{#it{Simulation}}");
tex->SetNDC();
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.89,0.91,"(13.6 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.68,0.83,0.87,0.86,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextSize(0.025);
   TText *pt_LaTex = pt->AddText("#bf{H #rightarrow XX #rightarrow 4b}");
   pt->Draw();
   
   pt = new TPaveText(0.68,0.78,0.87,0.82,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextSize(0.025);
   pt_LaTex = pt->AddText("#bf{m_{H} = 125 GeV}");
   pt->Draw();
   
   pt = new TPaveText(0.68,0.74,0.87,0.78,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextSize(0.025);
   pt_LaTex = pt->AddText("#bf{m_{X} = 25 GeV}");
   pt->Draw();
   TLine *line = new TLine(80,0,80,1);
   line->SetLineStyle(7);
   line->Draw();
   line = new TLine(700,0,700,1);
   line->SetLineStyle(7);
   line->Draw();
   TArrow *arrow = new TArrow(80,0.96,700,0.96,0.01,"<>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);

   ci = TColor::GetColor("#ff00ff");
   arrow->SetLineColor(ci);
   arrow->Draw();
      tex = new TLatex(390,0.975,"CSCs");
   tex->SetTextAlign(22);

   ci = TColor::GetColor("#ff00ff");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.13,0.72,0.74,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.024);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","Displaced-jet using tracker (c#tau = 0.1m)","lep");

   ci = TColor::GetColor("#33cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(2.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Delayed-jet using ECAL timing (c#tau = 1m)","lep");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Displaced-jet using HCAL (c#tau = 1m)","lep");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Muon Detector Showers with DTs (c#tau = 1m)","lep");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Muon Detector Showers with CSCs (c#tau = 1m)","lep");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
