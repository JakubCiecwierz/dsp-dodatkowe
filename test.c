//generator.h
Rec_Init(Rec_Cfg_t * hRecCfg, float amplitude, float frequency);
Rec_GetValue(Rec_Cfg_t * hRecCfg);
Rec_SetFrequency(Rec_Cfg_t * hRecCfg, float frequency);
Rec_SetAmplitude(Rec_Cfg_t * hRecCfg, float amplitude);

typedef struct {
    float amplitude;
    float phase;
    float phaseStep;
} Rec_Cfg_t;

//generator.c
void Rec_Init(Rec_Cfg_t * hRecCfg, float amplitude, float frequency){
    frequency = 
    hRecCfg->
    hRecCfg->
    hRecCfg->
}

float Rec_GetValue(Rec_Cfg_t * hRecCfg){
    int pulse;

    pulse = (hRecCfg->amplitude * sinf(hRecCfg->)) >= 0 ? 1 : 0;
    hRecCfg->phase += hRecCfg->phaseStep;
    hRecCfg->phase = fmodf(hRecCfg->phase, PDSP_2PI);

    return pulse;
}

void Rec_SetFrequency(Rec_Cfg_t * hRecCfg, float frequency){
    frequency =
    hRecCfg->phaseStep
}

void Rec_SetAmplitude(Rec_Cfg_t * hRecCfg, float amplitude){
    hRecCfg->amplitude
}

