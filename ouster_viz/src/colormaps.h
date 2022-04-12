#pragma once

#include <cstddef>

namespace ouster {
namespace viz {

inline float** genPalette(const int n, const float from[3], const float to[3]) {
    float** palette = new float*[n];
    for (int i = 0; i < n; i++) {
        palette[i] = new float[3];
        for (int j = 0; j < 3; j++) {
            palette[i][j] = (to[j] * i + from[j] * (n - 1 - i)) / (n - 1);
        }
    }
    return palette;
}

// generated from:
// https://daniel.lawrence.lu/public/colortransform/#0_2423_964_352_6_2624_1000_513_11_3248_1000_617_15_415_1000_774
const size_t spezia_n = 256;
const float spezia_palette[spezia_n][3] = {
    {0.04890922165917825, 0.34265700288230266, 0.5139042200196196},
    {0.04895672077739804, 0.34399228711079705, 0.5173325088859984},
    {0.04899969158023907, 0.34532432182766976, 0.5207851330769154},
    {0.049038068929181285, 0.34665300013643424, 0.5242624999557384},
    {0.0490717860366443, 0.3479782119131098, 0.5277650273921529},
    {0.04910077440233592, 0.34929984367863964, 0.5312931441090918},
    {0.04912496374647964, 0.35061777846523556, 0.5348472900437968},
    {0.049144281939685876, 0.35193189567631167, 0.5384279167237124},
    {0.04915865492929047, 0.3532420709396423, 0.5420354876579142},
    {0.04916800666192803, 0.3545481759533582, 0.5456704787448663},
    {0.04917225900211732, 0.3558500783243678, 0.5493333786972924},
    {0.04917133164659893, 0.35714764139876426, 0.553024689485032},
    {0.0491651420341628, 0.35844072408375016, 0.5567449267967906},
    {0.049153605250673076, 0.35972918066057785, 0.5604946205217287},
    {0.04913663392897654, 0.36101286058797066, 0.5642743152519267},
    {0.04911413814335756, 0.36229160829545354, 0.5680845708067875},
    {0.04908602529819959, 0.36356526296598163, 0.5719259627805287},
    {0.04905220001042406, 0.36483365830721187, 0.5757990831139734},
    {0.04901256398533129, 0.36609662231071893, 0.5797045406919258},
    {0.04896701588534969, 0.36735397699840217, 0.5836429619674972},
    {0.04891545119124254, 0.36860553815528246, 0.5876149916148347},
    {0.04885776205520153, 0.36985111504782353, 0.5916212932117864},
    {0.048793837145294165, 0.371090510126853, 0.5956625499541581},
    {0.048723561480604215, 0.37232351871408936, 0.5997394654032839},
    {0.04864681625641982, 0.37354992867120285, 0.6038527642687842},
    {0.0485634786587359, 0.37476952005026626, 0.6080031932284756},
    {0.04847342166723854, 0.3759820647243526, 0.6121915217875443},
    {0.04837651384597603, 0.37718732599695254, 0.6164185431792271},
    {0.04827261912068898, 0.3783850581887729, 0.6206850753093874},
    {0.04816159654185025, 0.37957500620037093, 0.6249919617475522},
    {0.04804330003224206, 0.38075690504895116, 0.6293400727671268},
    {0.047917578117875524, 0.3819304793775204, 0.633730306437712},
    {0.04778427364089425, 0.38309544293445374, 0.6381635897726399},
    {0.04764322345301101, 0.38425149802135766, 0.6426408799350484},
    {0.04749425808786458, 0.385398334906948, 0.6471631655060938},
    {0.04733720141054259, 0.3865356312044689, 0.6517314678190856},
    {0.04717187024231324, 0.3876630512099673, 0.6563468423636755},
    {0.046998073958454976, 0.38878024519851034, 0.6610103802644818},
    {0.046815614056824016, 0.3898868486751851, 0.6657232098388559},
    {0.04662428369457814, 0.3909824815774357, 0.6704864982388766},
    {0.04642386719018477, 0.39206674742499825, 0.6753014531830023},
    {0.04621413948754389, 0.39313923241335524, 0.6801693247832367},
    {0.045994865578738504, 0.3941995044462622, 0.6850914074741193},
    {0.04576579988147745, 0.39524711210249736, 0.6900690420503143},
    {0.04552668556693947, 0.3962815835315315, 0.6951036178201221},
    {0.04527725383318241, 0.39730242527232407, 0.7001965748827989},
    {0.04501722311872807, 0.39830912098889804, 0.7053494065382041},
    {0.04474629825033485, 0.39930113011574186, 0.7105636618379779},
    {0.044464169518219306, 0.4002778864054065, 0.7158409482881979},
    {0.044170511671191286, 0.4012387963699213, 0.7211829347142875},
    {0.04386498282321687, 0.4021832376068135, 0.7265913542998228},
    {0.04354722326188234, 0.4031105569995846, 0.7320680078119023},
    {0.04321685414797862, 0.40402006878146585, 0.7376147670267773},
    {0.0428734760940282, 0.40491105245010933, 0.743233578370643},
    {0.042516667607970175, 0.40578275051957646, 0.748926466791789},
    {0.04214598338630927, 0.4066343660945334, 0.7546955398817109},
    {0.04176095243886018, 0.40746506024993384, 0.7605429922643745},
    {0.04136107602475044, 0.40827394919762916, 0.766471110274553},
    {0.04094582537627162, 0.4090601012192915, 0.7724822769480404},
    {0.04051463918382638, 0.40982253334270374, 0.7785789773486957},
    {0.040061502782456945, 0.4105602077358398, 0.7847638042595603},
    {0.03959294089889664, 0.41127202779018696, 0.7910394642679004},
    {0.039109793546916495, 0.4119568338613871, 0.7974087842769024},
    {0.03861172210191932, 0.41261339863144436, 0.803874718479878},
    {0.0380983735795864, 0.4132404220523802, 0.8104403558364525},
    {0.03756937968562651, 0.4138365258262561, 0.8171089280940507},
    {0.03702435578736771, 0.4144002473707861, 0.8238838184024792},
    {0.0364628997996382, 0.4149300332132621, 0.8307685705742502},
    {0.03588459097638143, 0.4154242317480496, 0.8377668990487521},
    {0.035288988598694025, 0.4158810852842974, 0.844882699624589},
    {0.03467563054866628, 0.4162987213006144, 0.8521200610312002},
    {0.03404403175731731, 0.41667514281199364, 0.8594832774186676},
    {0.033393682513460185, 0.41700821774098445, 0.8669768618532854},
    {0.03272404661867004, 0.41729566716967786, 0.8746055609162682},
    {0.032034559371859575, 0.4175350523310705, 0.8823743705140761},
    {0.03132462536474723, 0.41772376017735885, 0.8902885530212784},
    {0.03059361606719027, 0.417858987338036, 0.8983536558911435},
    {0.029840867178669222, 0.41793772225168413, 0.9065755318852089},
    {0.02906567571902483, 0.4179567252211435, 0.9149603610913213},
    {0.028267296828018075, 0.41791250610119823, 0.9235146749206897},
    {0.027444940239127507, 0.41780129927982523, 0.9322453822980893},
    {0.026597766388240202, 0.4176190355565933, 0.9411597982868389},
    {0.02572488211232861, 0.41736131045306674, 0.9502656754213602},
    {0.02482533588680886, 0.41702334840740857, 0.9595712380560552},
    {0.023898112542860842, 0.416599962205498, 0.9690852200808441},
    {0.02294212739712791, 0.41608550687982504, 0.9788169064013666},
    {0.02195621971619119, 0.4154738271597193, 0.9887761786374855},
    {0.03533572637548167, 0.4150344767837667, 0.9966419438918287},
    {0.08206748636661013, 0.4154760610454022, 0.996875442497312},
    {0.1131664468320158, 0.4159292422424467, 0.9971067037505105},
    {0.1377759789309851, 0.4163940123475041, 0.9973357493609963},
    {0.1586260932452447, 0.4168703621191211, 0.9975626007042689},
    {0.17695881259992585, 0.41735828111703227, 0.997787278826484},
    {0.19346029551091778, 0.4178577577177723, 0.9980098044491156},
    {0.2085556849234767, 0.4183687791306285, 0.9982301979735458},
    {0.22252938052310162, 0.41889133141394447, 0.9984484794855942},
    {0.2355824089832244, 0.4194253994917421, 0.9986646687599702},
    {0.24786290560296725, 0.4199709671706614, 0.9988787852646682},
    {0.25948364869956886, 0.42052801715720073, 0.9990908481652964},
    {0.2705327829044692, 0.42109653107524325, 0.9993008763293371},
    {0.2810807045979947, 0.4216764894838623, 0.9995088883303488},
    {0.2911846624744039, 0.4222678718953844, 0.9997149024521047},
    {0.30089193496804306, 0.4228706567937021, 0.9999189366926701},
    {0.3199598560384707, 0.4211529467871777, 1.0000000000000044},
    {0.3436114893370144, 0.4178742172053897, 1.0000000000000047},
    {0.36539676089694495, 0.41458308629177515, 1.0000000000000044},
    {0.3856661632570949, 0.41127775518053283, 1.0000000000000042},
    {0.404675301565696, 0.407956362084171, 1.0000000000000044},
    {0.4226172861700883, 0.4046169767859018, 1.0000000000000047},
    {0.43964219386021874, 0.40125759469274436, 1.0000000000000047},
    {0.45586938841351193, 0.3978761303980185, 1.0000000000000047},
    {0.47139565849043324, 0.39447041069519134, 1.0000000000000047},
    {0.4863007849418988, 0.3910381669772773, 1.0000000000000047},
    {0.5006514638539757, 0.3875770269469873, 1.0000000000000044},
    {0.5145041416968924, 0.3840845055522841, 1.0000000000000047},
    {0.5279071095300848, 0.3805579950497078, 1.0000000000000047},
    {0.5409020797263486, 0.3769947540834305, 1.0000000000000044},
    {0.5535253932438766, 0.3733918956509583, 1.0000000000000044},
    {0.5658089579546876, 0.3697463738064324, 1.0000000000000042},
    {0.577780987780821, 0.366054968928604, 1.0000000000000049},
    {0.589466591997403, 0.3623142713523205, 1.0000000000000047},
    {0.6008882502481963, 0.35852066312849035, 1.0000000000000044},
    {0.6120661992793963, 0.3546702976368881, 1.0000000000000047},
    {0.6230187506929341, 0.35075907672718176, 1.0000000000000047},
    {0.6337625542333337, 0.34678262500419443, 1.0000000000000047},
    {0.6443128176539651, 0.3427362608011279, 1.0000000000000044},
    {0.6546834916623888, 0.33861496329592544, 1.0000000000000047},
    {0.664887426552217, 0.3344133351169368, 1.0000000000000044},
    {0.6749365057066918, 0.3301255596489445, 1.0000000000000047},
    {0.6848417600790246, 0.32574535208217403, 1.0000000000000047},
    {0.6946134669261637, 0.32126590303548275, 1.0000000000000049},
    {0.7042612354316643, 0.31667981331755896, 1.0000000000000047},
    {0.7137940813531695, 0.3119790180493533, 1.0000000000000049},
    {0.7232204924365964, 0.3071546979334297, 1.0000000000000049},
    {0.7325484860275505, 0.30219717488892517, 1.0000000000000047},
    {0.7417856600618409, 0.2970957885292609, 1.000000000000005},
    {0.7509392384175178, 0.2918387489798506, 1.0000000000000047},
    {0.760016111449703, 0.28641296022435003, 1.0000000000000047},
    {0.7690228723986646, 0.2808038063993306, 1.0000000000000049},
    {0.7779658502549104, 0.27499489103633235, 1.0000000000000049},
    {0.7868511395774846, 0.2689677158905533, 1.0000000000000047},
    {0.7956846276897148, 0.26270128126132847, 1.0000000000000047},
    {0.804472019617065, 0.2561715829275765, 1.0000000000000047},
    {0.8132188610824966, 0.2493509709254887, 1.0000000000000047},
    {0.8219305598337341, 0.24220732066040862, 1.0000000000000049},
    {0.8306124055427538, 0.23470294440057987, 1.0000000000000049},
    {0.8392695884894237, 0.2267931361345682, 1.0000000000000047},
    {0.847907217217596, 0.21842418639150069, 1.0000000000000047},
    {0.8565303353323375, 0.20953060994411976, 1.0000000000000049},
    {0.8651439375907393, 0.20003116767718654, 1.0000000000000049},
    {0.8737529854254381, 0.18982297245453064, 1.0000000000000049},
    {0.8823624220291222, 0.17877241522237444, 1.0000000000000047},
    {0.8909771871196978, 0.1667005280966983, 1.0000000000000047},
    {0.8996022314990386, 0.15335795616479617, 1.000000000000005},
    {0.9082425315133318, 0.13837882372526109, 1.0000000000000049},
    {0.9169031035195819, 0.12118667725012405, 1.0000000000000049},
    {0.9255890184609986, 0.10077304980525353, 1.0000000000000047},
    {0.9343054166534386, 0.07504334998300113, 1.0000000000000049},
    {0.9430575228859241, 0.03781952178921804, 1.000000000000005},
    {0.9509350420238839, 1.4218570765223148e-13, 0.9989984483716071},
    {0.9554497353124459, 1.4191675612451605e-13, 0.9943640499109371},
    {0.9599176427714787, 1.4433731987395504e-13, 0.9897799632511853},
    {0.9643412154073002, 1.4245465917994694e-13, 0.9852425190239346},
    {0.9687227616942858, 1.4191675612451605e-13, 0.9807481714229297},
    {0.9730644583865243, 1.411995520506082e-13, 0.9762934885028384},
    {0.9773683603724937, 1.3931689135660008e-13, 0.9718751430792824},
    {0.9816364096714153, 1.3886863881040766e-13, 0.9674899041721569},
    {0.9858704436584534, 1.4039269746746187e-13, 0.9631346289394122},
    {0.9900722025959202, 1.4397871783700112e-13, 0.9588062550529955},
    {0.9942433365389557, 1.4155815408756212e-13, 0.954501793472642},
    {0.9983854116765075, 1.3752388117183045e-13, 0.9502183215767478},
    {0.9999999999999819, 0.02804423714351181, 0.9437140548413381},
    {0.9999999999999823, 0.0675265531658979, 0.9359017685954015},
    {0.9999999999999826, 0.09447578037166751, 0.9282451825736049},
    {0.9999999999999823, 0.11567880450339993, 0.920737795368809},
    {0.9999999999999826, 0.13352190503381375, 0.9133734552831144},
    {0.9999999999999823, 0.1491028314594674, 0.906146335428585},
    {0.9999999999999826, 0.16303259275115084, 0.8990509109121838},
    {0.9999999999999826, 0.17569199214531872, 0.8920819378992011},
    {0.9999999999999826, 0.18733702217610845, 0.8852344343724449},
    {0.9999999999999826, 0.19814940356609517, 0.8785036624245576},
    {0.9999999999999823, 0.20826355122506324, 0.8718851119384158},
    {0.9999999999999823, 0.21778214249596284, 0.8653744855260821},
    {0.9999999999999826, 0.22678566871532468, 0.8589676846103573},
    {0.9999999999999823, 0.2353385863611125, 0.8526607965450058},
    {0.9999999999999828, 0.24349343831907827, 0.8464500826803465},
    {0.9999999999999826, 0.2512937077092952, 0.840331967290248},
    {0.9999999999999826, 0.2587758499993201, 0.8343030272849384},
    {0.999999999999983, 0.26739099502162367, 0.8275538904243963},
    {0.999999999999983, 0.2793555475103376, 0.8187524096848618},
    {0.9999999999999828, 0.29067538241472596, 0.810154074771914},
    {0.999999999999983, 0.3014349177286362, 0.8017491111724352},
    {0.9999999999999826, 0.31170258039783083, 0.7935283442712853},
    {0.9999999999999826, 0.3215347049761315, 0.7854831467895685},
    {0.9999999999999826, 0.3309782925632311, 0.7776053911816436},
    {0.9999999999999826, 0.3400730122474594, 0.7698874064041857},
    {0.9999999999999826, 0.34885268450644075, 0.7623219385454285},
    {0.999999999999983, 0.35734640143399626, 0.7549021148665397},
    {0.9999999999999826, 0.3655793867737775, 0.7476214108616114},
    {0.9999999999999826, 0.3735736659274856, 0.7404736199894286},
    {0.9999999999999828, 0.381348594792351, 0.7334528257702123},
    {0.9999999999999826, 0.38892128210540905, 0.7265533759748873},
    {0.9999999999999823, 0.3963069303390571, 0.7197698586639263},
    {0.9999999999999823, 0.4035191135203492, 0.7130970798581467},
    {0.9999999999999823, 0.410570005644612, 0.7065300426455539},
    {0.9999999999999821, 0.4174705699878856, 0.700063927546916},
    {0.9999999999999819, 0.4242307171780247, 0.6936940739785828},
    {0.9999999999999821, 0.4308594380852102, 0.6874159626644994},
    {0.9999999999999821, 0.4373649162525338, 0.6812251988606219},
    {0.9999999999999819, 0.44375462357781925, 0.6751174962642902},
    {0.9999999999999819, 0.4500354021895003, 0.6690886614886871},
    {0.9999999999999821, 0.45621353486890187, 0.6631345789884755},
    {0.9999999999999817, 0.4622948059133914, 0.657251196327135},
    {0.9999999999999817, 0.4682845539768576, 0.6514345096795133},
    {0.9999999999999817, 0.474187718141824, 0.645680549464667},
    {0.9999999999999817, 0.4800088782535285, 0.6399853660042518},
    {0.9999999999999815, 0.4857522903672667, 0.6343450151004509},
    {0.9999999999999815, 0.4914219180162633, 0.6287555434246979},
    {0.9999999999999815, 0.497021459890778, 0.6232129736041581},
    {0.9999999999999815, 0.5025543744242497, 0.6177132888869281},
    {0.9999999999999815, 0.5080239017046412, 0.6122524172590773},
    {0.999999999999981, 0.5134330830652836, 0.606826214876734},
    {0.9999999999999808, 0.518784778656747, 0.6014304486641499},
    {0.9999999999999808, 0.5240816832574693, 0.5960607779137368},
    {0.9999999999999806, 0.5293263405443853, 0.5907127347060119},
    {0.9999999999999806, 0.5345211560142691, 0.5853817029456958},
    {0.9999999999999808, 0.5396684087209026, 0.580062895784249},
    {0.9999999999999808, 0.5447702619716198, 0.5747513311680923},
    {0.9999999999999806, 0.5498287731085955, 0.5694418052146554},
    {0.9999999999999803, 0.5548459024848833, 0.5641288630740176},
    {0.9999999999999801, 0.5598235217321937, 0.5588067668806895},
    {0.9999999999999799, 0.5647634214064047, 0.5534694603362047},
    {0.9999999999999799, 0.569667318087479, 0.5481105293861371},
    {0.9999999999999801, 0.5745368610026079, 0.5427231583620321},
    {0.9999999999999797, 0.5793736382348097, 0.5373000808456486},
    {0.9999999999999797, 0.5841791825736894, 0.5318335243749407},
    {0.9999999999999797, 0.58895497706055, 0.5263151479421893},
    {0.9999999999999795, 0.5937024602763533, 0.5207359710263567},
    {0.9999999999999795, 0.5984230314181602, 0.5150862926436902},
    {0.9999999999999792, 0.6031180552074987, 0.5093555985787912},
    {0.9999999999999792, 0.607788866672662, 0.5035324545546109},
    {0.999999999999979, 0.6124367758461117, 0.4976043825895365},
    {0.999999999999979, 0.6170630724180334, 0.4915577171399405},
    {0.9999999999999788, 0.6216690303876014, 0.48537743679248463},
    {0.9999999999999788, 0.6262559127547657, 0.4790469661903673},
    {0.9999999999999784, 0.6308249762973255, 0.4725479414659382},
    {0.9999999999999786, 0.6353774764808859, 0.46585993058805514},
    {0.9999999999999784, 0.6399146725529954, 0.45896009754439654},
    {0.9999999999999784, 0.644437832877538, 0.45182279591800384},
    {0.9999999999999781, 0.6489482405714118, 0.4444190728188997},
    {0.9999999999999779, 0.6534471995128909, 0.4367160577509657},
    {0.9999999999999779, 0.6579360408000906, 0.4286762020035964},
    {0.9999999999999779, 0.6624161297489367, 0.42025632127341656},
    {0.9999999999999777, 0.6668888735333959, 0.41140637540952824},
    {0.9999999999999777, 0.6713557295869282, 0.40206789113388525},
    {0.9999999999999775, 0.6758182149038043, 0.3921718908087272}};

const size_t calref_n = 256;
const float calref_palette[calref_n][3] = {
    {0.1, 0.1, 0.1},
    {0.36862745098039246, 0.30980392156862746, 0.6352941176470588},
    {0.3618608227604765, 0.31856978085351784, 0.6394463667820068},
    {0.3550941945405613, 0.3273356401384083, 0.643598615916955},
    {0.3483275663206459, 0.3361014994232987, 0.647750865051903},
    {0.3415609381007305, 0.3448673587081891, 0.6519031141868512},
    {0.33479430988081516, 0.35363321799307956, 0.6560553633217993},
    {0.3280276816608997, 0.36239907727796994, 0.6602076124567474},
    {0.3212610534409842, 0.3711649365628603, 0.6643598615916955},
    {0.31449442522106885, 0.3799307958477509, 0.6685121107266436},
    {0.3077277970011534, 0.38869665513264134, 0.6726643598615917},
    {0.300961168781238, 0.3974625144175317, 0.6768166089965398},
    {0.29419454056132255, 0.4062283737024219, 0.6809688581314879},
    {0.2874279123414072, 0.4149942329873126, 0.685121107266436},
    {0.2806612841214917, 0.4237600922722031, 0.6892733564013841},
    {0.27389465590157624, 0.4325259515570933, 0.6934256055363321},
    {0.2671280276816609, 0.4412918108419839, 0.6975778546712803},
    {0.2603613994617455, 0.45005767012687425, 0.7017301038062282},
    {0.25359477124183005, 0.4588235294117643, 0.7058823529411765},
    {0.24682814302191458, 0.46758938869665506, 0.7100346020761246},
    {0.24006151480199922, 0.4763552479815456, 0.7141868512110727},
    {0.23329488658208386, 0.485121107266436, 0.7183391003460207},
    {0.2265282583621684, 0.49388696655132636, 0.7224913494809689},
    {0.21976163014225292, 0.5026528258362168, 0.726643598615917},
    {0.21299500192233756, 0.5114186851211073, 0.7307958477508651},
    {0.20622837370242209, 0.5201845444059976, 0.7349480968858132},
    {0.19946174548250672, 0.5289504036908883, 0.7391003460207612},
    {0.20007689350249913, 0.5377931564782777, 0.7393310265282583},
    {0.2080738177623992, 0.5467128027681663, 0.7356401384083046},
    {0.21607074202229903, 0.5556324490580544, 0.7319492502883508},
    {0.2240676662821992, 0.5645520953479432, 0.7282583621683968},
    {0.23206459054209927, 0.5734717416378313, 0.7245674740484429},
    {0.24006151480199933, 0.58239138792772, 0.720876585928489},
    {0.2480584390618994, 0.5913110342176088, 0.7171856978085351},
    {0.25605536332179935, 0.6002306805074966, 0.7134948096885814},
    {0.2640522875816994, 0.6091503267973857, 0.7098039215686275},
    {0.27204921184159947, 0.6180699730872741, 0.7061130334486736},
    {0.28004613610149953, 0.6269896193771626, 0.7024221453287197},
    {0.2880430603613995, 0.6359092656670511, 0.6987312572087658},
    {0.29603998462129966, 0.6448289119569397, 0.695040369088812},
    {0.3040369088811996, 0.6537485582468282, 0.6913494809688581},
    {0.3120338331410998, 0.6626682045367166, 0.6876585928489042},
    {0.32003075740099973, 0.671587850826605, 0.6839677047289503},
    {0.3280276816608998, 0.6805074971164937, 0.6802768166089965},
    {0.33602460592079986, 0.6894271434063821, 0.6765859284890426},
    {0.3440215301806999, 0.6983467896962707, 0.6728950403690888},
    {0.35201845444059976, 0.7072664359861591, 0.6692041522491351},
    {0.36001537870050004, 0.7161860822760477, 0.6655132641291811},
    {0.3680123029604, 0.7251057285659362, 0.6618223760092272},
    {0.37600922722029995, 0.7340253748558248, 0.6581314878892734},
    {0.3840061514802, 0.7429450211457131, 0.6544405997693193},
    {0.39200307574010007, 0.7518646674356018, 0.6507497116493657},
    {0.40000000000000036, 0.7607843137254902, 0.6470588235294117},
    {0.4106113033448675, 0.7649365628604383, 0.6469050365244137},
    {0.42122260668973477, 0.7690888119953864, 0.6467512495194156},
    {0.43183391003460214, 0.7732410611303345, 0.6465974625144175},
    {0.4424452133794696, 0.7773933102652826, 0.6464436755094196},
    {0.4530565167243371, 0.7815455594002306, 0.6462898885044215},
    {0.46366782006920415, 0.7856978085351789, 0.6461361014994234},
    {0.4742791234140715, 0.7898500576701271, 0.6459823144944252},
    {0.4848904267589389, 0.794002306805075, 0.6458285274894271},
    {0.49550173010380627, 0.7981545559400232, 0.645674740484429},
    {0.5061130334486739, 0.8023068050749711, 0.6455209534794312},
    {0.5167243367935411, 0.8064590542099194, 0.645367166474433},
    {0.5273356401384084, 0.8106113033448674, 0.6452133794694349},
    {0.5379469434832758, 0.8147635524798154, 0.6450595924644369},
    {0.548558246828143, 0.8189158016147636, 0.6449058054594388},
    {0.5591695501730105, 0.8230680507497117, 0.6447520184544406},
    {0.5697808535178779, 0.8272202998846598, 0.6445982314494427},
    {0.5803921568627453, 0.831372549019608, 0.6444444444444446},
    {0.5910034602076126, 0.8355247981545562, 0.6442906574394465},
    {0.60161476355248, 0.8396770472895041, 0.6441368704344483},
    {0.6122260668973473, 0.8438292964244521, 0.6439830834294502},
    {0.6228373702422147, 0.8479815455594002, 0.6438292964244523},
    {0.633448673587082, 0.8521337946943485, 0.6436755094194541},
    {0.6440599769319493, 0.8562860438292964, 0.6435217224144562},
    {0.6546712802768165, 0.8604382929642447, 0.6433679354094579},
    {0.6652825836216838, 0.8645905420991928, 0.6432141484044598},
    {0.675124951941561, 0.8685121107266438, 0.6422145328719724},
    {0.6841983852364476, 0.8722029988465975, 0.6403690888119954},
    {0.6932718185313342, 0.8758938869665513, 0.6385236447520186},
    {0.7023452518262208, 0.8795847750865051, 0.6366782006920415},
    {0.7114186851211074, 0.8832756632064591, 0.6348327566320646},
    {0.7204921184159938, 0.8869665513264131, 0.6329873125720877},
    {0.7295655517108806, 0.890657439446367, 0.6311418685121105},
    {0.7386389850057672, 0.8943483275663208, 0.6292964244521339},
    {0.7477124183006536, 0.8980392156862746, 0.6274509803921569},
    {0.7567858515955403, 0.9017301038062284, 0.62560553633218},
    {0.7658592848904268, 0.9054209919261822, 0.6237600922722031},
    {0.7749327181853134, 0.909111880046136, 0.6219146482122262},
    {0.7840061514802001, 0.9128027681660901, 0.6200692041522492},
    {0.7930795847750867, 0.916493656286044, 0.618223760092272},
    {0.8021530180699734, 0.920184544405998, 0.6163783160322951},
    {0.8112264513648599, 0.9238754325259518, 0.6145328719723183},
    {0.8202998846597466, 0.9275663206459055, 0.6126874279123413},
    {0.8293733179546331, 0.9312572087658594, 0.6108419838523645},
    {0.8384467512495197, 0.9349480968858133, 0.6089965397923875},
    {0.8475201845444063, 0.9386389850057671, 0.6071510957324106},
    {0.8565936178392928, 0.9423298731257211, 0.6053056516724337},
    {0.8656670511341793, 0.9460207612456747, 0.6034602076124568},
    {0.874740484429066, 0.9497116493656288, 0.6016147635524798},
    {0.8838139177239525, 0.9534025374855826, 0.5997693194925027},
    {0.8928873510188393, 0.9570934256055367, 0.5979238754325257},
    {0.9019607843137256, 0.9607843137254903, 0.5960784313725491},
    {0.9058054594386773, 0.962322183775471, 0.6020761245674742},
    {0.9096501345636295, 0.9638600538254517, 0.6080738177623993},
    {0.9134948096885813, 0.9653979238754326, 0.6140715109573244},
    {0.9173394848135333, 0.9669357939254133, 0.6200692041522493},
    {0.9211841599384853, 0.9684736639753941, 0.6260668973471741},
    {0.9250288350634372, 0.9700115340253751, 0.6320645905420991},
    {0.9288735101883892, 0.9715494040753557, 0.6380622837370243},
    {0.932718185313341, 0.9730872741253366, 0.6440599769319492},
    {0.9365628604382931, 0.9746251441753172, 0.6500576701268744},
    {0.9404075355632451, 0.9761630142252982, 0.6560553633217994},
    {0.9442522106881969, 0.9777008842752788, 0.6620530565167244},
    {0.9480968858131487, 0.9792387543252595, 0.6680507497116493},
    {0.9519415609381008, 0.9807766243752404, 0.6740484429065746},
    {0.9557862360630527, 0.9823144944252212, 0.6800461361014994},
    {0.9596309111880046, 0.9838523644752019, 0.6860438292964245},
    {0.9634755863129567, 0.9853902345251826, 0.6920415224913494},
    {0.9673202614379086, 0.9869281045751634, 0.6980392156862747},
    {0.9711649365628605, 0.9884659746251442, 0.7040369088811996},
    {0.9750096116878124, 0.9900038446751249, 0.7100346020761246},
    {0.9788542868127644, 0.9915417147251058, 0.7160322952710494},
    {0.9826989619377164, 0.9930795847750866, 0.7220299884659747},
    {0.9865436370626683, 0.9946174548250674, 0.7280276816608996},
    {0.9903883121876201, 0.9961553248750481, 0.7340253748558248},
    {0.9942329873125721, 0.9976931949250287, 0.7400230680507498},
    {0.9980776624375239, 0.9992310649750095, 0.746020761245675},
    {0.9999231064975008, 0.9976163014225297, 0.7450211457131873},
    {0.9997693194925027, 0.9928489042675892, 0.7370242214532873},
    {0.9996155324875048, 0.988081507112649, 0.729027297193387},
    {0.9994617454825068, 0.9833141099577085, 0.7210303729334873},
    {0.9993079584775085, 0.9785467128027682, 0.7130334486735873},
    {0.9991541714725107, 0.9737793156478278, 0.7050365244136869},
    {0.9990003844675125, 0.9690119184928874, 0.697039600153787},
    {0.9988465974625144, 0.9642445213379468, 0.6890426758938869},
    {0.9986928104575163, 0.9594771241830067, 0.681045751633987},
    {0.9985390234525182, 0.9547097270280661, 0.6730488273740869},
    {0.9983852364475202, 0.9499423298731258, 0.6650519031141869},
    {0.9982314494425222, 0.9451749327181854, 0.6570549788542868},
    {0.998077662437524, 0.9404075355632449, 0.6490580545943867},
    {0.9979238754325258, 0.9356401384083044, 0.6410611303344868},
    {0.9977700884275279, 0.930872741253364, 0.6330642060745867},
    {0.9976163014225298, 0.9261053440984237, 0.6250672818146866},
    {0.9974625144175316, 0.9213379469434833, 0.6170703575547868},
    {0.9973087274125335, 0.9165705497885427, 0.6090734332948867},
    {0.9971549404075356, 0.9118031526336023, 0.6010765090349864},
    {0.9970011534025374, 0.907035755478662, 0.5930795847750865},
    {0.9968473663975395, 0.9022683583237218, 0.5850826605151866},
    {0.9966935793925413, 0.8975009611687812, 0.5770857362552864},
    {0.9965397923875433, 0.892733564013841, 0.5690888119953864},
    {0.9963860053825454, 0.8879661668589005, 0.5610918877354861},
    {0.9962322183775473, 0.88319876970396, 0.5530949634755861},
    {0.996078431372549, 0.8784313725490196, 0.5450980392156861},
    {0.9959246443675508, 0.8707420222991156, 0.538638985005767},
    {0.9957708573625528, 0.8630526720492118, 0.5321799307958477},
    {0.9956170703575548, 0.855363321799308, 0.5257208765859284},
    {0.9954632833525567, 0.847673971549404, 0.519261822376009},
    {0.9953094963475586, 0.8399846212995001, 0.5128027681660898},
    {0.9951557093425605, 0.8322952710495963, 0.5063437139561706},
    {0.9950019223375625, 0.8246059207996924, 0.4998846597462513},
    {0.9948481353325646, 0.8169165705497885, 0.4934256055363321},
    {0.9946943483275664, 0.8092272202998847, 0.48696655132641264},
    {0.9945405613225683, 0.8015378700499808, 0.48050749711649365},
    {0.9943867743175702, 0.7938485198000771, 0.47404844290657466},
    {0.9942329873125721, 0.7861591695501731, 0.4675893886966551},
    {0.994079200307574, 0.7784698193002692, 0.4611303344867359},
    {0.993925413302576, 0.7707804690503652, 0.4546712802768166},
    {0.9937716262975778, 0.7630911188004613, 0.4482122260668975},
    {0.99361783929258, 0.7554017685505575, 0.44175317185697793},
    {0.9934640522875816, 0.7477124183006536, 0.43529411764705894},
    {0.9933102652825835, 0.7400230680507496, 0.4288350634371395},
    {0.9931564782775857, 0.7323337178008458, 0.4223760092272202},
    {0.9930026912725872, 0.724644367550942, 0.4159169550173013},
    {0.9928489042675894, 0.716955017301038, 0.40945790080738176},
    {0.9926951172625912, 0.7092656670511341, 0.40299884659746266},
    {0.9925413302575933, 0.7015763168012303, 0.3965397923875432},
    {0.9923875432525952, 0.6938869665513263, 0.390080738177624},
    {0.992233756247597, 0.6861976163014225, 0.3836216839677048},
    {0.9914648212226067, 0.677354863514033, 0.3780853517877738},
    {0.990080738177624, 0.6673587081891583, 0.3734717416378317},
    {0.9886966551326414, 0.6573625528642829, 0.36885813148788904},
    {0.9873125720876587, 0.647366397539408, 0.36424452133794694},
    {0.985928489042676, 0.6373702422145329, 0.3596309111880045},
    {0.9845444059976933, 0.6273740868896578, 0.35501730103806217},
    {0.9831603229527106, 0.6173779315647828, 0.35040369088811985},
    {0.981776239907728, 0.6073817762399077, 0.3457900807381774},
    {0.9803921568627451, 0.5973856209150328, 0.3411764705882355},
    {0.9790080738177624, 0.5873894655901575, 0.33656286043829287},
    {0.9776239907727798, 0.5773933102652827, 0.33194925028835065},
    {0.976239907727797, 0.5673971549404075, 0.3273356401384082},
    {0.9748558246828143, 0.5574009996155325, 0.3227220299884661},
    {0.9734717416378316, 0.5474048442906574, 0.3181084198385238},
    {0.9720876585928488, 0.5374086889657824, 0.31349480968858146},
    {0.9707035755478661, 0.5274125336409075, 0.30888119953863913},
    {0.9693194925028835, 0.5174163783160323, 0.3042675893886967},
    {0.9679354094579009, 0.5074202229911575, 0.2996539792387545},
    {0.9665513264129182, 0.4974240676662822, 0.2950403690888119},
    {0.9651672433679354, 0.4874279123414072, 0.2904267589388697},
    {0.9637831603229527, 0.47743175701653207, 0.2858131487889273},
    {0.9623990772779699, 0.4674356016916571, 0.28119953863898506},
    {0.9610149942329872, 0.4574394463667821, 0.27658592848904273},
    {0.9596309111880046, 0.447443291041907, 0.2719723183391005},
    {0.958246828143022, 0.43744713571703187, 0.2673587081891581},
    {0.9568627450980394, 0.42745098039215673, 0.26274509803921564},
    {0.9520953479430986, 0.42022299115724726, 0.26459054209919286},
    {0.9473279507881583, 0.4129950019223377, 0.26643598615916975},
    {0.9425605536332179, 0.40576701268742793, 0.26828143021914663},
    {0.9377931564782777, 0.39853902345251835, 0.2701268742791235},
    {0.9330257593233372, 0.3913110342176086, 0.2719723183391004},
    {0.928258362168397, 0.38408304498269874, 0.27381776239907707},
    {0.9234909650134564, 0.3768550557477892, 0.2756632064590543},
    {0.9187235678585162, 0.36962706651287985, 0.2775086505190312},
    {0.9139561707035755, 0.36239907727797027, 0.2793540945790083},
    {0.9091887735486351, 0.3551710880430604, 0.28119953863898506},
    {0.9044213763936948, 0.34794309880815055, 0.28304498269896183},
    {0.8996539792387543, 0.340715109573241, 0.28489042675893894},
    {0.8948865820838141, 0.3334871203383314, 0.28673587081891583},
    {0.8901191849288733, 0.326259131103422, 0.28858131487889305},
    {0.8853517877739333, 0.319031141868512, 0.2904267589388695},
    {0.8805843906189926, 0.3118031526336025, 0.2922722029988466},
    {0.8758169934640523, 0.30457516339869284, 0.2941176470588236},
    {0.871049596309112, 0.2973471741637831, 0.2959630911188005},
    {0.8662821991541714, 0.29011918492887356, 0.2978085351787776},
    {0.8615148019992313, 0.2828911956939638, 0.2996539792387542},
    {0.8567474048442908, 0.2756632064590542, 0.30149942329873114},
    {0.8519800076893502, 0.26843521722414465, 0.3033448673587078},
    {0.84721261053441, 0.2612072279892348, 0.3051903114186846},
    {0.8424452133794698, 0.2539792387543254, 0.3070357554786618},
    {0.8376778162245291, 0.24675124951941552, 0.3088811995386387},
    {0.8310649750096116, 0.23844675124951953, 0.30880430603613984},
    {0.8226066897347173, 0.22906574394463686, 0.3068050749711647},
    {0.8141484044598231, 0.21968473663975407, 0.30480584390618953},
    {0.8056901191849288, 0.2103037293348713, 0.30280661284121513},
    {0.7972318339100345, 0.20092272202998862, 0.30080738177624006},
    {0.7887735486351404, 0.19154171472510573, 0.2988081507112643},
    {0.7803152633602461, 0.18216070742022294, 0.2968089196462894},
    {0.7718569780853518, 0.17277970011534027, 0.2948096885813144},
    {0.7633986928104576, 0.1633986928104575, 0.29281045751633983},
    {0.7549404075355632, 0.15401768550557482, 0.29081122645136503},
    {0.746482122260669, 0.14463667820069204, 0.2888119953863893},
    {0.7380238369857748, 0.13525567089580925, 0.2868127643214149},
    {0.7295655517108804, 0.12587466359092658, 0.2848135332564399},
    {0.7211072664359862, 0.1164936562860438, 0.28281430219146436},
    {0.7126489811610921, 0.10711264898116135, 0.2808150711264894},
    {0.7041906958861976, 0.09773164167627835, 0.2788158400615146},
    {0.6957324106113034, 0.08835063437139556, 0.27681660899653987},
    {0.6872741253364091, 0.07896962706651289, 0.2748173779315646},
    {0.6788158400615149, 0.06958861976163011, 0.27281814686658995},
    {0.6703575547866205, 0.06020761245674744, 0.2708189158016141},
    {0.6618992695117263, 0.05082660515186466, 0.26881968473663936},
    {0.6534409842368321, 0.041445597846981874, 0.2668204536716644},
    {0.6449826989619377, 0.0320645905420992, 0.26482122260668983},
    {0.6365244136870435, 0.02268358323721642, 0.2628219915417146},
    {0.6280661284121491, 0.013302575932333749, 0.26082276047673913}};

}  // namespace viz
}  // namespace ouster
