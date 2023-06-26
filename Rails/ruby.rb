bin/ rails server - start the server 

how to generate a controller in rails 

bin/ rails generate controller Articles index --skip-routes 
after this the rails will create several files for you :
create  app/controllers/articles_controller.rb
invoke  erb
create  app/views/articles
create  app/views/articles/index.html.erb
create  test/controllers/articles_controller_test.rb
create  app/helpers/articles_helper.rb


