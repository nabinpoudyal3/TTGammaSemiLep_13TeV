/////////////////////////////////
// Total integrated luminosity //
/////////////////////////////////


double luminosity = 35860;
 
/////////////////////////////////////////////////
// Total number of events in the MC simulation //
/////////////////////////////////////////////////

double totalTTGamma_hadronic      = 4966371.;
double totalTTGamma_semilept_Tbar = 4836134.;
double totalTTGamma_semilept_T    = 4791766.;
double totalTTGamma_dilept        = 4907307.;

double totalTGJets                    = 1556973.;


double totalTTbarPowheg           = 77227178.;
double totalTTbarMCatNLO          = 77227178.;

double totalTTbarMadgraph_SingleLeptFromT     = 11956689.;
double totalTTbarMadgraph_SingleLeptFromTbar  = 11943716.;
double totalTTbarMadgraph_Dilepton            = 6094300.;

double totalW1jets           = 45366416.;
double totalW2jets           = 30318880.;
double totalW3jets           = 39268750.;
double totalW4jets           = 18751100.;

double totalDYjetsM50       = 122053259.;
double totalDYjetsM10to50   = 71301217.;

double totalTTWtoQQ         = 833257.;
double totalTTWtoLNu        = 2160030.;
double totalTTZtoLL         = 5933898.;

double totalZGamma           = 14372399.;
double totalWGamma           = 10231838.;

double totalST_tchannel      = 67225849.;
double totalST_tbarchannel   = 38810350;
double totalST_schannel      = 2989123.;
double totalST_tW            = 6932903.;
double totalST_tbarW         = 6932903.;

double totalQCD_Pt20to30_Mu    = 31474692.;
double totalQCD_Pt30to50_Mu    = 29954322.;
double totalQCD_Pt50to80_Mu    = 19806515.;
double totalQCD_Pt80to120_Mu   = 13786651.;
double totalQCD_Pt120to170_Mu  =  8042452.;
double totalQCD_Pt170to300_Mu  =  7946703.;
double totalQCD_Pt300to470_Mu  =  7936465.;
double totalQCD_Pt470to600_Mu  =  3850452.;
double totalQCD_Pt600to800_Mu  =  4008200.;
double totalQCD_Pt800to1000_Mu =  3959757.;
double totalQCD_Pt1000toInf_Mu =  3985729.;
double totalQCD_Pt20to30_Ele   =  9218839.;
double totalQCD_Pt30to50_Ele   =  4730140.;
double totalQCD_Pt50to80_Ele   = 22336804.;
double totalQCD_Pt80to120_Ele  = 35841321.;
double totalQCD_Pt120to170_Ele = 35816734.;
double totalQCD_Pt170to300_Ele = 11539879.;
double totalQCD_Pt300toInf_Ele =  7373130.;



//////////////////////////
// Cross Sections Used  //
//////////////////////////

double TTbar_xs             =  831.76;

double TTbar_dilepton_xs             =  87.315;
double TTbar_semilept_xs             =  182.175;
double TTbar_hadronic_xs             =  831.76-TTbar_dilepton_xs-2*TTbar_semilept_xs;

double TGJets_xs                =  2.967;

double TTGamma_hadronic_xs  =  4.599;
double TTGamma_semilept_xs  =  4.499/2.;
double TTGamma_dilept_xs    =  0.899;

double W1jets_xs            =  9493.0;
double W2jets_xs            =  3120.0;
double W3jets_xs            =  942.3;
double W4jets_xs            =  524.2;

double DYjetsM50_xs         =  5765.4; 
double DYjetsM10to50_xs     =  18610.; 

double TTWtoQQ_xs               =  0.40620;
double TTWtoLNu_xs              =  0.2043;
double TTZtoLL_xs               =  0.2728;

double ZGamma_xs            = 131.3;
double WGamma_xs            = 585.8;

double ST_tW_xs             =  35.85 ;
double ST_tbarW_xs          =  35.85 ;
double ST_tchannel_xs       =  136.02 ;
double ST_tbarchannel_xs    =  80.95 ;
double ST_schannel_xs       =  10.32;


//Product fo XS and filter eff from table at:
//https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#QCD
double QCD_Pt20to30_Mu_xs    = 2960198.4;
double QCD_Pt30to50_Mu_xs    = 1652471.46;
double QCD_Pt50to80_Mu_xs    =  437504.1;
double QCD_Pt80to120_Mu_xs   =  106033.6648;
double QCD_Pt120to170_Mu_xs  =   25190.5151;
double QCD_Pt170to300_Mu_xs  =    8654.4932;
double QCD_Pt300to470_Mu_xs  =     797.3527;
double QCD_Pt470to600_Mu_xs  =      79.0255;
double QCD_Pt600to800_Mu_xs  =      25.0951;
double QCD_Pt800to1000_Mu_xs =       4.7074;
double QCD_Pt1000toInf_Mu_xs =       1.6213;
double QCD_Pt20to30_Ele_xs   = 5352960.;
double QCD_Pt30to50_Ele_xs   = 9928000.;
double QCD_Pt50to80_Ele_xs   = 2890800.;
double QCD_Pt80to120_Ele_xs  =  350000.;
double QCD_Pt120to170_Ele_xs =   62964.;
double QCD_Pt170to300_Ele_xs =   18810.;
double QCD_Pt300toInf_Ele_xs =    1350.;


double TGJets_SF               = TGJets_xs * luminosity / totalTGJets;
double TTGamma_hadronic_SF = TTGamma_hadronic_xs * luminosity / totalTTGamma_hadronic;
double TTGamma_semilept_T_SF = TTGamma_semilept_xs * luminosity / totalTTGamma_semilept_T;
double TTGamma_semilept_Tbar_SF = TTGamma_semilept_xs * luminosity / totalTTGamma_semilept_Tbar;
double TTGamma_dilept_SF   = TTGamma_dilept_xs * luminosity / totalTTGamma_dilept;

double TTbarPowheg_SF = TTbar_xs * luminosity / totalTTbarPowheg;
double TTbarMCatNLO_SF = TTbar_xs * luminosity / totalTTbarMCatNLO;

double TTbarMadgraph_SingleLeptFromT_SF = TTbar_semilept_xs * luminosity / totalTTbarMadgraph_SingleLeptFromT;
double TTbarMadgraph_SingleLeptFromTbar_SF = TTbar_semilept_xs * luminosity / totalTTbarMadgraph_SingleLeptFromTbar;
double TTbarMadgraph_Dilepton_SF = TTbar_dilepton_xs * luminosity / totalTTbarMadgraph_Dilepton;


double W1jets_SF = W1jets_xs * luminosity / totalW1jets;
double W2jets_SF = W2jets_xs * luminosity / totalW2jets;
double W3jets_SF = W3jets_xs * luminosity / totalW3jets;
double W4jets_SF = W4jets_xs * luminosity / totalW4jets;

double DYjetsM10to50_SF = DYjetsM10to50_xs * luminosity / totalDYjetsM10to50;
double DYjetsM50_SF = DYjetsM50_xs * luminosity / totalDYjetsM50;

double TTWtoQQ_SF = TTWtoQQ_xs * luminosity / totalTTWtoQQ;
double TTWtoLNu_SF = TTWtoLNu_xs * luminosity / totalTTWtoLNu;
double TTZtoLL_SF = TTZtoLL_xs * luminosity / totalTTZtoLL;

double ZGamma_SF = ZGamma_xs * luminosity / totalZGamma;
double WGamma_SF = WGamma_xs * luminosity / totalWGamma;

double ST_tW_SF       = ST_tW_xs * luminosity / totalST_tW;
double ST_tbarW_SF    = ST_tbarW_xs * luminosity / totalST_tbarW;
double ST_tchannel_SF = ST_tchannel_xs * luminosity / totalST_tchannel;
double ST_tbarchannel_SF = ST_tbarchannel_xs * luminosity / totalST_tbarchannel;
double ST_schannel_SF = ST_schannel_xs * luminosity / totalST_schannel;

double QCD_Pt20to30_Mu_SF    = QCD_Pt20to30_Mu_xs    * luminosity / totalQCD_Pt20to30_Mu    ;
double QCD_Pt30to50_Mu_SF    = QCD_Pt30to50_Mu_xs    * luminosity / totalQCD_Pt30to50_Mu    ;
double QCD_Pt50to80_Mu_SF    = QCD_Pt50to80_Mu_xs    * luminosity / totalQCD_Pt50to80_Mu    ;
double QCD_Pt80to120_Mu_SF   = QCD_Pt80to120_Mu_xs   * luminosity / totalQCD_Pt80to120_Mu   ;
double QCD_Pt120to170_Mu_SF  = QCD_Pt120to170_Mu_xs  * luminosity / totalQCD_Pt120to170_Mu  ;
double QCD_Pt170to300_Mu_SF  = QCD_Pt170to300_Mu_xs  * luminosity / totalQCD_Pt170to300_Mu  ;
double QCD_Pt300to470_Mu_SF  = QCD_Pt300to470_Mu_xs  * luminosity / totalQCD_Pt300to470_Mu  ;
double QCD_Pt470to600_Mu_SF  = QCD_Pt470to600_Mu_xs  * luminosity / totalQCD_Pt470to600_Mu  ;
double QCD_Pt600to800_Mu_SF  = QCD_Pt600to800_Mu_xs  * luminosity / totalQCD_Pt600to800_Mu  ;
double QCD_Pt800to1000_Mu_SF = QCD_Pt800to1000_Mu_xs * luminosity / totalQCD_Pt800to1000_Mu ;
double QCD_Pt1000toInf_Mu_SF = QCD_Pt1000toInf_Mu_xs * luminosity / totalQCD_Pt1000toInf_Mu ;
double QCD_Pt20to30_Ele_SF   = QCD_Pt20to30_Ele_xs   * luminosity / totalQCD_Pt20to30_Ele   ;
double QCD_Pt30to50_Ele_SF   = QCD_Pt30to50_Ele_xs   * luminosity / totalQCD_Pt30to50_Ele   ;
double QCD_Pt50to80_Ele_SF   = QCD_Pt50to80_Ele_xs   * luminosity / totalQCD_Pt50to80_Ele   ;
double QCD_Pt80to120_Ele_SF  = QCD_Pt80to120_Ele_xs  * luminosity / totalQCD_Pt80to120_Ele  ;
double QCD_Pt120to170_Ele_SF = QCD_Pt120to170_Ele_xs * luminosity / totalQCD_Pt120to170_Ele ;
double QCD_Pt170to300_Ele_SF = QCD_Pt170to300_Ele_xs * luminosity / totalQCD_Pt170to300_Ele ;
double QCD_Pt300toInf_Ele_SF = QCD_Pt300toInf_Ele_xs * luminosity / totalQCD_Pt300toInf_Ele ;


double getEvtWeight(string sampleType){
	double evtWeight = -1.;
	if( sampleType.substr(0,4)=="Data") {evtWeight = 1.;}
	else if( sampleType=="Test") {evtWeight = 1.;}
	else if( sampleType=="TGJets"){evtWeight = TGJets_SF;} 
        else if( sampleType=="TTGamma_Hadronic") {evtWeight = TTGamma_hadronic_SF;}
	else if( sampleType=="TTGamma_SingleLeptFromTbar") {evtWeight = TTGamma_semilept_Tbar_SF;}
	else if( sampleType=="TTGamma_SingleLeptFromT") {evtWeight = TTGamma_semilept_T_SF;}
	else if( sampleType=="TTGamma_Dilepton") {evtWeight = TTGamma_dilept_SF;}
	else if( sampleType=="TTbarPowheg") {evtWeight = TTbarPowheg_SF;}
	else if( sampleType=="TTbarMCatNLO") {evtWeight = TTbarMCatNLO_SF;}
	else if( sampleType=="TTbarMadgraph_Dilepton") {evtWeight = TTbarMadgraph_Dilepton_SF;}
	else if( sampleType=="TTbarMadgraph_SingleLeptFromT") {evtWeight = TTbarMadgraph_SingleLeptFromT_SF;}
	else if( sampleType=="TTbarMadgraph_SingleLeptFromTbar") {evtWeight = TTbarMadgraph_SingleLeptFromTbar_SF;}
	else if( sampleType=="W1jets") {evtWeight = W1jets_SF;}
	else if( sampleType=="W2jets") {evtWeight = W2jets_SF;}
	else if( sampleType=="W3jets") {evtWeight = W3jets_SF;}
	else if( sampleType=="W4jets") {evtWeight = W4jets_SF;}
	else if( sampleType=="DYjetsM10to50") {evtWeight = DYjetsM10to50_SF;}
	else if( sampleType=="DYjetsM50") {evtWeight = DYjetsM50_SF;}
	else if( sampleType=="TTWtoQQ") {evtWeight = TTWtoLNu_SF;}
	else if( sampleType=="TTWtoLNu") {evtWeight = TTWtoLNu_SF;}
	else if( sampleType=="TTZtoLL") {evtWeight = TTZtoLL_SF;}
	else if( sampleType=="ZGamma") {evtWeight = ZGamma_SF;}
	else if( sampleType=="WGamma") {evtWeight = WGamma_SF;}
	else if( sampleType=="ST_tW-channel") {evtWeight = ST_tW_SF;}
	else if( sampleType=="ST_tbarW-channel") {evtWeight = ST_tbarW_SF;}
	else if( sampleType=="ST_t-channel") {evtWeight = ST_tchannel_SF;}
	else if( sampleType=="ST_tbar-channel") {evtWeight = ST_tbarchannel_SF;}
	else if( sampleType=="ST_s-channel") {evtWeight = ST_schannel_SF;}
	else if( sampleType=="QCD_Pt20to30_Mu") {evtWeight = QCD_Pt20to30_Mu_SF;}
	else if( sampleType=="QCD_Pt30to50_Mu") {evtWeight = QCD_Pt30to50_Mu_SF;}
	else if( sampleType=="QCD_Pt50to80_Mu") {evtWeight = QCD_Pt50to80_Mu_SF;}
	else if( sampleType=="QCD_Pt80to120_Mu") {evtWeight = QCD_Pt80to120_Mu_SF;}
	else if( sampleType=="QCD_Pt120to170_Mu") {evtWeight = QCD_Pt120to170_Mu_SF;}
	else if( sampleType=="QCD_Pt170to300_Mu") {evtWeight = QCD_Pt170to300_Mu_SF;}
	else if( sampleType=="QCD_Pt300to470_Mu") {evtWeight = QCD_Pt300to470_Mu_SF;}
	else if( sampleType=="QCD_Pt470to600_Mu") {evtWeight = QCD_Pt470to600_Mu_SF;}
	else if( sampleType=="QCD_Pt600to800_Mu") {evtWeight = QCD_Pt600to800_Mu_SF;}
	else if( sampleType=="QCD_Pt800to1000_Mu") {evtWeight = QCD_Pt800to1000_Mu_SF;}
	else if( sampleType=="QCD_Pt1000toInf_Mu") {evtWeight = QCD_Pt1000toInf_Mu_SF;}
	else if( sampleType=="QCD_Pt20to30_EM") {evtWeight = QCD_Pt20to30_Ele_SF;}
	else if( sampleType=="QCD_Pt30to50_EM") {evtWeight = QCD_Pt30to50_Ele_SF;}
	else if( sampleType=="QCD_Pt50to80_EM") {evtWeight = QCD_Pt50to80_Ele_SF;}
	else if( sampleType=="QCD_Pt80to120_EM") {evtWeight = QCD_Pt80to120_Ele_SF;}
	else if( sampleType=="QCD_Pt120to170_EM") {evtWeight = QCD_Pt120to170_Ele_SF;}
	else if( sampleType=="QCD_Pt170to300_EM") {evtWeight = QCD_Pt170to300_Ele_SF;}
	else if( sampleType=="QCD_Pt300toInf_EM") {evtWeight = QCD_Pt300toInf_Ele_SF;}
	else {
		cout << "-------------------------------------------------" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "-- Unable to find event weight for this sample --" << endl;
		cout << "-- Sample will be saved with a weight of -1    --" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "-------------------------------------------------" << endl;
	}

	cout << "Using event weight " << evtWeight << endl;

	return evtWeight;
}











const std::string allowedSampleTypes[61] = {"Data",
											"Data_SingleMu_b",
											"Data_SingleMu_c",
											"Data_SingleMu_d",
											"Data_SingleMu_e",
											"Data_SingleMu_f",
											"Data_SingleMu_g",
											"Data_SingleMu_h",
											"Data_SingleEle_b",
											"Data_SingleEle_c",
											"Data_SingleEle_d",
											"Data_SingleEle_e",
											"Data_SingleEle_f",
											"Data_SingleEle_g",
											"Data_SingleEle_h",
											"TTGamma_Hadronic",
											"TTGamma_SingleLeptFromTbar",
											"TTGamma_SingleLeptFromT",
											"TTGamma_Dilepton",
											"TTbarPowheg",
											"TTbarMCatNLO",
											"TTbarMadgraph_SingleLeptFromTbar",
											"TTbarMadgraph_SingleLeptFromT",
											"TTbarMadgraph_Dilepton",
											"Wjets",
											"W1jets",
											"W2jets",
											"W3jets",
											"W4jets",
											"DYjetsM10to50",
											"DYjetsM50",
											"TTWtoQQ",
											"TTWtoLNu",
											"TTZtoLL",
											"ZGamma",
											"WGamma",
											"ST_tW-channel",
											"ST_tbarW-channel",
											"ST_t-channel",
											"ST_tbar-channel",
											"ST_s-channel",
											"QCD_Pt20to30_Mu",
											"QCD_Pt30to50_Mu",
											"QCD_Pt50to80_Mu",
											"QCD_Pt80to120_Mu",
											"QCD_Pt120to170_Mu",
											"QCD_Pt170to300_Mu",
											"QCD_Pt300to470_Mu",
											"QCD_Pt470to600_Mu",
											"QCD_Pt600to800_Mu",
											"QCD_Pt800to1000_Mu",
											"QCD_Pt1000toInf_Mu",
											"QCD_Pt20to30_EM",
											"QCD_Pt30to50_EM",
											"QCD_Pt50to80_EM",
											"QCD_Pt80to120_EM",
											"QCD_Pt120to170_EM",
											"QCD_Pt170to300_EM",
											"QCD_Pt300toInf_EM",
											"TGJets",
											"Test",
                                                                                        };


