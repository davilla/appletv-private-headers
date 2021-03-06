/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


@interface PBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x370bae49
+ (id)createBuildFromBuildType:(int)buildType;	// 0x37170f11
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x37170ba1
+ (int)directionFromFlyDirection:(int)flyDirection;	// 0x37170e79
+ (BOOL)escherIsFullySupported;	// 0x36f66d85
+ (int)presetIdFromFlyMethod:(int)flyMethod isEntrance:(BOOL)entrance;	// 0x37170da5
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x36f63525
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x36f80a11
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x36f62f49
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x37170aa1
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x36f6378d
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x36f63a49
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x36f664d9
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x36f63899
+ (BOOL)tablesAreAllowed;	// 0x36f7ff41
@end

