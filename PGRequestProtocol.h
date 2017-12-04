//
//  PGRequestProtocol.h
//  AFNetworking
//
//  Created by Whirlwind on 2017/12/4.
//

#import <Foundation/Foundation.h>

@protocol PGRequestProtocol <NSObject>

/**
 * 接口在api gateway 上注册的方法名
 */
@property (nonatomic, readonly) NSString* API_GATEWAY_METHOD;

/**
 * 接口在api gateway 上注册的地址
 */
@property (nonatomic, readonly) NSString* API_GATEWAY_URI;

/**
 * 输出NSDictionary
 */
- (NSDictionary *)dictionaryEncode;

/**
 * Dictionary 解析
 */
- (void)dictionaryDecode:(NSDictionary*) dict_map;

@end
