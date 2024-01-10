M=$(PWD)
AUDIO_ROOT=$(KERNEL_SRC)/$(M)

# Include Makefile.include for Samsung specific configurations
$(info "run Makefile.include in audio-kernel for Samsung boards")
include $(AUDIO_ROOT)/Makefile.include

KBUILD_OPTIONS += AUDIO_ROOT=$(AUDIO_ROOT)
KBUILD_OPTIONS += MODNAME=audio_dlkm
KBUILD_OPTIONS += BOARD_PLATFORM=kalama
KBUILD_OPTIONS += KBUILD_EXTRA_SYMBOLS=$(OUT_DIR)/../sm8550-modules/qcom/opensource/mm-drivers/msm_ext_display/Module.symvers

all: modules

clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) clean

%:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) $@ $(KBUILD_OPTIONS)

