/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty : NSKeyValueProperty {
	NSString *_relationshipKey;	// 12 = 0xc
	NSString *_keyPathFromRelatedObject;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_relationshipProperty;	// 20 = 0x14
	NSString *_keyPathWithoutOperatorComponents;	// 24 = 0x18
	BOOL _isAllowedToResultInForwarding;	// 28 = 0x1c
	id _dependentValueKeyOrKeys;	// 32 = 0x20
	BOOL _dependentValueKeyOrKeysIsASet;	// 36 = 0x24
}
- (void)_addDependentValueKey:(id)key;	// 0x34683c99
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x34683c79
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path firstDotIndex:(unsigned)index propertiesBeingInitialized:(CFSetRef)initialized;	// 0x34683a2d
- (Class)_isaForAutonotifying;	// 0x34683fa1
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x346846fd
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x34684c9d
- (void)dealloc;	// 0x346c1195
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)set;	// 0x34684a35
- (id)description;	// 0x346c1235
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x346c12c9
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x34683d95
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x34683fc1
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x34684ced
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x346847bd
@end

