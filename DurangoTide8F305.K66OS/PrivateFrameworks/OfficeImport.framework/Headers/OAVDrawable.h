/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OAVDrawable : NSObject {
}
+ (CGRect)readCoordBounds:(xmlNode *)bounds;	// 0x345665b9
+ (id)readDrawableFromNode:(xmlNode *)node inNamespace:(id)aNamespace state:(id)state;	// 0x345184e1
+ (id)readDrawablesFromParent:(xmlNode *)parent inNamespace:(id)aNamespace state:(id)state;	// 0x34518465
+ (void)readFromDrawable:(xmlNode *)drawable toDrawable:(id)drawable2 state:(id)state;	// 0x34518d09
+ (xmlDoc *)vmlDocumentFromPart:(id)part;	// 0x3453a5e9
@end

