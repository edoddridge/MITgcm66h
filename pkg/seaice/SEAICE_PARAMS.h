C $Header$
C $Name$

C     *==========================================================*
C     | SEAICE_PARAMS.h
C     | o Basic parameter header for sea ice model.
C     *==========================================================*

C--   COMMON /SEAICE_PARM_L/ Logical parameters of sea ice model.
C
C     SEAICEwriteState  :: If true, write sea ice state to file;
C                          default is false.
C     SEAICEuseDYNAMICS :: If false, do not use dynamics;
C                          default is to use dynamics.
C     SEAICEuseTEM      :: to use truncated ellipse method (see Geiger et al.
C                          1998) set this parameter to true, default is false
C     SEAICEuseEVP      :: If false, use Zhangs LSR solver for VP equations
C                          if true use elastic viscous plastic solver
C     SEAICEuseFREEDRIFT :: If True use free drift velocity instead of EVP
C                           or LSR
C     SEAICEuseTILT      :: If true then include surface tilt term in dynamics
C     SEAICEheatConsFix  :: If true then fix ocn<->seaice advective heat flux.
C     SEAICEuseEVPpickup :: Set to false in order to start EVP solver with
C                          non-EVP pickup files.  Default is true.
C                          Applied only if SEAICEuseEVP=.TRUE.
C     SEAICEuseFluxForm :: use flux form for advection and diffusion
C                          of seaice
C     SEAICEuseMetricTerms :: use metric terms for dynamics solver
C                          (default = .true. )
C     SEAICEuseFlooding :: turn on scheme to convert submerged snow into ice
C     SEAICEadvHeff     :: turn on advection of effective thickness
C                          (default = .true.)
C     SEAICEadvArea     :: turn on advection of fraction area
C                          (default = .true.)
C     SEAICEadvSnow     :: turn on advection of snow (does not work with
C                          non-default Leap-frog scheme for advection)
C     SEAICEadvSalt     :: turn on advection of salt (does not work with
C                          non-default Leap-frog scheme for advection)
C     useHB87stressCoupling :: use an intergral over ice and ocean surface
C                          layer to define surface stresses on ocean
C                          following Hibler and Bryan (1987, JPO)
C     usePW79thermodynamics :: use "0-layer" thermodynamics as described in
C                           Parkinson and Washington (1979) and Hibler (1979)
C     useMaykutSatVapPoly :: use Maykut Polynomial for saturation vapor pressure
C                         instead of extended temp-range exponential law; def=F.
C     SEAICE_mcPheeStepFunc    :: use step function (not linear tapering) in
C                           ocean-ice turbulent flux
C     SEAICE_useMultDimSnow :: use same fixed pdf for snow as for MULITCATEGORY ICE
C     SEAICE_doOpenWaterGrowth :: use open water heat flux directly to grow ice
C                           (when false cool ocean, and grow later if needed)
C     SEAICE_doOpenWaterMelt   :: use open water heat flux directly to melt ice
C                           (when false warm ocean, and melt later if needed)
C     SEAICE_salinityTracer    :: use SItracer to exchange and trace ocean
C                           salt in ice
C     SEAICE_age Tracer        :: use SItracer to trace the age of ice
C     SEAICErestoreUnderIce :: restore surface T/S also underneath ice
C                          ( default is false )
C     SEAICE_no_slip    :: apply no slip boundary conditions to seaice velocity
C     SEAICE_clipVelocities :: clip velocities to +/- 40cm/s
C     SEAICE_maskRHS    :: mask the RHS of the solver where there is no ice
C     SEAICE_tave_mdsio :: write TimeAverage output using MDSIO
C     SEAICE_dump_mdsio :: write snap-shot output   using MDSIO
C     SEAICE_mon_stdio  :: write monitor to std-outp
C     SEAICE_tave_mnc   :: write TimeAverage output using MNC
C     SEAICE_dump_mnc   :: write snap-shot output   using MNC
C     SEAICE_mon_mnc    :: write monitor to netcdf file
      LOGICAL
     &     SEAICEwriteState, SEAICEuseDYNAMICS, SEAICEuseEVP,
     &     SEAICEuseFREEDRIFT, SEAICEuseTILT, SEAICEuseTEM,
     &     SEAICEheatConsFix,
     &     SEAICEuseMetricTerms,
     &     SEAICEuseEVPpickup, SEAICEuseFlooding,
     &     SEAICEadvHeff, SEAICEadvArea,
     &     SEAICEadvSnow, SEAICEadvSalt,
     &     SEAICEuseFluxForm, useHB87stressCoupling,
     &     usePW79thermodynamics, useMaykutSatVapPoly,
     &     SEAICE_mcPheeStepFunc, SEAICE_useMultDimSnow,
     &     SEAICE_doOpenWaterGrowth, SEAICE_doOpenWaterMelt,
     &     SEAICE_salinityTracer, SEAICE_ageTracer,
     &     SEAICErestoreUnderIce,
     &     SEAICE_no_slip, SEAICE_clipVelocities, SEAICE_maskRHS,
     &     SEAICE_tave_mdsio, SEAICE_dump_mdsio, SEAICE_mon_stdio,
     &     SEAICE_tave_mnc,   SEAICE_dump_mnc,   SEAICE_mon_mnc
      COMMON /SEAICE_PARM_L/
     &     SEAICEwriteState, SEAICEuseDYNAMICS, SEAICEuseEVP,
     &     SEAICEuseFREEDRIFT, SEAICEuseTILT, SEAICEuseTEM,
     &     SEAICEheatConsFix,
     &     SEAICEuseMetricTerms,
     &     SEAICEuseEVPpickup, SEAICEuseFlooding,
     &     SEAICEadvHeff, SEAICEadvArea,
     &     SEAICEadvSnow, SEAICEadvSalt,
     &     SEAICEuseFluxForm, useHB87stressCoupling,
     &     usePW79thermodynamics, useMaykutSatVapPoly,
     &     SEAICE_mcPheeStepFunc, SEAICE_useMultDimSnow,
     &     SEAICE_doOpenWaterGrowth, SEAICE_doOpenWaterMelt,
     &     SEAICE_salinityTracer, SEAICE_ageTracer,
     &     SEAICErestoreUnderIce,
     &     SEAICE_no_slip, SEAICE_clipVelocities, SEAICE_maskRHS,
     &     SEAICE_tave_mdsio, SEAICE_dump_mdsio, SEAICE_mon_stdio,
     &     SEAICE_tave_mnc,   SEAICE_dump_mnc,   SEAICE_mon_mnc

C--   COMMON /SEAICE_PARM_I/ Integer valued parameters of sea ice model.
C     IMAX_TICE         :: number of iterations for ice surface temp (default=10)
C     postSolvTempIter :: select flux calculation after surf. temp solver iteration
C                         0 = none, i.e., from last iter ; 2 = full non-lin form
C                         1 = use linearized approx (consistent with tsurf finding)
C     SOLV_MAX_ITERS    :: maximum number of allowed LSR-solver iterations
C     SOLV_NCHECK       :: iteration interval for solver convergence test
C     NPSEUDOTIMESTEPS  :: number of extra pseudo time steps (>= 2)
C     LSR_mixIniGuess   :: control mixing of free-drift sol. into LSR initial guess
C                       :: =0 : no mix ; =2,4 : mix with (1/err)^2,4 factor
C     SEAICEpresPow0    :: HEFF exponent for ice strength below SEAICEpresH0
C     SEAICEpresPow1    :: HEFF exponent for ice strength above SEAICEpresH0
C     SEAICEadvScheme   :: sets the advection scheme for thickness and area
C     SEAICEadvSchArea  :: sets the advection scheme for area
C     SEAICEadvSchHeff  :: sets the advection scheme for effective thickness
C                         (=volume), snow thickness, and salt if available
C     SEAICEadvSchSnow  :: sets the advection scheme for snow on sea-ice
C     SEAICEadvSchSalt  :: sets the advection scheme for sea ice salinity
C     SEAICEadvSchSnow  :: sets the advection scheme for snow on sea-ice
C     SEAICE_areaLossFormula :: selects formula for ice cover loss from melt
C                        :: 1=from all but only melt conributions by ATM and OCN
C                        :: 2=from net melt-growth>0 by ATM and OCN
C                        :: 3=from predicted melt by ATM
C     SEAICE_areaGainFormula :: selects formula for ice cover gain from open water growth
C                        :: 1=from growth by ATM
C                        :: 2=from predicted growth by ATM
C     SEAICE_multDim     :: number of ice categories
C     SEAICE_debugPointI :: I,J index for seaice-specific debuggin
C     SEAICE_debugPointJ
C
      INTEGER IMAX_TICE, postSolvTempIter
      INTEGER SOLV_MAX_ITERS, SOLV_NCHECK
      INTEGER NPSEUDOTIMESTEPS
      INTEGER LSR_mixIniGuess
      INTEGER SEAICEadvScheme
      INTEGER SEAICEadvSchArea
      INTEGER SEAICEadvSchHeff
      INTEGER SEAICEadvSchSnow
      INTEGER SEAICEadvSchSalt
      INTEGER SEAICEadjMODE
      INTEGER SEAICE_areaLossFormula
      INTEGER SEAICE_areaGainFormula
      INTEGER SEAICE_multDim
      INTEGER SEAICE_debugPointI
      INTEGER SEAICE_debugPointJ
      INTEGER SEAICEpresPow0, SEAICEpresPow1
      COMMON /SEAICE_PARM_I/
     &     IMAX_TICE, postSolvTempIter,
     &     SOLV_MAX_ITERS, SOLV_NCHECK,
     &     NPSEUDOTIMESTEPS,
     &     LSR_mixIniGuess,
     &     SEAICEpresPow0, SEAICEpresPow1,
     &     SEAICEadvScheme,
     &     SEAICEadvSchArea,
     &     SEAICEadvSchHeff,
     &     SEAICEadvSchSnow,
     &     SEAICEadvSchSalt,
     &     SEAICEadjMODE,
     &     SEAICE_areaLossFormula,
     &     SEAICE_areaGainFormula,
     &     SEAICE_multDim,
     &     SEAICE_debugPointI,
     &     SEAICE_debugPointJ

C--   COMMON /SEAICE_PARM_C/ Character valued sea ice model parameters.
C     AreaFile          :: File containing initial sea-ice concentration
C     HsnowFile         :: File containing initial snow thickness
C     HsaltFile         :: File containing initial sea ice salt content
C     HeffFile          :: File containing initial sea-ice thickness
C     uIceFile          :: File containing initial sea-ice U comp. velocity
C     vIceFile          :: File containing initial sea-ice V comp. velocity
C        !!! NOTE !!! Initial sea-ice thickness can also be set using
C        SEAICE_initialHEFF below.  But a constant initial condition
C        can mean large artificial fluxes of heat and freshwater in
C        the surface layer during the first model time step.
C
      CHARACTER*(MAX_LEN_FNAM) AreaFile
      CHARACTER*(MAX_LEN_FNAM) HsnowFile
      CHARACTER*(MAX_LEN_FNAM) HsaltFile
      CHARACTER*(MAX_LEN_FNAM) HeffFile
      CHARACTER*(MAX_LEN_FNAM) uIceFile
      CHARACTER*(MAX_LEN_FNAM) vIceFile
      COMMON /SEAICE_PARM_C/
     &   AreaFile, HsnowFile, HsaltFile, HeffFile,
     &   uIceFile, vIceFile

C--   COMMON /SEAICE_PARM_RL/ Real valued parameters of sea ice model.
C     SEAICE_deltaTtherm :: Seaice timestep for thermodynamic equations (s)
C     SEAICE_deltaTdyn   :: Seaice timestep for dynamic solver          (s)
C     SEAICE_deltaTevp   :: Seaice timestep for EVP solver              (s)
C     SEAICE_elasticParm :: parameter that sets relaxation timescale
C                           tau = SEAICE_elasticParm * SEAICE_deltaTdyn
C     SEAICE_evpTauRelax :: relaxation timescale tau                    (s)
C     SEAICE_evpDampC    :: evp damping constant (Hunke,JCP,2001)       (kg/m^2)
C     SEAICE_zetaMaxFac  :: factor determining the maximum viscosity    (s)
C                          (default = 5.e+12/2.e4 = 2.5e8)
C     SEAICE_zetaMin     :: lower bound for viscosity (default = 0)    (N s/m^2)
C     SEAICEpresH0       :: HEFF threshold for ice strength            (m)
C     SEAICE_monFreq     :: SEAICE monitor frequency.                   (s)
C     SEAICE_dumpFreq    :: SEAICE dump frequency.                      (s)
C     SEAICE_taveFreq    :: SEAICE time-averaging frequency.            (s)
C     SEAICE_initialHEFF :: initial sea-ice thickness                   (m)
C     SEAICE_rhoAir      :: density of air                              (kg/m^3)
C     SEAICE_rhoIce      :: density of sea ice                          (kg/m^3)
C     SEAICE_rhoSnow     :: density of snow                             (kg/m^3)
C     ICE2WATR           :: ratio of sea ice density to water density
C     OCEAN_drag         :: air-ocean drag coefficient
C     SEAICE_cpAir       :: specific heat of air                        (J/kg/K)
C
C     SEAICE_drag        :: air-ice drag coefficient
C     SEAICE_waterDrag   :: water-ice drag coefficient * water density
C     SEAICE_dryIceAlb   :: winter albedo
C     SEAICE_wetIceAlb   :: summer albedo
C     SEAICE_drySnowAlb  :: dry snow albedo
C     SEAICE_wetSnowAlb  :: wet snow albedo
C     HO                 :: AKA "lead closing parameter", demarcation thickness
C                           between thin and thick ice. Alternatively, HO (in
C                           meters) can be interpreted as the thickness of ice
C                           formed in open water.
C                           HO is a key ice-growth parameter that determines
C                           the partition between vertical and lateral growth.
C                           The default is 0.5m, increasing this value leads
C                           slower formation of a closed ice cover and thus to
C                           more ice (and thicker) ice, decreasing to faster
C                           formation of a closed ice cover (leads are closing
C                           faster) and thus less (thinner) ice.
C
C     SEAICE_drag_south       :: Southern Ocean SEAICE_drag
C     SEAICE_waterDrag_south  :: Southern Ocean SEAICE_waterDrag
C     SEAICE_dryIceAlb_south  :: Southern Ocean SEAICE_dryIceAlb
C     SEAICE_wetIceAlb_south  :: Southern Ocean SEAICE_wetIceAlb
C     SEAICE_drySnowAlb_south :: Southern Ocean SEAICE_drySnowAlb
C     SEAICE_wetSnowAlb_south :: Southern Ocean SEAICE_wetSnowAlb
C     HO_south                :: Southern Ocean HO
C
C     SEAICE_wetAlbTemp  :: Temp (deg.C) above which wet-albedo values are used
C     SEAICE_waterAlbedo :: water albedo
C     SEAICE_strength    :: sea-ice strength Pstar
C     SEAICE_eccen       :: sea-ice eccentricity of the elliptical yield curve
C     SEAICE_lhFusion    :: latent heat of fusion for ice and snow (J/kg)
C     SEAICE_lhEvap      :: latent heat of evaporation for water (J/kg)
C     SEAICE_dalton      :: Dalton number (= sensible heat transfer coefficient)
C     SEAICE_iceConduct  :: sea-ice conductivity
C     SEAICE_snowConduct :: snow conductivity
C     SEAICE_emissivity  :: longwave ocean-surface emissivity (-)
C     SEAICE_ice_emiss   :: longwave ice-surface emissivity (-)
C     SEAICE_snow_emiss  :: longwave snow-surface emissivity (-)
C     SEAICE_boltzmann   :: Stefan-Boltzman constant (not a run time parameter)
C     SEAICE_snowThick   :: cutoff snow thickness (for snow-albedo)
C     SEAICE_shortwave   :: ice penetration shortwave radiation factor
C     SEAICE_saltFrac    :: salinity of newly formed seaice defined as a
C                           fraction of the ocean surface salinity at the time
C                           of freezing
C     SEAICE_salt0       :: prescribed salinity of seaice (in g/kg).
C     facOpenGrow        :: 0./1. version of logical SEAICE_doOpenWaterGrowth
C     facOpenMelt        :: 0./1. version of logical SEAICE_doOpenWaterMelt
C     SEAICE_mcPheePiston:: ocean-ice turbulent flux "piston velocity" (m/s)
C                           that sets melt efficiency.
C     SEAICE_mcPheeTaper :: tapering down of turbulent flux term with ice
C                           concentration. The 100% cover turb. flux is
C                           multiplied by 1.-SEAICE_mcPheeTaper
C     SEAICE_frazilFrac  :: Fraction of surface level negative heat content
C                           anomalies (relative to the local freezing point)
C                           may contribute as frazil over one time step.
C     SEAICE_tempFrz0    :: sea water freezing point is
C     SEAICE_dTempFrz_dS :: tempFrz = SEAICE_tempFrz0 + salt*SEAICE_dTempFrz_dS
C     SEAICEstressFactor :: factor by which ice affects wind stress (default=1)
C     LSR_ERROR          :: sets accuracy of LSR solver
C     DIFF1              :: parameter used in advect.F
C     SEAICE_area_max    :: usually set to 1. Seeting areaMax below 1 specifies
C                           the minimun amount of leads (1-areaMax) in the
C                           ice pack.
C     SEAICE_area_floor  :: usually set to 1x10^-5. Specifies a minimun
C                           ice fraction in the ice pack.
C     SEAICE_area_reg    :: usually set to 1x10^-5. Specifies a minimun
C                           ice fraction for the purposes of regularization
C     SEAICE_hice_reg    :: usually set to 5 cm. Specifies a minimun
C                           ice thickness for the purposes of regularization
C     SEAICEdiffKhArea   :: sets the diffusivity for area (m^2/s)
C     SEAICEdiffKhHeff   :: sets the diffusivity for effective thickness (m^2/s)
C     SEAICEdiffKhSnow   :: sets the diffusivity for snow on sea-ice (m^2/s)
C     SEAICEdiffKhSalt   :: sets the diffusivity for sea ice salinity (m^2/s)
C     SEAICE_airTurnAngle   :: turning angles of air-ice interfacial stress
C     SEAICE_waterTurnAngle :: and ice-water interfacial stress (in degrees)
C     SEAICE_tauAreaObsRelax :: Timescale of relaxation to observed 
C                               sea ice concentration (s), default=unset
C
      _RL SEAICE_deltaTtherm, SEAICE_deltaTdyn, SEAICE_deltaTevp
      _RL SEAICE_monFreq, SEAICE_dumpFreq, SEAICE_taveFreq
      _RL SEAICE_initialHEFF
      _RL SEAICE_rhoAir, SEAICE_rhoIce, SEAICE_rhoSnow, ICE2WATR
      _RL SEAICE_cpAir
      _RL SEAICE_drag, SEAICE_waterDrag, SEAICE_dryIceAlb
      _RL SEAICE_wetIceAlb, SEAICE_drySnowAlb, SEAICE_wetSnowAlb, HO
      _RL SEAICE_drag_south, SEAICE_waterDrag_south
      _RL SEAICE_dryIceAlb_south, SEAICE_wetIceAlb_south
      _RL SEAICE_drySnowAlb_south, SEAICE_wetSnowAlb_south, HO_south
      _RL SEAICE_wetAlbTemp, SEAICE_waterAlbedo
      _RL SEAICE_strength, SEAICE_eccen
      _RL SEAICE_lhFusion, SEAICE_lhEvap
      _RL SEAICE_dalton
      _RL SEAICE_iceConduct, SEAICE_snowConduct
      _RL SEAICE_emissivity, SEAICE_ice_emiss, SEAICE_snow_emiss
      _RL SEAICE_boltzmann
      _RL SEAICE_snowThick, SEAICE_shortwave
      _RL SEAICE_saltFrac, SEAICE_salt0, SEAICEstressFactor
      _RL SEAICE_mcPheeTaper, SEAICE_mcPheePiston
      _RL SEAICE_frazilFrac, SEAICE_availHeatFrac
      _RL facOpenGrow, facOpenMelt
      _RL SEAICE_tempFrz0, SEAICE_dTempFrz_dS
      _RL OCEAN_drag, LSR_ERROR, DIFF1
      _RL SEAICE_area_reg, SEAICE_hice_reg
      _RL SEAICE_area_floor, SEAICE_area_max
      _RL SEAICE_airTurnAngle, SEAICE_waterTurnAngle
      _RL SEAICE_elasticParm, SEAICE_evpTauRelax
      _RL SEAICE_evpDampC, SEAICE_zetaMin, SEAICE_zetaMaxFac
      _RL SEAICEpresH0
      _RL SEAICEdiffKhArea, SEAICEdiffKhHeff, SEAICEdiffKhSnow
      _RL SEAICEdiffKhSalt
      _RL SEAICE_tauAreaObsRelax

      COMMON /SEAICE_PARM_RL/
     &    SEAICE_deltaTtherm, SEAICE_deltaTdyn,
     &    SEAICE_deltaTevp, SEAICE_elasticParm, SEAICE_evpTauRelax,
     &    SEAICE_evpDampC, SEAICE_zetaMin, SEAICE_zetaMaxFac,
     &    SEAICEpresH0,
     &    SEAICE_monFreq, SEAICE_dumpFreq, SEAICE_taveFreq,
     &    SEAICE_initialHEFF,
     &    SEAICE_rhoAir, SEAICE_rhoIce, SEAICE_rhoSnow, ICE2WATR,
     &    SEAICE_drag, SEAICE_waterDrag, SEAICE_dryIceAlb,
     &    SEAICE_wetIceAlb, SEAICE_drySnowAlb, SEAICE_wetSnowAlb, HO,
     &    SEAICE_drag_south, SEAICE_waterDrag_south,
     &    SEAICE_dryIceAlb_south, SEAICE_wetIceAlb_south,
     &    SEAICE_drySnowAlb_south, SEAICE_wetSnowAlb_south, HO_south,
     &    SEAICE_wetAlbTemp, SEAICE_waterAlbedo,
     &    SEAICE_strength, SEAICE_eccen,
     &    SEAICE_lhFusion, SEAICE_lhEvap,
     &    SEAICE_dalton, SEAICE_cpAir,
     &    SEAICE_iceConduct, SEAICE_snowConduct,
     &    SEAICE_emissivity, SEAICE_ice_emiss, SEAICE_snow_emiss,
     &    SEAICE_boltzmann,
     &    SEAICE_snowThick, SEAICE_shortwave,
     &    SEAICE_saltFrac, SEAICE_salt0, SEAICEstressFactor,
     &    SEAICE_mcPheeTaper, SEAICE_mcPheePiston,
     &    SEAICE_frazilFrac, SEAICE_availHeatFrac,
     &    facOpenGrow, facOpenMelt,
     &    SEAICE_tempFrz0, SEAICE_dTempFrz_dS,
     &    OCEAN_drag, LSR_ERROR, DIFF1,
     &    SEAICE_area_reg, SEAICE_hice_reg,
     &    SEAICE_area_floor, SEAICE_area_max,
     &    SEAICEdiffKhArea, SEAICEdiffKhHeff, SEAICEdiffKhSnow,
     &    SEAICEdiffKhSalt, SEAICE_tauAreaObsRelax,
     &    SEAICE_airTurnAngle, SEAICE_waterTurnAngle

C--   COMMON /SEAICE_BOUND_RL/ Various bounding values
C     MAX_HEFF          :: maximum ice thickness     (m)
C     MIN_ATEMP         :: minimum air temperature   (deg C)
C     MIN_LWDOWN        :: minimum downward longwave (W/m^2)
C     MIN_TICE          :: minimum ice temperature   (deg C)
C     SEAICE_EPS        :: small number used to reduce derivative singularities
C     SEAICE_EPS_SQ     :: small number square
C
      _RL MAX_HEFF, MIN_ATEMP, MIN_LWDOWN, MIN_TICE
      _RL SEAICE_EPS, SEAICE_EPS_SQ
      COMMON /SEAICE_BOUND_RL/
     &     MAX_HEFF, MIN_ATEMP, MIN_LWDOWN, MIN_TICE,
     &     SEAICE_EPS, SEAICE_EPS_SQ

C--   Constants used by sea-ice model
      _RL         ZERO           , ONE           , TWO
      PARAMETER ( ZERO = 0.0 _d 0, ONE = 1.0 _d 0, TWO = 2.0 _d 0 )
      _RL         QUART            , HALF
      PARAMETER ( QUART = 0.25 _d 0, HALF = 0.5 _d 0 )
      _RL siEps
      PARAMETER ( siEps = 1. _d -5 )
      INTEGER MPSEUDOTIMESTEPS
      PARAMETER (MPSEUDOTIMESTEPS=2)

C--   Constants needed by McPhee formulas for turbulent ocean fluxes :
C        Stanton number (dimensionless), typical friction velocity
C        beneath sea ice (m/s), and tapering factor (dimensionless)
      _RL STANTON_NUMBER, USTAR_BASE, MCPHEE_TAPER_FAC
      PARAMETER ( MCPHEE_TAPER_FAC = 12.5 _d 0 , STANTON_NUMBER =
     &            0.0056 _d 0, USTAR_BASE = 0.0125 _d 0 )

C--   identifiers for advected properties
      INTEGER GAD_HEFF,GAD_AREA,GAD_QICE1,GAD_QICE2,GAD_SNOW
      INTEGER GAD_SALT,GAD_SITR
      PARAMETER ( GAD_HEFF  = 1,
     &            GAD_AREA  = 2,
     &            GAD_SNOW  = 3,
     &            GAD_SALT  = 4,
     &            GAD_QICE1 = 5,
     &            GAD_QICE2 = 6,
     &            GAD_SITR  = 7)

CEH3 ;;; Local Variables: ***
CEH3 ;;; mode:fortran ***
CEH3 ;;; End: ***
