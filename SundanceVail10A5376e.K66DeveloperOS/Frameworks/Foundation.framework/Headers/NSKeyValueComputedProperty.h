/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
	NSString *_operationName;	// 12 = 0xc
	NSString *_operationArgumentKeyPath;	// 16 = 0x10
	NSKeyValueProperty *_operationArgumentProperty;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x34db833d
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x34db831d
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x34db80d5
- (Class)_isaForAutonotifying;	// 0x34db835d
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x34db837d
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x34db83c1
- (void)dealloc;	// 0x34db8211
- (id)description;	// 0x34db8289
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x34db84f1
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x34db8401
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x34db8435
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x34db84ad
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x34db8469
@end

