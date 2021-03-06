/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSUserDefaults.h> // Unknown library


@interface NSUserDefaults (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x302ccd5d
- (id)valueForKey:(id)key;	// 0x3026d905
@end

@interface NSUserDefaults (NSUserDefaults)
@property(retain) id searchList;	// G=0x302f3c7d; S=0x302f3ca5; converted property
+ (void)resetStandardUserDefaults;	// 0x302f3db1
+ (void)setStandardUserDefaults:(id)defaults;	// 0x302f3d39
+ (id)standardUserDefaults;	// 0x3024f8a5
- (id)init;	// 0x302f3cf9
- (id)initWithUser:(id)user;	// 0x3026fee1
- (id)URLForKey:(id)key;	// 0x302f3a81
- (void)addSuiteNamed:(id)named;	// 0x302f3cd1
- (id)arrayForKey:(id)key;	// 0x30281561
- (BOOL)boolForKey:(id)key;	// 0x3024fa2d
- (id)dataForKey:(id)key;	// 0x302f3991
- (id)dictionaryForKey:(id)key;	// 0x302f3955
- (id)dictionaryRepresentation;	// 0x302f3c51
- (double)doubleForKey:(id)key;	// 0x3027e9f5
- (float)floatForKey:(id)key;	// 0x302807cd
- (int)integerForKey:(id)key;	// 0x3026e031
- (long long)longForKey:(id)key;	// 0x302f39cd
- (id)objectForKey:(id)key;	// 0x3024fb45
- (id)objectForKey:(id)key inDomain:(id)domain;	// 0x302f36c9
- (BOOL)objectIsForcedForKey:(id)key;	// 0x302f4155
- (BOOL)objectIsForcedForKey:(id)key inDomain:(id)domain;	// 0x302f4171
- (id)persistentDomainForName:(id)name;	// 0x30254b61
- (id)persistentDomainNames;	// 0x302f3f25
- (void)registerDefaults:(id)defaults;	// 0x30275b69
- (oneway void)release;	// 0x302564dd
- (void)removeObjectForKey:(id)key;	// 0x302563b9
- (void)removeObjectForKey:(id)key inDomain:(id)domain;	// 0x302f3931
- (void)removePersistentDomainForName:(id)name;	// 0x302f4141
- (void)removeSuiteNamed:(id)named;	// 0x302f3ce5
- (void)removeVolatileDomainForName:(id)name;	// 0x302f3ed5
// converted property getter: - (id)searchList;	// 0x302f3c7d
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x3025654d
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x30288bbd
- (void)setFloat:(float)aFloat forKey:(id)key;	// 0x30288bf9
- (void)setInteger:(int)integer forKey:(id)key;	// 0x30288c39
- (void)setLong:(long long)aLong forKey:(id)key;	// 0x302f3b59
- (void)setObject:(id)object forKey:(id)key;	// 0x30256419
- (void)setObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x302f37c1
- (void)setPersistentDomain:(id)domain forName:(id)name;	// 0x302f3ff9
// converted property setter: - (void)setSearchList:(id)list;	// 0x302f3ca5
- (void)setURL:(id)url forKey:(id)key;	// 0x302f3b95
- (void)setVolatileDomain:(id)domain forName:(id)name;	// 0x302f3e85
- (id)stringArrayForKey:(id)key;	// 0x302805f1
- (id)stringForKey:(id)key;	// 0x30280765
- (BOOL)synchronize;	// 0x3026d8e9
- (id)volatileDomainForName:(id)name;	// 0x302f3e59
- (id)volatileDomainNames;	// 0x302f3e2d
@end

@interface NSUserDefaults (NSUserDefaults_NSURLExtras)
+ (void)_ensureAndLockPreferredLanguageLock;	// 0x30303229
+ (void)_web_addDefaultsChangeObserver;	// 0x303032f9
+ (void)_web_defaultsDidChange;	// 0x303032a5
+ (id)_web_preferredLanguageCode;	// 0x303033ad
@end

