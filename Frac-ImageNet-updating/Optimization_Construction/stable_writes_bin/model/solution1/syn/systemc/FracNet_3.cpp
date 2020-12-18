#include "FracNet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void FracNet::thread_hdltv_gen() {
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
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_BUS32_AWVALID\" :  \"" << m_axi_BUS32_AWVALID.read() << "\" ";
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
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWVALID\" :  \"" << m_axi_BUS512_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_AWREADY\" :  \"" << m_axi_BUS512_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWADDR\" :  \"" << m_axi_BUS512_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWID\" :  \"" << m_axi_BUS512_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWLEN\" :  \"" << m_axi_BUS512_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWSIZE\" :  \"" << m_axi_BUS512_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWBURST\" :  \"" << m_axi_BUS512_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWLOCK\" :  \"" << m_axi_BUS512_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWCACHE\" :  \"" << m_axi_BUS512_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWPROT\" :  \"" << m_axi_BUS512_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWQOS\" :  \"" << m_axi_BUS512_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWREGION\" :  \"" << m_axi_BUS512_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_AWUSER\" :  \"" << m_axi_BUS512_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_WVALID\" :  \"" << m_axi_BUS512_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_WREADY\" :  \"" << m_axi_BUS512_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_WDATA\" :  \"" << m_axi_BUS512_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_WSTRB\" :  \"" << m_axi_BUS512_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_WLAST\" :  \"" << m_axi_BUS512_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_WID\" :  \"" << m_axi_BUS512_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_WUSER\" :  \"" << m_axi_BUS512_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARVALID\" :  \"" << m_axi_BUS512_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_ARREADY\" :  \"" << m_axi_BUS512_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARADDR\" :  \"" << m_axi_BUS512_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARID\" :  \"" << m_axi_BUS512_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARLEN\" :  \"" << m_axi_BUS512_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARSIZE\" :  \"" << m_axi_BUS512_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARBURST\" :  \"" << m_axi_BUS512_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARLOCK\" :  \"" << m_axi_BUS512_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARCACHE\" :  \"" << m_axi_BUS512_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARPROT\" :  \"" << m_axi_BUS512_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARQOS\" :  \"" << m_axi_BUS512_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARREGION\" :  \"" << m_axi_BUS512_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_ARUSER\" :  \"" << m_axi_BUS512_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_RVALID\" :  \"" << m_axi_BUS512_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_RREADY\" :  \"" << m_axi_BUS512_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_RDATA\" :  \"" << m_axi_BUS512_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_RLAST\" :  \"" << m_axi_BUS512_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_RID\" :  \"" << m_axi_BUS512_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_RUSER\" :  \"" << m_axi_BUS512_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_RRESP\" :  \"" << m_axi_BUS512_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_BVALID\" :  \"" << m_axi_BUS512_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_BUS512_BREADY\" :  \"" << m_axi_BUS512_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_BRESP\" :  \"" << m_axi_BUS512_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_BID\" :  \"" << m_axi_BUS512_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_BUS512_BUSER\" :  \"" << m_axi_BUS512_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWVALID\" :  \"" << m_axi_DDR512_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_AWREADY\" :  \"" << m_axi_DDR512_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWADDR\" :  \"" << m_axi_DDR512_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWID\" :  \"" << m_axi_DDR512_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWLEN\" :  \"" << m_axi_DDR512_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWSIZE\" :  \"" << m_axi_DDR512_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWBURST\" :  \"" << m_axi_DDR512_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWLOCK\" :  \"" << m_axi_DDR512_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWCACHE\" :  \"" << m_axi_DDR512_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWPROT\" :  \"" << m_axi_DDR512_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWQOS\" :  \"" << m_axi_DDR512_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWREGION\" :  \"" << m_axi_DDR512_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_AWUSER\" :  \"" << m_axi_DDR512_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_WVALID\" :  \"" << m_axi_DDR512_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_WREADY\" :  \"" << m_axi_DDR512_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_WDATA\" :  \"" << m_axi_DDR512_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_WSTRB\" :  \"" << m_axi_DDR512_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_WLAST\" :  \"" << m_axi_DDR512_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_WID\" :  \"" << m_axi_DDR512_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_WUSER\" :  \"" << m_axi_DDR512_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARVALID\" :  \"" << m_axi_DDR512_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_ARREADY\" :  \"" << m_axi_DDR512_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARADDR\" :  \"" << m_axi_DDR512_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARID\" :  \"" << m_axi_DDR512_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARLEN\" :  \"" << m_axi_DDR512_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARSIZE\" :  \"" << m_axi_DDR512_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARBURST\" :  \"" << m_axi_DDR512_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARLOCK\" :  \"" << m_axi_DDR512_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARCACHE\" :  \"" << m_axi_DDR512_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARPROT\" :  \"" << m_axi_DDR512_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARQOS\" :  \"" << m_axi_DDR512_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARREGION\" :  \"" << m_axi_DDR512_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_ARUSER\" :  \"" << m_axi_DDR512_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_RVALID\" :  \"" << m_axi_DDR512_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_RREADY\" :  \"" << m_axi_DDR512_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_RDATA\" :  \"" << m_axi_DDR512_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_RLAST\" :  \"" << m_axi_DDR512_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_RID\" :  \"" << m_axi_DDR512_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_RUSER\" :  \"" << m_axi_DDR512_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_RRESP\" :  \"" << m_axi_DDR512_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_BVALID\" :  \"" << m_axi_DDR512_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_DDR512_BREADY\" :  \"" << m_axi_DDR512_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_BRESP\" :  \"" << m_axi_DDR512_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_BID\" :  \"" << m_axi_DDR512_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_DDR512_BUSER\" :  \"" << m_axi_DDR512_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_AWVALID\" :  \"" << s_axi_CTRL_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_AWREADY\" :  \"" << s_axi_CTRL_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_AWADDR\" :  \"" << s_axi_CTRL_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_WVALID\" :  \"" << s_axi_CTRL_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_WREADY\" :  \"" << s_axi_CTRL_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_WDATA\" :  \"" << s_axi_CTRL_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_WSTRB\" :  \"" << s_axi_CTRL_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_ARVALID\" :  \"" << s_axi_CTRL_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_ARREADY\" :  \"" << s_axi_CTRL_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_ARADDR\" :  \"" << s_axi_CTRL_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_RVALID\" :  \"" << s_axi_CTRL_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_RREADY\" :  \"" << s_axi_CTRL_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_RDATA\" :  \"" << s_axi_CTRL_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_RRESP\" :  \"" << s_axi_CTRL_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BVALID\" :  \"" << s_axi_CTRL_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BREADY\" :  \"" << s_axi_CTRL_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BRESP\" :  \"" << s_axi_CTRL_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

