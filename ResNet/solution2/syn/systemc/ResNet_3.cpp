#include "ResNet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ResNet::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_IMG_AWVALID\" :  \"" << m_axi_IMG_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_AWREADY\" :  \"" << m_axi_IMG_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWADDR\" :  \"" << m_axi_IMG_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWID\" :  \"" << m_axi_IMG_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWLEN\" :  \"" << m_axi_IMG_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWSIZE\" :  \"" << m_axi_IMG_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWBURST\" :  \"" << m_axi_IMG_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWLOCK\" :  \"" << m_axi_IMG_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWCACHE\" :  \"" << m_axi_IMG_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWPROT\" :  \"" << m_axi_IMG_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWQOS\" :  \"" << m_axi_IMG_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWREGION\" :  \"" << m_axi_IMG_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_AWUSER\" :  \"" << m_axi_IMG_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_WVALID\" :  \"" << m_axi_IMG_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_WREADY\" :  \"" << m_axi_IMG_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_WDATA\" :  \"" << m_axi_IMG_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_WSTRB\" :  \"" << m_axi_IMG_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_WLAST\" :  \"" << m_axi_IMG_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_WID\" :  \"" << m_axi_IMG_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_WUSER\" :  \"" << m_axi_IMG_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARVALID\" :  \"" << m_axi_IMG_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_ARREADY\" :  \"" << m_axi_IMG_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARADDR\" :  \"" << m_axi_IMG_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARID\" :  \"" << m_axi_IMG_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARLEN\" :  \"" << m_axi_IMG_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARSIZE\" :  \"" << m_axi_IMG_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARBURST\" :  \"" << m_axi_IMG_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARLOCK\" :  \"" << m_axi_IMG_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARCACHE\" :  \"" << m_axi_IMG_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARPROT\" :  \"" << m_axi_IMG_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARQOS\" :  \"" << m_axi_IMG_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARREGION\" :  \"" << m_axi_IMG_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_ARUSER\" :  \"" << m_axi_IMG_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_RVALID\" :  \"" << m_axi_IMG_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_RREADY\" :  \"" << m_axi_IMG_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_RDATA\" :  \"" << m_axi_IMG_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_RLAST\" :  \"" << m_axi_IMG_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_RID\" :  \"" << m_axi_IMG_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_RUSER\" :  \"" << m_axi_IMG_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_RRESP\" :  \"" << m_axi_IMG_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_BVALID\" :  \"" << m_axi_IMG_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_IMG_BREADY\" :  \"" << m_axi_IMG_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_BRESP\" :  \"" << m_axi_IMG_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_BID\" :  \"" << m_axi_IMG_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_IMG_BUSER\" :  \"" << m_axi_IMG_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWVALID\" :  \"" << m_axi_BUS32_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_AWREADY\" :  \"" << m_axi_BUS32_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWADDR\" :  \"" << m_axi_BUS32_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWID\" :  \"" << m_axi_BUS32_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWLEN\" :  \"" << m_axi_BUS32_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWSIZE\" :  \"" << m_axi_BUS32_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWBURST\" :  \"" << m_axi_BUS32_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWLOCK\" :  \"" << m_axi_BUS32_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWCACHE\" :  \"" << m_axi_BUS32_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWPROT\" :  \"" << m_axi_BUS32_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWQOS\" :  \"" << m_axi_BUS32_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWREGION\" :  \"" << m_axi_BUS32_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_AWUSER\" :  \"" << m_axi_BUS32_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_WVALID\" :  \"" << m_axi_BUS32_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_WREADY\" :  \"" << m_axi_BUS32_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_WDATA\" :  \"" << m_axi_BUS32_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_WSTRB\" :  \"" << m_axi_BUS32_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_WLAST\" :  \"" << m_axi_BUS32_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_WID\" :  \"" << m_axi_BUS32_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_WUSER\" :  \"" << m_axi_BUS32_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARVALID\" :  \"" << m_axi_BUS32_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_ARREADY\" :  \"" << m_axi_BUS32_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARADDR\" :  \"" << m_axi_BUS32_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARID\" :  \"" << m_axi_BUS32_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARLEN\" :  \"" << m_axi_BUS32_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARSIZE\" :  \"" << m_axi_BUS32_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARBURST\" :  \"" << m_axi_BUS32_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARLOCK\" :  \"" << m_axi_BUS32_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARCACHE\" :  \"" << m_axi_BUS32_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARPROT\" :  \"" << m_axi_BUS32_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARQOS\" :  \"" << m_axi_BUS32_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARREGION\" :  \"" << m_axi_BUS32_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_ARUSER\" :  \"" << m_axi_BUS32_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_RVALID\" :  \"" << m_axi_BUS32_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_RREADY\" :  \"" << m_axi_BUS32_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_RDATA\" :  \"" << m_axi_BUS32_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_RLAST\" :  \"" << m_axi_BUS32_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_RID\" :  \"" << m_axi_BUS32_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_RUSER\" :  \"" << m_axi_BUS32_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_RRESP\" :  \"" << m_axi_BUS32_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_BVALID\" :  \"" << m_axi_BUS32_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS32_BREADY\" :  \"" << m_axi_BUS32_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_BRESP\" :  \"" << m_axi_BUS32_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_BID\" :  \"" << m_axi_BUS32_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS32_BUSER\" :  \"" << m_axi_BUS32_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

