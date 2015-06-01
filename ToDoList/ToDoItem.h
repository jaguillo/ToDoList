//
//  ToDoItem.h
//  ToDoList
//
//  Created by Juan Aguillon on 6/1/15.
//  Copyright (c) 2015 Juan Aguillon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
