/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDTokenTree : NSObject {
}
+ (id)buildSubtree:(unsigned)subtree formula:(id)formula;	// 0x32c97585
+ (id)buildSubtreeAtIndex:(unsigned *)index formula:(id)formula;	// 0x32c975c9
+ (unsigned)childCountForToken:(unsigned)token formula:(id)formula;	// 0x32c97769
+ (bool)isTokenAttrASum:(unsigned short)sum;	// 0x32d02c2d
+ (bool)isTokenNoOp:(unsigned)op formula:(id)formula;	// 0x32c97949
@end

