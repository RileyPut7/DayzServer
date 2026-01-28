modded class LBLayoutManager {

	override string GetLayoutPathOriginal(string name) {
		if (name == "HoverLoot") return "LBmaster_HoverLoot/gui/layouts/helper/overlay.layout";

		return super.GetLayoutPathOriginal(name);
	}

}