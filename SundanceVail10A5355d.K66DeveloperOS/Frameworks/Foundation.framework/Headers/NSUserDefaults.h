/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSUserDefaults.h> // Unknown library


@interface NSUserDefaults (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x346b9d31
- (id)valueForKey:(id)key;	// 0x34655cb5
@end

@interface NSUserDefaults (NSUserDefaults)
@property(retain) id searchList;	// G=0x346e1c75; S=0x346e1c9d; converted property
+ (void)resetStandardUserDefaults;	// 0x346e1da9
+ (void)setStandardUserDefaults:(id)defaults;	// 0x346e1d31
+ (id)standardUserDefaults;	// 0x346376c5
- (id)init;	// 0x346e1cf1
- (id)initWithUser:(id)user;	// 0x34658239
- (id)URLForKey:(id)key;	// 0x346e1a85
- (void)addSuiteNamed:(id)named;	// 0x346e1cc9
- (id)arrayForKey:(id)key;	// 0x3466979d
- (BOOL)boolForKey:(id)key;	// 0x34637849
- (id)dataForKey:(id)key;	// 0x346e198d
- (id)dictionaryForKey:(id)key;	// 0x346e1951
- (id)dictionaryRepresentation;	// 0x346e1c49
- (double)doubleForKey:(id)key;	// 0x34666b39
- (float)floatForKey:(id)key;	// 0x34668971
- (int)integerForKey:(id)key;	// 0x346563a1
- (long long)longForKey:(id)key;	// 0x346e19cd
- (id)objectForKey:(id)key;	// 0x34637965
- (id)objectForKey:(id)key inDomain:(id)domain;	// 0x346e16c5
- (BOOL)objectIsForcedForKey:(id)key;	// 0x346e2155
- (BOOL)objectIsForcedForKey:(id)key inDomain:(id)domain;	// 0x346e2171
- (id)persistentDomainForName:(id)name;	// 0x3463cc09
- (id)persistentDomainNames;	// 0x346e1f1d
- (void)registerDefaults:(id)defaults;	// 0x3465dd21
- (oneway void)release;	// 0x3463e615
- (void)removeObjectForKey:(id)key;	// 0x3463e4f5
- (void)removeObjectForKey:(id)key inDomain:(id)domain;	// 0x346e1929
- (void)removePersistentDomainForName:(id)name;	// 0x346e213d
- (void)removeSuiteNamed:(id)named;	// 0x346e1cdd
- (void)removeVolatileDomainForName:(id)name;	// 0x346e1ecd
// converted property getter: - (id)searchList;	// 0x346e1c75
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x3463e689
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x34670f8d
- (void)setFloat:(float)aFloat forKey:(id)key;	// 0x34670fcd
- (void)setInteger:(int)integer forKey:(id)key;	// 0x34671011
- (void)setLong:(long long)aLong forKey:(id)key;	// 0x346e1b61
- (void)setObject:(id)object forKey:(id)key;	// 0x3463e555
- (void)setObject:(id)object forKey:(id)key inDomain:(id)domain;	// 0x346e17bd
- (void)setPersistentDomain:(id)domain forName:(id)name;	// 0x346e1ff1
// converted property setter: - (void)setSearchList:(id)list;	// 0x346e1c9d
- (void)setURL:(id)url forKey:(id)key;	// 0x346e1ba1
- (void)setVolatileDomain:(id)domain forName:(id)name;	// 0x346e1e7d
- (id)stringArrayForKey:(id)key;	// 0x34668759
- (id)stringForKey:(id)key;	// 0x34668905
- (BOOL)synchronize;	// 0x34655c99
- (id)volatileDomainForName:(id)name;	// 0x346e1e51
- (id)volatileDomainNames;	// 0x346e1e25
@end

@interface NSUserDefaults (NSUserDefaults_NSURLExtras)
+ (void)_ensureAndLockPreferredLanguageLock;	// 0x346f1a75
+ (void)_web_addDefaultsChangeObserver;	// 0x346f1b45
+ (void)_web_defaultsDidChange;	// 0x346f1af1
+ (id)_web_preferredLanguageCode;	// 0x346f1bf9
@end

