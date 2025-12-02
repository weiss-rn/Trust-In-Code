package com.weiss.M71OU

import net.fabricmc.api.ModInitializer;
import net.minecraft.item.Item;
import net.minecraft.item.ItemGroup;
import net.minecraft.util.Identifier;
import net.minecraft.util.registry.Registry;

public class M71OU implements ModInitializer {
    public static final String MOD_ID = "m71ou";
    public static final Item TUNGSTEN_INGOT = new Item(newItem.Settings().group(ItemGroup.MISC);

    @Override
    public void onInitialize() {
    System.out.println("M71OU initialized!");
    Registry.register(
            Registry.ITEM,
            new Identifier(MOD_ID, "tungsten_ingot"),
            TUNGSTEN_INGOT
        );
    }
}
