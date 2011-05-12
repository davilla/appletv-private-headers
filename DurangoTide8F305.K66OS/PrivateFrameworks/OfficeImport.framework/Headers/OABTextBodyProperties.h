/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABTextBodyProperties : NSObject {
}
+ (void)readTextBodyProperties:(id)properties textBox:(const EshTextBox *)box useDefaults:(bool)defaults state:(id)state;	// 0x34443ba5
+ (void)setAutoFit:(bool)fit textBodyProperties:(id)properties;	// 0x3444547d
+ (void)setIsAnchorCenter:(int)center textBodyProperties:(id)properties;	// 0x34445609
+ (void)setTextAnchor:(int)anchor textBodyProperties:(id)properties;	// 0x344455b1
+ (void)setTextDirection:(int)direction textBodyProperties:(id)properties;	// 0x34445425
+ (void)setTextFlow:(int)flow textBodyProperties:(id)properties;	// 0x344440c1
+ (void)setTextRotation:(int)rotation textBodyProperties:(id)properties;	// 0x344453ad
+ (void)setWrap:(int)wrap textBodyProperties:(id)properties;	// 0x3444555d
+ (void)writeTextBodyProperties:(id)properties toShapeBase:(EshShapeBase *)shapeBase state:(id)state;	// 0x345e74a1
@end

