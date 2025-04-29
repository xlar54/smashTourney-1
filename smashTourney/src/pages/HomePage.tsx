import './HomePage.css'

function HomePage()
{

  return (
    <>
      <div className="flex flex-col text-center round-md text-white p-2 m-2">
        <h2 className=" text-6xl p-2 m-2">Welcome!</h2>

        <div className="text-4xl p-2 m-2">
          <div >
            <label htmlFor="username">Username:</label>

            <input type="text" id="username" name="username" />
          </div>

          <div >
            <label htmlFor="password">Password:</label>

            <input type="password" id="password" name="password" />

          </div>
        </div>

        <div className='flex flex-col text-4xl p-2 m-2'>
          <label>Sign In</label>

          <label>Or</label>

          <label>Continue As Guest</label>
        </div>


      </div>
    </>
  );
}

export default HomePage;
