
import BasicButton from "../components/basicButton";

const HomePage: React.FC = () =>
{

  return (
    <div className="flex flex-col items-center justify-center h-dvh w-dvw"> {/* center all content and take up entire viewport */}
      <div className="flex flex-col content-center text-center rounded shadow-md text-white m-2 text-4xl max-w-9/10 "> {/* max width is 90 percent of parent (viewport) inner flexbox to center content and text */}
        <h2 className="bg-black/25 rounded shadow-md text-6xl p-2 my-6 ">Welcome!</h2>

        <label htmlFor="username" >Username:</label>
        <input className="shrink bg-white m-5 rounded shadow-md " type="text" id="username" name="username" />

        <label htmlFor="password">Password:</label>
        <input className="shrink bg-white m-5 rounded shadow-md " type="password" id="password" name="password" />

        <div className='shrink flex flex-col text-2xl p-4 m-4 '>

          <BasicButton buttonLabel="Sign In">
          </BasicButton>

          <a href="#" className="m-4 bg-black/25 rounded shadow-md">
            Or
          </a>

          <BasicButton buttonLabel="Continue As Guest">
          </BasicButton>

        </div>
      </div>
    </div>
  );
}

export default HomePage;
