
//////////////////////////
// Cross Sections Used  //
//////////////////////////

double TTbar_xs             =  831.76;  //ttbar NNLO (http://inspirehep.net/search?p=find+eprint+1112.5675)

double TTbar_dilepton_xs             =  87.315;
double TTbar_semilept_xs             =  364.352;
double TTbar_hadronic_xs             =  380.095;

double TTGJets_xs               =  3.697; //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#TT_X

double TGJets_xs                =  2.967;

double TTGamma_hadronic_xs  =  4.164*2.565; //10.528;
double TTGamma_semilept_xs  =  5.076*1.994; //10.234;
double TTGamma_dilept_xs    =  1.496*1.616; //2.4243;

double TTGamma_hadronic_Pt100_xs  =  0.3209;
double TTGamma_semilept_Pt100_xs  =  0.2632;
double TTGamma_dilept_Pt100_xs    =  0.0554;

double TTGamma_hadronic_Pt200_xs  =  0.068588;
double TTGamma_semilept_Pt200_xs  =  0.053898;
double TTGamma_dilept_Pt200_xs    =  0.011008;

double TTGamma_noFullyHad_xs    =  TTGamma_semilept_xs + TTGamma_dilept_xs ;

/* double alt_TTGamma_hadronic_xs  = 2.045 ;//2.4315;   //4.599; */
/* double alt_TTGamma_semilept_xs  =  1.544;//3.1201/2.;//4.499/2.; */
/* double alt_TTGamma_dilept_xs    =  1.026;//0.9556;   //0.899; */
/* double alt_TTGamma_noFullyHad_xs    =  0.9556 + 3.1201 ; */

double WjetsInclusive_xs    = 61526.7; //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns#W_jets

double W1jets_xs            =  11524;//9493.0;
double W2jets_xs            =  3788;//3120.0;
double W3jets_xs            =  1166;//942.3;
double W4jets_xs            =  636;//524.2;

double DYjetsM50_xs         =  6077.22; //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns
double DYjetsM10to50_xs     =  18610.; //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns

double DYjetsM10to50_MLM_xs = 18610.0; 
double DYjetsM50_MLM_xs     = 5765.4;
 
double TTWtoQQ_xs               =  0.40620; //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns
double TTWtoLNu_xs              =  0.2043; //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns
double TTZtoLL_xs               =  0.2728;  //????? https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns lists it as 0.2529

double ZGamma_xs            = 131.3; // ?????? https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns lists it as 117.864
double WGamma_xs            = 585.8; // ?????? https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns lists it as 489

double ZGamma_01J_xs    = 50.2   ;
double ZGamma_01J_lowMass_xs    = 105.4   ; //from GenXSecAnalzer of 1M events

//double WGamma_01J_xs    = 203.3  ;  ///?? Old? New one from GenXSecAnalzer is below (change in pt cut?)
double WGamma_01J_xs    = 465.0 ; // LO from GenXSecAnalzer of 1M events

double WW_xs                = 75.8;//118.7;
double WZ_xs                = 27.6;//47.13;
double ZZ_xs                = 12.14;//16.523;  //https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns

double ST_tW_xs             =  35.85 ;
double ST_tbarW_xs          =  35.85 ;
double ST_tchannel_xs       =  136.02 ;
double ST_tbarchannel_xs    =  80.95 ;
double ST_schannel_xs       =  3.68064;


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
double QCD_Pt30to40_Ele_xs   = 9928000.;// what is cros_section ?
double QCD_Pt50to80_Ele_xs   = 2890800.;
double QCD_Pt80to120_Ele_xs  =  350000.;
double QCD_Pt120to170_Ele_xs =   62964.;
double QCD_Pt170to300_Ele_xs =   18810.;
double QCD_Pt300toInf_Ele_xs =    1350.;
double QCD_Pt40toInf_Ele_xs =    1350.; //what is cross_secton?

// GJets cross sections taken from AN2016_471_v6 (SUSY photon + MET analysis)
double GJets_HT40to100_xs  = 20790.;
double GJets_HT100to200_xs = 9238.;
double GJets_HT200to400_xs = 2305.;
double GJets_HT400to600_xs = 274.4;
double GJets_HT600toInf_xs = 93.46;


double getEvtWeight(string sampleType, double luminosity, double nEvents_MC){

	double evtWeight = -1.;

	if( sampleType.substr(0,4)=="Data") {evtWeight = 1.;}
	else if( sampleType=="Test") {evtWeight = 1.;}
	else if( sampleType=="TestAll") {evtWeight = 1.;}

	else if( sampleType=="TGJets"){evtWeight = TGJets_xs * luminosity / nEvents_MC;} 
	else if( sampleType=="TTGJets"){evtWeight = TTGJets_xs * luminosity / nEvents_MC;} 
	else if( sampleType=="TTGamma_Hadronic") {evtWeight = TTGamma_hadronic_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTGamma_SingleLeptFromTbar") {evtWeight = TTGamma_semilept_xs/2. * luminosity / nEvents_MC;}
	else if( sampleType=="TTGamma_SingleLeptFromT") {evtWeight = TTGamma_semilept_xs/2. * luminosity / nEvents_MC;}
	else if( sampleType=="TTGamma_SingleLept") {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTGamma_Dilepton") {evtWeight = TTGamma_dilept_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTGamma_noFullyHad") {evtWeight = TTGamma_noFullyHad_xs * luminosity / nEvents_MC;}
        else if( sampleType=="TTbarPowheg") {evtWeight = TTbar_xs * luminosity / nEvents_MC;}
	/* else if( sampleType=="TTbarPowheg1") {evtWeight = TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="TTbarPowheg2") {evtWeight = TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="TTbarPowheg3") {evtWeight = TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="TTbarPowheg4") {evtWeight = TTbar_xs * luminosity / nEvents_MC;} */
        else if( sampleType=="TTbarPowheg_Dilepton") {evtWeight = TTbar_dilepton_xs * luminosity / nEvents_MC;}
        else if( sampleType=="TTbarPowheg_Semilept") {evtWeight = TTbar_semilept_xs * luminosity / nEvents_MC;}
        else if( sampleType=="TTbarPowheg_Hadronic") {evtWeight = TTbar_hadronic_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTbarMCatNLO") {evtWeight = TTbar_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTbarMadgraph") {evtWeight = TTbar_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTbarMadgraph_Dilepton") {evtWeight = TTbar_dilepton_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTbarMadgraph_SingleLeptFromT") {evtWeight = TTbar_semilept_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTbarMadgraph_SingleLeptFromTbar") {evtWeight = TTbar_semilept_xs * luminosity / nEvents_MC;}
	else if( sampleType=="WjetsInclusive") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;}
	/* else if( sampleType=="WjetsInclusive1") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="WjetsInclusive2") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="WjetsInclusive3") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="WjetsInclusive4") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="WjetsInclusive5") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="WjetsInclusive6") {evtWeight = WjetsInclusive_xs * luminosity / nEvents_MC;} */
	else if( sampleType=="W1jets") {evtWeight = W1jets_xs * luminosity / nEvents_MC;}
	else if( sampleType=="W2jets") {evtWeight = W2jets_xs * luminosity / nEvents_MC;}
	else if( sampleType=="W3jets") {evtWeight = W3jets_xs * luminosity / nEvents_MC;}
	else if( sampleType=="W4jets") {evtWeight = W4jets_xs * luminosity / nEvents_MC;}
	else if( sampleType=="DYjetsM10to50") {evtWeight = DYjetsM10to50_xs * luminosity / nEvents_MC;}
	else if( sampleType=="DYjetsM50") {evtWeight = DYjetsM50_xs * luminosity / nEvents_MC;}
	else if( sampleType=="DYjetsM10to50_MLM") {evtWeight = DYjetsM10to50_MLM_xs * luminosity / nEvents_MC;}
        else if( sampleType=="DYjetsM50_MLM") {evtWeight = DYjetsM50_MLM_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTWtoQQ") {evtWeight = TTWtoLNu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTWtoLNu") {evtWeight = TTWtoLNu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="TTZtoLL") {evtWeight = TTZtoLL_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ZGamma") {evtWeight = ZGamma_xs * luminosity / nEvents_MC;}
	else if( sampleType=="WGamma") {evtWeight = WGamma_xs * luminosity / nEvents_MC;}
	else if (sampleType=="ZGamma_01J_5f") {evtWeight = ZGamma_01J_xs * luminosity / nEvents_MC;}
	else if (sampleType=="ZGamma_01J_5f_lowMass") {evtWeight = ZGamma_01J_lowMass_xs * luminosity / nEvents_MC;}
	else if (sampleType=="WGamma_01J_5f") {evtWeight = WGamma_01J_xs * luminosity / nEvents_MC;}
	else if( sampleType=="WW") {evtWeight = WW_xs * luminosity / nEvents_MC;}
	else if( sampleType=="WZ") {evtWeight = WZ_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ZZ") {evtWeight = ZZ_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ST_tW_channel") {evtWeight = ST_tW_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ST_tbarW_channel") {evtWeight = ST_tbarW_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ST_t_channel") {evtWeight = ST_tchannel_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ST_tbar_channel") {evtWeight = ST_tbarchannel_xs * luminosity / nEvents_MC;}
	else if( sampleType=="ST_s_channel") {evtWeight = ST_schannel_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt20to30_Mu") {evtWeight = QCD_Pt20to30_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt30to50_Mu") {evtWeight = QCD_Pt30to50_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt50to80_Mu") {evtWeight = QCD_Pt50to80_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt80to120_Mu") {evtWeight = QCD_Pt80to120_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt120to170_Mu") {evtWeight = QCD_Pt120to170_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt170to300_Mu") {evtWeight = QCD_Pt170to300_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt300to470_Mu") {evtWeight = QCD_Pt300to470_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt470to600_Mu") {evtWeight = QCD_Pt470to600_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt600to800_Mu") {evtWeight = QCD_Pt600to800_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt800to1000_Mu") {evtWeight = QCD_Pt800to1000_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt1000toInf_Mu") {evtWeight = QCD_Pt1000toInf_Mu_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt20to30_Ele") {evtWeight = QCD_Pt20to30_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt30to50_Ele") {evtWeight = QCD_Pt30to50_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt30to40_Ele") {evtWeight = QCD_Pt30to40_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt50to80_Ele") {evtWeight = QCD_Pt50to80_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt80to120_Ele") {evtWeight = QCD_Pt80to120_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt120to170_Ele") {evtWeight = QCD_Pt120to170_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt170to300_Ele") {evtWeight = QCD_Pt170to300_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt300toInf_Ele") {evtWeight = QCD_Pt300toInf_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="QCD_Pt40toInf_Ele") {evtWeight = QCD_Pt40toInf_Ele_xs * luminosity / nEvents_MC;}
	else if( sampleType=="GJets_HT40To100")  {evtWeight = GJets_HT40to100_xs * luminosity / nEvents_MC;}
	else if( sampleType=="GJets_HT100To200") {evtWeight = GJets_HT100to200_xs * luminosity / nEvents_MC;}
	else if( sampleType=="GJets_HT200To400") {evtWeight = GJets_HT200to400_xs * luminosity / nEvents_MC;}
	else if( sampleType=="GJets_HT400To600") {evtWeight = GJets_HT400to600_xs * luminosity / nEvents_MC;}
	else if( sampleType=="GJets_HT600ToInf") {evtWeight = GJets_HT600toInf_xs * luminosity / nEvents_MC;}

	/* else if( sampleType=="fsr_down_TTGamma_Dilepton") {evtWeight = TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_up_TTGamma_Dilepton")   {evtWeight = TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_down_TTGamma_Dilepton") {evtWeight = TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_up_TTGamma_Dilepton")   {evtWeight = TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_down_TTGamma_SingleLeptFromT")    {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_up_TTGamma_SingleLeptFromT")      {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_down_TTGamma_SingleLeptFromT")    {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_up_TTGamma_SingleLeptFromT")      {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_down_TTGamma_SingleLeptFromTbar") {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_up_TTGamma_SingleLeptFromTbar")   {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_down_TTGamma_SingleLeptFromTbar") {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_up_TTGamma_SingleLeptFromTbar")   {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_up_TTbarPowheg")                  {evtWeight=TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="fsr_down_TTbarPowheg")                {evtWeight=TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_up_TTbarPowheg")                  {evtWeight=TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="isr_down_TTbarPowheg")                {evtWeight=TTbar_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="Gencut_TTGamma_Hadronic") {evtWeight = TTGamma_hadronic_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="Gencut_TTGamma_Semilept_Tbar") {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="Gencut_TTGamma_Semilept_T") {evtWeight = TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="Gencut_TTGamma_Dilept") {evtWeight = TTGamma_dilept_xs * luminosity / nEvents_MC;} */

	/* else if( sampleType=="alt_TTGamma_Hadronic")           {evtWeight = alt_TTGamma_hadronic_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_TTGamma_SingleLeptFromTbar") {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_TTGamma_SingleLeptFromT")    {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_TTGamma_Dilepton")           {evtWeight = alt_TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_TTGamma_noFullyHad")        {evtWeight = alt_TTGamma_noFullyHad_xs * luminosity / nEvents_MC;} */

	/* else if( sampleType=="alt_fsr_down_TTGamma_Dilepton") {evtWeight = alt_TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_fsr_up_TTGamma_Dilepton")   {evtWeight = alt_TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_isr_down_TTGamma_Dilepton") {evtWeight = alt_TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_isr_up_TTGamma_Dilepton")   {evtWeight = alt_TTGamma_dilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_fsr_down_TTGamma_SingleLeptFromT")    {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_fsr_up_TTGamma_SingleLeptFromT")      {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_isr_down_TTGamma_SingleLeptFromT")    {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_isr_up_TTGamma_SingleLeptFromT")      {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_fsr_down_TTGamma_SingleLeptFromTbar") {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_fsr_up_TTGamma_SingleLeptFromTbar")   {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_isr_down_TTGamma_SingleLeptFromTbar") {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */
	/* else if( sampleType=="alt_isr_up_TTGamma_SingleLeptFromTbar")   {evtWeight = alt_TTGamma_semilept_xs * luminosity / nEvents_MC;} */

	else {
		cout << "-------------------------------------------------" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "-- Unable to find event weight for this sample --" << endl;
		cout << "-- Sample will be saved with a weight of -1    --" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "-------------------------------------------------" << endl;
	}

	cout << "Using event weight " << evtWeight << endl;
	cout << "XS = " << evtWeight/luminosity*nEvents_MC << endl;
	cout << "lumi = " << luminosity << endl;
	cout << "nEvents_MC = " << nEvents_MC << endl;

	return evtWeight;
}











const std::string allowedSampleTypes[150] = {"Data",
					     "Data_SingleMu_a",
					     "Data_SingleMu_b",
					     "Data_SingleMu_c",
					     "Data_SingleMu_d",
					     "Data_SingleMu_e",
					     "Data_SingleMu_f",
					     "Data_SingleMu_g",
					     "Data_SingleMu_h",
					     "Data_SingleEle_a",
					     "Data_SingleEle_b",
					     "Data_SingleEle_c",
					     "Data_SingleEle_d",
					     "Data_SingleEle_e",
					     "Data_SingleEle_f",
					     "Data_SingleEle_g",
					     "Data_SingleEle_h",
					     "TTGamma_Hadronic",
					     "TTGamma_Hadronic_Pt100",
					     "TTGamma_Hadronic_Pt200",
					     "TTGamma_SingleLeptFromTbar",
					     "TTGamma_SingleLeptFromT",
					     "TTGamma_SingleLept",
					     "TTGamma_SingleLept_Pt100",
					     "TTGamma_SingleLept_Pt200",
					     "TTGamma_Dilepton",
					     "TTGamma_Dilepton_Pt100",
					     "TTGamma_Dilepton_Pt200",
					     "TTGamma_noFullyHad",

					     "TTbarPowheg",
					     "TTbarPowheg_Semilept",
					     "TTbarPowheg_Dilepton",
					     "TTbarPowheg_Hadronic",
					     "TTbarMCatNLO",
					     "TTbarMadgraph",
					     "TTbarMadgraph_SingleLeptFromTbar",
					     "TTbarMadgraph_SingleLeptFromT",
					     "TTbarMadgraph_Dilepton",
					     "WjetsInclusive",
					     "WjetsInclusive1",
					     "WjetsInclusive2",
					     "WjetsInclusive3",
					     "WjetsInclusive4",
					     "WjetsInclusive5",
					     "WjetsInclusive6",
					     "W1jets",
					     "W2jets",
					     "W3jets",
					     "W4jets",
					     "DYjetsM10to50",
					     "DYjetsM50",
					     "DYjetsM10to50_MLM",
					     "DYjetsM50_MLM",
					     "TTWtoQQ",
					     "TTWtoLNu",
					     "TTZtoLL",
					     //					     "ZGamma",
					     //					     "WGamma",
					     "ZGamma_01J_5f",
					     "ZGamma_01J_5f_lowMass",
					     "WGamma_01J_5f",
					     "WW",
					     "WZ",
					     "ZZ",
					     "ST_tW_channel",
					     "ST_tbarW_channel",
					     "ST_t_channel",
					     "ST_tbar_channel",
					     "ST_s_channel",
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
					     "QCD_Pt20to30_Ele",
					     "QCD_Pt30to50_Ele",
					     "QCD_Pt50to80_Ele",
					     "QCD_Pt80to120_Ele",
					     "QCD_Pt120to170_Ele",
					     "QCD_Pt170to300_Ele",
					     "QCD_Pt300toInf_Ele",
					     "QCD_Pt30to40_Ele",
					     "QCD_Pt40toInf_Ele",
					     "GJets_HT40To100",
					     "GJets_HT100To200",
					     "GJets_HT200To400",
					     "GJets_HT400To600",
					     "GJets_HT600ToInf",
					     "TGJets",
					     "TTGJets",
					     /* "isr_up_TTGamma_SingleLeptFromTbar", */
					     /* "isr_up_TTGamma_SingleLeptFromT", */
					     /* "isr_up_TTGamma_Dilepton", */
					     /* "isr_down_TTGamma_SingleLeptFromTbar", */
					     /* "isr_down_TTGamma_SingleLeptFromT", */
					     /* "isr_down_TTGamma_Dilepton", */
					     /* "fsr_up_TTGamma_SingleLeptFromTbar", */
					     /* "fsr_up_TTGamma_SingleLeptFromT", */
					     /* "fsr_up_TTGamma_Dilepton", */
					     /* "fsr_down_TTGamma_SingleLeptFromTbar", */
					     /* "fsr_down_TTGamma_SingleLeptFromT", */
					     /* "fsr_down_TTGamma_Dilepton", */
					     /* "isr_up_TTbarPowheg", */
					     /* "isr_down_TTbarPowheg", */
					     /* "fsr_up_TTbarPowheg", */
					     /* "fsr_down_TTbarPowheg", */
					     "TestAll",
					     "Test",
					     /* "Gencut_TTGamma_Semilept_T", */
					     /* "Gencut_TTGamma_Semilept_Tbar", */
					     /* "Gencut_TTGamma_Dilept", */
					     /* "Gencut_TTGamma_Hadronic", */
};


