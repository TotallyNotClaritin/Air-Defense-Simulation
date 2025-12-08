FORMAT

The csvs are formatted as such:
type, x, y, z, Vx, Vy, Vz, yaw, pitch, roll

cross-section lookup tables are formatted as such per type as is known:
width, relative yaw, relative pitch, relative roll


Where the type is the asset or threats' correspondence to a known military asset.

Radar cross-sections will be assumed to be of a fixed size despite relative orientation unless otherwise specified with a lookup table.

NOTE: Radar cross-sections (RCS) are a visualization of what a perfectly reflective metal sphere of that area would return to the
radar. e of a lay content, RCS tends to be listed in dBsm [Decibels relative 1 m^2 (of area of a metal sphere)] (that is the difference in the reduction in power returned to the radar... or perhaps increase as a flat wall like say the side of a big old piece of sheet metal dead on will beat that sphere which will scatter some of the light).

FURTHER: RCS is dependent on orientation, the front profile of a missile has a much smaller cross-sectional area and likewise a smaller
RCS when compared to the side profile: which is larger and generally has a much larger RCS for example. Generally assets like these will be oriented of course roughly toward their targets; but assets like smaller drones may present a number of different profiles to the observer and can make tracking interesting.

ALSO: It is possible to estimate the RCS of an object using analytical methods accounting for specular effects like reflection as one would imagine as well as non-specular phenomena like the: "The traveling surface wave phenomenon, a significant echo mechanism for long, smooth bodies, manifests itself in the radar cross section (RCS) pattern of realistic targets for horizontal polarization and grazing angles of incidence" [1]

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
If the type or asset is not recognized the user will be presented a list of available threats or assets to
see if there was any possible mismatch and make the correction.

If the threat or asset is not included on the list the user will be able to input a variety of properties for the object
though any unique behavior beyond what has been described for all assets and threats will require implementation.


Available Assets include:

Bleh
Bleh
Bleh\

Available Threats include:

Kh-58
Kh-28
Kh-31
Shahed 123
Shahed Saegheh 1/2

[1] Radar Cross Section Calculations of Traveling Surface Waves: https://apps.dtic.mil/sti/pdfs/ADA227032.pdf
