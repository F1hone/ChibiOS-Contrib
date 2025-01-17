# Compiler options here.
ifeq ($(SEGGER_RTT_ACTIVE),)
  $(error "SEGGER SystemView needs segger_rtt.mk")
endif

# SEGGER RTT files.
SEGGERSYSTEMVIEWCSRC =  $(CHIBIOS_CONTRIB)/ext/SEGGER/SYSTEMVIEW/SEGGER_SYSVIEW.c 								\
						$(CHIBIOS_CONTRIB)/os/various/segger_bindings/SYSTEMVIEW/SEGGER_SYSVIEW_ChibiOS.c
SEGGERSYSTEMVIEWINC =   $(CHIBIOS_CONTRIB)/ext/SEGGER/SYSTEMVIEW												\
						$(CHIBIOS_CONTRIB)/os/various/segger_bindings/SYSTEMVIEW

ALLCSRC += $(SEGGERSYSTEMVIEWCSRC)
ALLINC += $(SEGGERSYSTEMVIEWINC)